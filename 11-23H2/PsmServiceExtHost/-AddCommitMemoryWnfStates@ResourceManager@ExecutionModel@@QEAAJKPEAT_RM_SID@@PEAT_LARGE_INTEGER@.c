/*
 * XREFs of ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000544C
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x180004DA8 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x180005670 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x1800056D8 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006450 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@$0A@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@utl@@_N@1@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@Z @ 0x18004F570 (--$emplace@AEAU_RM_PSM_HOST_INFO@@AEAUCommitMemoryWnfStates@ResourceManager@ExecutionModel@@$0A@.c)
 *     ??$find@X@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18004F614 (--$find@X@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfState.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AddCommitMemoryWnfStates(
        struct _RM_SERVICE_GLOBALS **this,
        unsigned int a2,
        union _RM_SID *a3,
        union _LARGE_INTEGER *a4,
        union _LARGE_INTEGER *a5)
{
  __int64 result; // rax
  union _LARGE_INTEGER *v10; // rbx
  struct _RM_ACTIVITY_HOST *v11; // rsi
  unsigned int v12; // edx
  _DWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST *v14; // [rsp+38h] [rbp-C8h] BYREF
  char v15; // [rsp+40h] [rbp-C0h]
  _BYTE v16[8]; // [rsp+48h] [rbp-B8h] BYREF
  struct _WNF_STATE_NAME v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h]
  _BYTE v20[560]; // [rsp+80h] [rbp-80h] BYREF

  *(_OWORD *)v17[0].Data = 0LL;
  memset_0(v20, 0, 0x228uLL);
  result = (*((__int64 (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*this + 5))(this, a2, v20);
  if ( (int)result >= 0 )
  {
    v10 = *(union _LARGE_INTEGER **)utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::find<void>(
                                      this + 21,
                                      v16,
                                      v20);
    if ( v10 == (union _LARGE_INTEGER *)(this + 21) )
    {
      result = ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(a3, v17, &v17[1]);
      if ( (int)result < 0 )
        return result;
      utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::emplace<_RM_PSM_HOST_INFO &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &,0>(
        this + 21,
        &v14,
        v20,
        v17);
      if ( !v15 )
      {
        NtDeleteWnfStateName(v17);
        NtDeleteWnfStateName(&v17[1]);
        return 2147942414LL;
      }
      v10 = (union _LARGE_INTEGER *)v14;
      if ( (int)RmpActivityHostFindByPsmId(this[16], (struct _RM_PSM_HOST_INFO *)v20, &v14) < 0 )
      {
        v18 = 0LL;
        v19 = 0LL;
        RtlPublishWnfStateData(*(_QWORD *)&v17[1], 0LL, &v18, 24LL, 0LL);
        v13[0] = 0;
        v13[1] = 1;
        RtlPublishWnfStateData(*(_QWORD *)v17, 0LL, v13, 8LL, 0LL);
      }
      else
      {
        v11 = v14;
        HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)v14 + 64), 0);
        RmpActivityHostPublishCommitLimit(v11, *((_QWORD *)v11 + 174), 1u);
        (*((void (__fastcall **)(struct _RM_SERVICE_GLOBALS **, struct _RM_ACTIVITY_HOST *, _QWORD, _QWORD))*this + 4))(
          this,
          v11,
          0LL,
          *((unsigned int *)v11 + 350));
        HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)v11 + 64), v12);
        RmpObjectRelease(v11);
      }
    }
    *a4 = v10[72];
    *a5 = v10[73];
    return 0LL;
  }
  return result;
}
