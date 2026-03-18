/*
 * XREFs of MiAddSpecialPurposeMemoryComplete @ 0x14096DEDC
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x14098259C (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140982688 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x14096E960 (MiSpecialPurposeMemoryRemoved.c)
 */

void __fastcall MiAddSpecialPurposeMemoryComplete(__int64 *a1, volatile signed __int64 **a2, int a3)
{
  __int64 v3; // rsi
  volatile signed __int64 *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( a3 < 0 )
  {
    v3 = *a1;
    v5 = *a2;
    if ( (_InterlockedExchangeAdd64(*a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    *a2 = 0LL;
    MiSpecialPurposeMemoryRemoved(v3);
  }
}
