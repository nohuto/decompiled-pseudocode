/*
 * XREFs of MiAddSpecialPurposeMemoryComplete @ 0x140A46D3C
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x140A456CC (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140A457B8 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140A47844 (MiSpecialPurposeMemoryRemoved.c)
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
      && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    *a2 = 0LL;
    MiSpecialPurposeMemoryRemoved(v3);
  }
}
