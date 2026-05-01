/*
 * XREFs of ?_UnlinkNode@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@_K@Z @ 0x18004FBF0
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001A7B0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003AE4C (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_UnlinkNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  v5 = (__int64 *)a2[1];
  v6 = *a2;
  *v5 = *a2;
  *(_QWORD *)(v6 + 8) = v5;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 2 * (a3 & a2[2]);
  if ( *(__int64 **)(v7 + 16 * (a3 & a2[2])) == a2 )
  {
    if ( *(__int64 **)(v7 + 16 * (a3 & a2[2]) + 8) == a2 )
    {
      v9 = 0LL;
      *(_QWORD *)(v7 + 16 * (a3 & a2[2]) + 8) = 0LL;
    }
    else
    {
      v9 = *a2;
    }
    *(_QWORD *)(v7 + 8 * v8) = v9;
  }
  else if ( *(__int64 **)(v7 + 16 * (a3 & a2[2]) + 8) == a2 )
  {
    *(_QWORD *)(v7 + 16 * (a3 & a2[2]) + 8) = a2[1];
  }
  --*(_QWORD *)(a1 + 24);
  return a2;
}
