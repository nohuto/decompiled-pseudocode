/*
 * XREFs of ??$_NewNodeConstruct@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x180012EEC
 * Callers:
 *     ??$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@$0A@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@utl@@_N@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x18004F770 (--$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@$0A@.c)
 * Callees:
 *     ??$_NewNode@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@utl@@IEAA?AU?$_UninitializedAllocation@V?$allocator@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@@1@XZ @ 0x18004F620 (--$_NewNode@U-$_HashNode@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@.c)
 *     ??$_NewNodeCommit@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@utl@@IEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@1@AEAU?$_UninitializedAllocation@V?$allocator@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@utl@@@1@_N@Z @ 0x18004F654 (--$_NewNodeCommit@U-$_HashNode@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceMa.c)
 *     ??1?$_UninitializedAllocation@V?$allocator@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@utl@@@utl@@QEAA@XZ @ 0x18004F840 (--1-$_UninitializedAllocation@V-$allocator@U-$_HashNode@U-$pair@QEAUResourceHandle__@ExecutionMo.c)
 */

__int64 __fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_NewNodeConstruct<_RM_PSM_HOST_INFO &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3)
{
  __int64 v5; // r8
  _OWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rbx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  utl::_ContainerBase<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>::_NewNode<utl::_HashNode<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>(
    a1,
    &v12);
  v6 = 0LL;
  if ( v12 )
  {
    v7 = v12 + 24;
    v8 = 4LL;
    v6 = (_OWORD *)(v12 + 24);
    v5 = 128LL;
    do
    {
      *v6 = *a2;
      v6[1] = a2[1];
      v6[2] = a2[2];
      v6[3] = a2[3];
      v6[4] = a2[4];
      v6[5] = a2[5];
      v6[6] = a2[6];
      v6 += 8;
      v9 = a2[7];
      a2 += 8;
      *(v6 - 1) = v9;
      --v8;
    }
    while ( v8 );
    *v6 = *a2;
    v6[1] = a2[1];
    *((_QWORD *)v6 + 4) = *((_QWORD *)a2 + 4);
    LOBYTE(v6) = 1;
    *(_OWORD *)(v7 + 552) = *a3;
  }
  LOBYTE(v5) = (_BYTE)v6;
  v10 = utl::_ContainerBase<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>::_NewNodeCommit<utl::_HashNode<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>(
          v6,
          &v12,
          v5);
  utl::_UninitializedAllocation<utl::allocator<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>>::~_UninitializedAllocation<utl::allocator<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>>(&v12);
  return v10;
}
