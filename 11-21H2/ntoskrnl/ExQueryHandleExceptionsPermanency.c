/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x14025C4BC
 * Callers:
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v7; // rsi
  __int64 v8; // rax
  struct _KTHREAD *v9; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // r9d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    *a2 = 1;
    LOBYTE(v8) = (*(_DWORD *)(v8 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    LOBYTE(v8) = 1;
  }
  else
  {
    *a2 = 0;
  }
  *a3 = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  v9 = KeGetCurrentThread();
  if ( v7 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v9->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&v9[1].Process;
  v12 = v7 & 0x7FFFFFFFFFFFFFFCLL;
  v13 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v12
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v13 = (unsigned int)(v13 + 1);
    p_Process += 96;
    if ( (unsigned int)v13 >= 6 )
      goto LABEL_20;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v13, v12);
      _disable();
    }
    v14 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v9->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v14 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v9, v7, v14);
    return KeLeaveCriticalRegionThread(CurrentThread);
  }
LABEL_20:
  if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, v7, SessionId, 0LL);
  _enable();
  return KeLeaveCriticalRegionThread(CurrentThread);
}
