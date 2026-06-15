/*
 * XREFs of ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E8058
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_af569ec3404ee5e24e94d87111621ae3__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800EA600 (std--_Func_impl_no_alloc__lambda_af569ec3404ee5e24e94d87111621ae3__long_wil--com_pt_ea_1800EA600.c)
 *     std::_Func_impl_no_alloc__lambda_bf16b35437704c38a733151e8b0dfb35__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800EA630 (std--_Func_impl_no_alloc__lambda_bf16b35437704c38a733151e8b0dfb35__long_wil--com_pt_ea_1800EA630.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180023DEC (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@@Z @ 0x180027074 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSessio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     WPP_SF_dd @ 0x1800E3DE8 (WPP_SF_dd.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E7078 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800E82A0 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSessionManager::DisconnectSessionsForTsSession(
        CAudioSessionManager *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3)
{
  __int64 v6; // r8
  _QWORD **v7; // rdi
  _QWORD *i; // rbx
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  const struct _GUID *v12; // r8
  int AudioSession; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  _BYTE v17[8]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD **v18; // [rsp+38h] [rbp-38h]
  void *v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct CAudioSession *v22; // [rsp+A0h] [rbp+30h] BYREF
  void *v23; // [rsp+B8h] [rbp+48h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_c22fced76a16385f24e46043528014d7_Traceguids, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v22 = (CAudioSessionManager *)((char *)this + 8);
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>(
    (__int64)v17,
    (__int64)this + 48);
  v7 = v18;
  for ( i = *v18; i != v7; i = (_QWORD *)*i )
  {
    v9 = i[12];
    if ( *(_DWORD *)(v9 + 644) != a2 )
      continue;
    if ( a3 == eAll )
    {
LABEL_14:
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)i[12] + 72LL))(i[12], 0LL, v6);
      continue;
    }
    if ( a3 == eCapture )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 56LL))(v9 + 8) )
        goto LABEL_14;
    }
    else if ( a3 == eRender && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 56LL))(v9 + 8) )
    {
      goto LABEL_14;
    }
  }
  v10 = v19;
  v22 = (struct CAudioSession *)(8 * ((__int64)(v20 - (_QWORD)v19) >> 3));
  v23 = v19;
  if ( (unsigned __int64)v22 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v23, (unsigned __int64 *)&v22);
    v10 = v23;
  }
  operator delete(v10);
  v19 = 0LL;
  v20 = 0LL;
  std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
    v11,
    v18);
  std::_Deallocate<16,0>(v18, 0x68uLL);
  if ( this != (CAudioSessionManager *)-8LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v22 = 0LL;
  AudioSession = CAudioSessionManager::FindAudioSession(this, a2, v12, &v22);
  v14 = AudioSession;
  if ( AudioSession < 0 )
  {
    v15 = 1222LL;
    goto LABEL_24;
  }
  AudioSession = CAudioSessionManager::OnSessionStateChanged(
                   this,
                   (struct IAudioSessionInfo *)(((unsigned __int64)v22 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v22 >> 64)),
                   AudioSessionStateInactive,
                   2u);
  v14 = AudioSession;
  if ( AudioSession >= 0 )
  {
    v14 = 0;
  }
  else
  {
    v15 = 1225LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)AudioSession);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v22);
  return v14;
}
