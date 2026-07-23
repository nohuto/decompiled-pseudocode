/*
 * XREFs of MiAddSpecialPurposeMemoryCleanup @ 0x140A46F74
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x140A4597C (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140A45A68 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiAddSpecialPurposeMemoryCleanup(__int64 a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // zf

  v2 = *a2;
  if ( *a2 )
  {
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    CurrentThread = KeGetCurrentThread();
    v5 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( a1 )
    PsDereferencePartition(a1);
}
