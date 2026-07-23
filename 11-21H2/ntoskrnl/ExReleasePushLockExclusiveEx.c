/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x1402AC630
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  char *v7; // rbx
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
      v6 = (unsigned int)sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v6 = 0xFFFFFFFFLL;
    _disable();
    v7 = (char *)CurrentThread + 1696;
    v8 = 0LL;
    do
    {
      if ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v7[18]
        && (*(_DWORD *)v7 & 1) == 0
        && *((_DWORD *)v7 + 2) == (_DWORD)v6 )
      {
        v7[18] = 0;
        if ( *(__int64 *)v7 < 0 )
        {
          *v7 |= 2u;
          _enable();
          sub_14034EE30(v7, v6, v8);
          _disable();
        }
        v9 = *((_DWORD *)v7 + 22);
        *((_DWORD *)v7 + 22) = 0;
        v7[17] = 0;
        *(_QWORD *)v7 = 0LL;
        LOBYTE(v4) = v7[16];
        *((_BYTE *)CurrentThread + 792) |= 1 << v4;
        _enable();
        if ( v9 )
          LOBYTE(v4) = sub_14022B568((ULONG_PTR)CurrentThread, BugCheckParameter2, v9);
        return v4;
      }
      v8 = (unsigned int)(v8 + 1);
      v7 += 96;
    }
    while ( (unsigned int)v8 < 6 );
    v4 = *((_DWORD *)CurrentThread + 30);
    if ( (v4 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)v6, 0LL);
    _enable();
  }
  return v4;
}
