/*
 * XREFs of ?_FindInsertPos@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU_InsertPosResult@12@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18004FA54
 * Callers:
 *     ??$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@$0A@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@utl@@_N@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x18004F770 (--$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@$0A@.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x180006CE8 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ?_InitBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAXXZ @ 0x1800142B4 (-_InitBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfS.c)
 *     ?_AllocBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashBucket@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@_K@Z @ 0x180014408 (-_AllocBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnf.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x18002ED1C (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 */

__int64 __fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_FindInsertPos(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3)
{
  __int64 v3; // rdi
  unsigned __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rax
  const wchar_t *v13; // rdi
  __int64 *v14; // r14
  __int128 v16; // [rsp+20h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-10h]

  v3 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 32);
  v5 = 8LL << a1;
  v7 = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, (unsigned __int64)a3);
  v8 = *(_QWORD *)(v3 + 16);
  v9 = v7;
  v10 = v7 & (v5 - 1);
  if ( v8 )
  {
    v12 = 2 * v10;
    v13 = *(const wchar_t **)(v8 + 8 * v12);
    if ( v13 )
    {
      v14 = **(__int64 ***)(v8 + 8 * v12 + 8);
      while ( v13 != (const wchar_t *)v14 )
      {
        if ( *((_QWORD *)v13 + 2) >= v9 )
        {
          if ( *((_QWORD *)v13 + 2) > v9 )
            break;
          if ( utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v8, a3, v13 + 12) )
          {
            *(_QWORD *)&v16 = v13;
            LOBYTE(v17) = 2;
            goto LABEL_16;
          }
        }
        v13 = *(const wchar_t **)v13;
      }
      *(_QWORD *)&v16 = v13;
      goto LABEL_15;
    }
LABEL_4:
    *(_QWORD *)&v16 = 0LL;
LABEL_15:
    LOBYTE(v17) = 0;
    goto LABEL_16;
  }
  v11 = utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_AllocBuckets(
          0LL,
          v5);
  *(_QWORD *)(v3 + 16) = v11;
  if ( v11 )
  {
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_InitBuckets(v3);
    goto LABEL_4;
  }
  *(_QWORD *)&v16 = 0LL;
  LOBYTE(v17) = 1;
LABEL_16:
  *((_QWORD *)&v16 + 1) = v9;
  *(_OWORD *)a2 = v16;
  *(_QWORD *)(a2 + 16) = v17;
  return a2;
}
