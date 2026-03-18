/*
 * XREFs of PspStorageRemoveObject @ 0x1409B4B90
 * Callers:
 *     PsRemoveSiloContext @ 0x1409AB7E0 (PsRemoveSiloContext.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1B50 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x1402A0EDC (PspGetStorageArrayIfPossible.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageRemoveObject(__int64 a1, unsigned int a2, char a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  int v7; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12[4]; // [rsp+28h] [rbp-20h] BYREF

  v11 = 0;
  v12[0] = 0LL;
  result = PspGetStorageArrayIfPossible(a1, a2, &v11, v12);
  v7 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = v12[0] + 16LL * v11;
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
    {
      if ( a3 || (v10 & 1) == 0 )
      {
        *(_QWORD *)(v9 + 8) = 0LL;
        v10 &= ~1uLL;
      }
      else
      {
        v10 = 0LL;
        v7 = -1073741637;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease(v9);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v7 >= 0 )
    {
      if ( !v10 )
        return 3221226021LL;
      if ( a4 )
        *a4 = v10;
      else
        ObfDereferenceObject((PVOID)v10);
    }
    return (unsigned int)v7;
  }
  return result;
}
