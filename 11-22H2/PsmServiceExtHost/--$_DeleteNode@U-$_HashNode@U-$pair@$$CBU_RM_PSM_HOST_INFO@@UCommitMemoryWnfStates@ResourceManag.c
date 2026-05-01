/*
 * XREFs of ??$_DeleteNode@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@1@@Z @ 0x180014384
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001A7B0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall utl::_ContainerBase<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>::_DeleteNode<utl::_HashNode<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>(
        __int64 a1,
        void *a2)
{
  operator delete(a2);
}
