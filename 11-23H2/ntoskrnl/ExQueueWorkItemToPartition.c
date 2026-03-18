/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1402B959C
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     MiWorkingSetManager @ 0x14021D5F0 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x14021D8FC (MiScanPagefiles.c)
 *     CcPostWorkQueueRegular @ 0x1402986B4 (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x140298940 (CcWorkerThread.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140299310 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x14029B558 (CcWriteBehind.c)
 *     MiAsyncSlabReplenish @ 0x1402B9C84 (MiAsyncSlabReplenish.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C0C04 (CcPostWorkQueueAsyncRead.c)
 *     MiCheckZeroFreeRebalance @ 0x1402D9100 (MiCheckZeroFreeRebalance.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14034313C (SmKmStoreDeleteWhenEmpty.c)
 *     CcAsyncReadWorker @ 0x1403BEB00 (CcAsyncReadWorker.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1403C4410 (CcPostPVCMForDeleteToPartition.c)
 *     CcReEngageWorkerThreads @ 0x1403D47C8 (CcReEngageWorkerThreads.c)
 *     CcIncrementWriteBehindPriority @ 0x140535DD4 (CcIncrementWriteBehindPriority.c)
 *     CcPostWorkQueueSpecial @ 0x140536CB4 (CcPostWorkQueueSpecial.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x14053A134 (CcPostWorkQueueAsyncLazywrite.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1405BFCB0 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     MiWakeLargePageRebuild @ 0x14065E21C (MiWakeLargePageRebuild.c)
 *     MiContractWsSwapPageFile @ 0x140681680 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x1406816C4 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x1409D78C8 (SmStoreCompressionStop.c)
 *     MmScrubMemory @ 0x140A46AC4 (MmScrubMemory.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B76A0 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x1402B7E80 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1402B954C (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(_QWORD *BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v8 = ExpTypeToPriority(v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
