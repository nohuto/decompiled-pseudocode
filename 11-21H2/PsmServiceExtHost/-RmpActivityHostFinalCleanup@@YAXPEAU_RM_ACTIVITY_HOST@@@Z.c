/*
 * XREFs of ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800362A4
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180024940 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x1800363B8 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 */

void __fastcall RmpActivityHostFinalCleanup(struct _RM_ACTIVITY_HOST *a1)
{
  HANDLE *v2; // rcx

  RmpEmptyWorkerCleanup((struct _RM_ACTIVITY_HOST *)((char *)a1 + 1312));
  v2 = (HANDLE *)*((_QWORD *)a1 + 7);
  if ( v2 )
    RmpPartitionRelease(v2);
  HampHostCleanup((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
}
