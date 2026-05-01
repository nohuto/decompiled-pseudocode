/*
 * XREFs of ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18003F0D0
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180021570 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800322C0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180041408 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180041BB4 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ExecutionModel::_ResourceInfo *__fastcall ExecutionModel::_ResourceInfo::_ResourceInfo(
        ExecutionModel::_ResourceInfo *this)
{
  ExecutionModel::_ResourceInfo *result; // rax

  *(_DWORD *)this = -1;
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 10) = 0;
  result = this;
  *((_DWORD *)this + 4) = 101;
  return result;
}
