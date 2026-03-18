/*
 * XREFs of PspStorageAllocSlot @ 0x14081EF8C
 * Callers:
 *     CmpInitSiloSupport @ 0x14080C5C0 (CmpInitSiloSupport.c)
 *     PsAllocSiloContextSlot @ 0x14081EE70 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x14081EE90 (PsRegisterSiloMonitor.c)
 *     VRegSetup @ 0x1408576F0 (VRegSetup.c)
 *     PspInitializeSiloStructures @ 0x140B49810 (PspInitializeSiloStructures.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x140295EA0 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageAllocSlot(ULONG *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  ULONG ClearBitsAndSet; // ebx
  char v5; // di

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspStorageBitmapLock, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageBitmap, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&PspStorageExpansionBitmap, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v3 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspStorageBitmapLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspStorageBitmapLock);
  KeAbPostRelease((ULONG_PTR)&PspStorageBitmapLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v3;
}
