/*
 * XREFs of ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180005C14
 * Callers:
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x180005670 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x180005D28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$find@X@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18004F614 (--$find@X@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfState.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CommitMemoryLimitChange(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  char *v6; // rbx
  __int64 v9; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  int v16; // edi
  __int64 v17; // rcx
  int v18; // [rsp+50h] [rbp-31h] BYREF
  __int64 v19; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-21h] BYREF
  __int64 v21; // [rsp+68h] [rbp-19h] BYREF
  __int64 v22; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v23[3]; // [rsp+78h] [rbp-9h] BYREF

  v6 = (char *)this + 168;
  v9 = utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::find<void>(
         (char *)this + 168,
         &v19,
         a2);
  if ( *(char **)v9 == v6 )
  {
    return 0;
  }
  else
  {
    v12 = *(_QWORD *)(*(_QWORD *)v9 + 584LL);
    v23[0] = a3;
    v23[1] = a4;
    v23[2] = a5;
    v13 = RtlPublishWnfStateData(v12, 0LL, v23, 24LL, 0LL);
    v16 = v13;
    if ( (unsigned int)dword_1800DB218 > 5 )
    {
      v17 = *((_QWORD *)a2 + 68);
      v18 = v13;
      v20 = a5;
      v21 = a4;
      v22 = a3;
      v19 = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v17,
        (unsigned int)&unk_1800C3431,
        v14,
        v15,
        (__int64)&v18,
        (__int64)&v19,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20);
    }
    if ( v16 >= 0 )
      return 0;
    return (unsigned int)v16;
  }
}
