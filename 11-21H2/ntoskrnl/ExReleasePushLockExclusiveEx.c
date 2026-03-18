/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x1402AC630
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // rdx
  char *p_Process; // rbx
  __int64 v8; // r8
  int v9; // r9d

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  LOBYTE(v4) = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( (_BYTE)v4 == 2 )
    LOBYTE(v4) = ExfTryToWakePushLock(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    _disable();
    p_Process = (char *)&CurrentThread[1].Process;
    v8 = 0LL;
    do
    {
      if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && p_Process[18]
        && (*(_DWORD *)p_Process & 1) == 0
        && *((_DWORD *)p_Process + 2) == (_DWORD)SessionId )
      {
        p_Process[18] = 0;
        if ( *(__int64 *)p_Process < 0 )
        {
          *p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process, SessionId, v8);
          _disable();
        }
        v9 = *((_DWORD *)p_Process + 22);
        *((_DWORD *)p_Process + 22) = 0;
        p_Process[17] = 0;
        *(_QWORD *)p_Process = 0LL;
        LOBYTE(v4) = p_Process[16];
        CurrentThread->AbEntrySummary |= 1 << v4;
        _enable();
        if ( v9 )
          LOBYTE(v4) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, BugCheckParameter2, v9);
        return v4;
      }
      v8 = (unsigned int)(v8 + 1);
      p_Process += 96;
    }
    while ( (unsigned int)v8 < 6 );
    v4 = *(&CurrentThread->MiscFlags + 1);
    if ( (v4 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
    _enable();
  }
  return v4;
}
