/*
 * XREFs of ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18008804C
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180024940 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

void __fastcall RmpResourceSetCleanup(HANDLE **a1)
{
  HANDLE *v2; // rcx

  RmpPartitionRelease(a1[8]);
  v2 = a1[9];
  if ( v2 )
    NtClose(v2);
}
