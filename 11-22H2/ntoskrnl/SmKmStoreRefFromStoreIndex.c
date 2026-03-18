/*
 * XREFs of SmKmStoreRefFromStoreIndex @ 0x140344CA4
 * Callers:
 *     SmKmStoreDeleteWhenEmpty @ 0x140342C4C (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140342D90 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     SmKmStoreReference @ 0x140344B20 (SmKmStoreReference.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140344B84 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     SmKmStoreReferenceEx @ 0x140344C68 (SmKmStoreReferenceEx.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140464946 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140464BBC (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140465B32 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1405BEB04 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1405BFDD0 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405C008C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1405C2C84 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1405C2DC4 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x1405C2F50 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1405C52F0 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C9744 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmpPageWrite @ 0x1405C9E40 (SmpPageWrite.c)
 *     SmKmStoreTerminateWorker @ 0x1405CBBF0 (SmKmStoreTerminateWorker.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1405CC658 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405CD180 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405CD370 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1405CD450 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     SmIssueIo @ 0x1405CD578 (SmIssueIo.c)
 *     SmSwapStore @ 0x140681864 (SmSwapStore.c)
 *     SmKmStoreDelete @ 0x1407B7898 (SmKmStoreDelete.c)
 *     SmpKeyedStoreCreate @ 0x1407B7A40 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x1407B7C2C (SmProcessCreateRequest.c)
 *     SmpKeyedStoreDeleteInitiate @ 0x1407B8730 (SmpKeyedStoreDeleteInitiate.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1407E83A4 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessCompressionInfoRequest @ 0x140843254 (SmProcessCompressionInfoRequest.c)
 *     SmEtwEnableCallback @ 0x1408434E0 (SmEtwEnableCallback.c)
 *     SmPartitionCleanup @ 0x1409D6C68 (SmPartitionCleanup.c)
 *     SmProcessListRequestExtended @ 0x1409D70A8 (SmProcessListRequestExtended.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D773C (SmProcessSystemStoreTrimRequest.c)
 *     SmStoreCompressionStop @ 0x1409D7978 (SmStoreCompressionStop.c)
 *     SmKmGetStoreList @ 0x1409D8D50 (SmKmGetStoreList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreRefFromStoreIndex(__int64 a1, unsigned int a2)
{
  char v2; // r8
  __int64 v3; // rdx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)a2 >> 5));
  if ( v3 )
    return v3 + 40LL * (v2 & 0x1F);
  else
    return 0LL;
}
