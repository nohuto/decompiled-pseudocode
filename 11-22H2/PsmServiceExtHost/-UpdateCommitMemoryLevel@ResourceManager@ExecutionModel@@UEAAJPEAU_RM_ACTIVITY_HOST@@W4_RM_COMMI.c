/*
 * XREFs of ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x180011820
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18004F814 (--$find@X@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfState.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v10; // rcx
  int v11; // eax
  _DWORD v12[2]; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v13[16]; // [rsp+38h] [rbp-10h] BYREF

  if ( a3 == a4 )
    return 0;
  v6 = a1 + 168;
  v7 = utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::find<void>(
         a1 + 168,
         v13,
         a2 + 88);
  if ( *(_QWORD *)v7 == v6 )
  {
    return 0;
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)v7 + 576LL);
    v12[0] = a3;
    v12[1] = a4;
    v11 = RtlPublishWnfStateData(v10, 0LL, v12, 8LL, 0LL);
    if ( v11 >= 0 )
      return 0;
    return (unsigned int)v11;
  }
}
