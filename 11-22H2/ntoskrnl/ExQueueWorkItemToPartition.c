/*
 * XREFs of ExQueueWorkItemToPartition @ 0x1402B956C
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     MiWorkingSetManager @ 0x14021D610 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x14021D91C (MiScanPagefiles.c)
 *     CcPostWorkQueueRegular @ 0x140298594 (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x140298820 (CcWorkerThread.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1402991F0 (CcPostWorkQueueCachemapUninit.c)
 *     CcWriteBehind @ 0x14029B438 (CcWriteBehind.c)
 *     MiAsyncSlabReplenish @ 0x1402B9C54 (MiAsyncSlabReplenish.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C0BD4 (CcPostWorkQueueAsyncRead.c)
 *     MiCheckZeroFreeRebalance @ 0x1402D9100 (MiCheckZeroFreeRebalance.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140342C4C (SmKmStoreDeleteWhenEmpty.c)
 *     CcAsyncReadWorker @ 0x1403BE4A0 (CcAsyncReadWorker.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1403C3DB0 (CcPostPVCMForDeleteToPartition.c)
 *     CcReEngageWorkerThreads @ 0x1403D4168 (CcReEngageWorkerThreads.c)
 *     CcIncrementWriteBehindPriority @ 0x140535E84 (CcIncrementWriteBehindPriority.c)
 *     CcPostWorkQueueSpecial @ 0x140536D64 (CcPostWorkQueueSpecial.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x14053A1E4 (CcPostWorkQueueAsyncLazywrite.c)
 *     ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1405BFD40 (-SmHighMemPriorityWatchdogTimerCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z.c)
 *     MiWakeLargePageRebuild @ 0x14065E28C (MiWakeLargePageRebuild.c)
 *     MiContractWsSwapPageFile @ 0x140681680 (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x1406816C4 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x1409D7978 (SmStoreCompressionStop.c)
 *     MmScrubMemory @ 0x140A46B34 (MmScrubMemory.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B7670 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x1402B7E50 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1402B951C (ExpTypeToPriority.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
