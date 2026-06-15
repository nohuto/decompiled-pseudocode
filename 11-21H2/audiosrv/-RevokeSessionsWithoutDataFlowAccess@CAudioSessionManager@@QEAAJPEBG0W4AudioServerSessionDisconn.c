/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800E10C4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_09a5da77b2f5785ab060855f7dd3082a__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800E2D10 (std--_Func_impl_no_alloc__lambda_09a5da77b2f5785ab060855f7dd3082a__long_wil--com_pt_ea_1800E2D10.c)
 * Callees:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18000B87C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180041DEC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x1800426C8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z @ 0x1800D91A0 (-MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z.c)
 *     ??$emplace@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1800DE9D8 (--$emplace@AEBU-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode.c)
 *     ?CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z @ 0x1800DF8EC (-CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        bool a5)
{
  const unsigned __int16 *v6; // rsi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  _QWORD *i; // rbx
  _QWORD **v13; // rdi
  _QWORD *v14; // rbx
  int OwningProcesses; // eax
  void *v16; // rsi
  __int64 v17; // rdx
  void *v18; // rcx
  _QWORD *j; // r14
  unsigned int v20; // esi
  const WCHAR *v21; // rax
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int128 v27; // [rsp+20h] [rbp-60h] BYREF
  __int64 v28; // [rsp+30h] [rbp-50h]
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  _QWORD **v30; // [rsp+48h] [rbp-38h]
  __int64 v31; // [rsp+50h] [rbp-30h]
  void *v32; // [rsp+58h] [rbp-28h] BYREF
  __int128 v33; // [rsp+60h] [rbp-20h]
  __int64 v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+B0h] [rbp+30h] BYREF
  const unsigned __int16 *v38; // [rsp+B8h] [rbp+38h]

  v38 = a2;
  v6 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v37 = v8;
  LODWORD(v29) = *(_DWORD *)(a1 + 48);
  v31 = 0LL;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *v9 = v9;
  v9[1] = v9;
  v30 = (_QWORD **)v9;
  v32 = 0LL;
  v33 = 0LL;
  v34 = *(_QWORD *)(a1 + 96);
  v35 = *(_QWORD *)(a1 + 104);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (__int64)&v32,
    (__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 72)) >> 3,
    (unsigned __int64)v9);
  v11 = *(_QWORD **)(a1 + 56);
  for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
    std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>> const &>(
      &v29,
      (__int64)&v27,
      i + 2);
  v13 = v30;
  v14 = *v30;
  while ( v14 != v13 )
  {
    if ( !(unsigned int)CAudioSession::MatchesParameters((CAudioSession *)v14[12], v10, v6, a3) )
      goto LABEL_22;
    v27 = 0LL;
    v28 = 0LL;
    OwningProcesses = CAudioSession::GetOwningProcesses(v14[12], (__int64)&v27);
    if ( OwningProcesses < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x47F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)OwningProcesses);
      v16 = (void *)v27;
      if ( !(_QWORD)v27 )
        goto LABEL_22;
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
        (__int64 *)v27,
        *((__int64 **)&v27 + 1));
      v17 = v28 - (_QWORD)v16;
      v18 = v16;
      goto LABEL_21;
    }
    for ( j = (_QWORD *)v27; j != *((_QWORD **)&v27 + 1); ++j )
    {
      a5 = 0;
      v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 40LL))(*j);
      v21 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 56LL))(*j);
      v22 = CAudioSessionManager::CapabilityAccessCheck(v21, v20, &a5);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x488,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v22);
LABEL_17:
        LOBYTE(v23) = 1;
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)v14[12] + 72LL))(v14[12], 0LL, v23);
        if ( v24 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x48C,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v24);
        break;
      }
      if ( !a5 )
        goto LABEL_17;
    }
    if ( (_QWORD)v27 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
        (__int64 *)v27,
        *((__int64 **)&v27 + 1));
      v17 = v28 - v27;
      v18 = (void *)v27;
LABEL_21:
      std::_Deallocate<16,0>(v18, v17 & 0xFFFFFFFFFFFFFFF8uLL);
    }
LABEL_22:
    v14 = (_QWORD *)*v14;
    v6 = v38;
  }
  std::_Deallocate<16,0>(v32, (v33 - (_QWORD)v32) & 0xFFFFFFFFFFFFFFF8uLL);
  v32 = 0LL;
  v33 = 0LL;
  std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
    v25,
    v30);
  std::_Deallocate<16,0>(v30, 0x68uLL);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v37);
  return 0LL;
}
