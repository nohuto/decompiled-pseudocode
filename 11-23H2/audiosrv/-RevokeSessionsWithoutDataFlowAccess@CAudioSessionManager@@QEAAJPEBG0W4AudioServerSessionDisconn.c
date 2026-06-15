/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800E8968
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_09a5da77b2f5785ab060855f7dd3082a__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800EA540 (std--_Func_impl_no_alloc__lambda_09a5da77b2f5785ab060855f7dd3082a__long_wil--com_pt_ea_1800EA540.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180016D94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wi.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@@Z @ 0x180027074 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSessio.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180047A9C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z @ 0x1800E13E8 (-MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E7078 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@.c)
 *     ?CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z @ 0x1800E7CEC (-CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4,
        bool a5)
{
  const unsigned __int16 *v5; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // rdx
  _QWORD **v9; // rdi
  _QWORD *v10; // rbx
  unsigned __int16 *v11; // r12
  int OwningProcesses; // eax
  void *v13; // rsi
  __int64 v14; // rdx
  void *v15; // rcx
  _QWORD *i; // r14
  unsigned int v17; // esi
  const WCHAR *v18; // rax
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  void *v22; // rcx
  struct _RTL_CRITICAL_SECTION *v23; // r12
  __int64 v24; // rcx
  void *v26; // [rsp+28h] [rbp-41h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-39h]
  __int128 v28; // [rsp+38h] [rbp-31h] BYREF
  __int64 v29; // [rsp+48h] [rbp-21h]
  _BYTE v30[8]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD **v31; // [rsp+60h] [rbp-9h]
  void *v32; // [rsp+70h] [rbp+7h]
  __int128 v33; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]
  unsigned __int64 v35; // [rsp+C8h] [rbp+5Fh] BYREF
  const unsigned __int16 *v36; // [rsp+D0h] [rbp+67h]
  unsigned __int16 *v37; // [rsp+D8h] [rbp+6Fh]

  v37 = a3;
  v36 = a2;
  v5 = a2;
  v7 = a1 + 8;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v35 = v7;
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>(
    (__int64)v30,
    a1 + 48);
  v9 = v31;
  v10 = *v31;
  v11 = v37;
  while ( v10 != v9 )
  {
    if ( !(unsigned int)CAudioSession::MatchesParameters((CAudioSession *)v10[12], v8, v5, v11) )
      goto LABEL_19;
    v28 = 0LL;
    v29 = 0LL;
    OwningProcesses = CAudioSession::GetOwningProcesses(v10[12], (__int64 *)&v28);
    if ( OwningProcesses < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x475,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)OwningProcesses);
      v13 = (void *)v28;
      if ( !(_QWORD)v28 )
        goto LABEL_19;
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
        (__int64 *)v28,
        *((__int64 **)&v28 + 1));
      v14 = v29 - (_QWORD)v13;
      v15 = v13;
      goto LABEL_18;
    }
    for ( i = (_QWORD *)v28; i != *((_QWORD **)&v28 + 1); ++i )
    {
      a5 = 0;
      v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 40LL))(*i);
      v18 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 56LL))(*i);
      v19 = CAudioSessionManager::CapabilityAccessCheck(v18, v17, &a5);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x47E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v19);
LABEL_14:
        LOBYTE(v20) = 1;
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)v10[12] + 72LL))(v10[12], 0LL, v20);
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x482,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v21);
        break;
      }
      if ( !a5 )
        goto LABEL_14;
    }
    if ( (_QWORD)v28 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
        (__int64 *)v28,
        *((__int64 **)&v28 + 1));
      v14 = v29 - v28;
      v15 = (void *)v28;
LABEL_18:
      std::_Deallocate<16,0>(v15, v14 & 0xFFFFFFFFFFFFFFF8uLL);
    }
LABEL_19:
    v10 = (_QWORD *)*v10;
    v5 = v36;
  }
  v22 = v32;
  v35 = 8 * ((__int64)(v33 - (_QWORD)v32) >> 3);
  v26 = v32;
  v23 = lpCriticalSection;
  if ( v35 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v26, &v35);
    v22 = v26;
  }
  operator delete(v22);
  v32 = 0LL;
  v33 = 0LL;
  std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
    v24,
    v31);
  std::_Deallocate<16,0>(v31, 0x68uLL);
  if ( v23 )
    LeaveCriticalSection(v23);
  return 0LL;
}
