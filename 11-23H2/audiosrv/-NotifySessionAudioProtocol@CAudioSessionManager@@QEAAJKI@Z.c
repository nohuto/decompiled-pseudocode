/*
 * XREFs of ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x180026F00
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6f73e997589bdd5d65b7fde1db8b242b__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x180026ED0 (std--_Func_impl_no_alloc__lambda_6f73e997589bdd5d65b7fde1db8b242b__long_wil--com_ptr_t_CEndpoint.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@@Z @ 0x180027074 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSessio.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::NotifySessionAudioProtocol(
        CAudioSessionManager *this,
        unsigned int a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // r8
  _QWORD *v9; // rdi
  _QWORD *i; // rbx
  void *v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD **v13; // rcx
  _QWORD *v14; // r14
  _DWORD *v15; // rcx
  _QWORD *v16; // rdi
  _BYTE v17[8]; // [rsp+20h] [rbp-40h] BYREF
  void *v18; // [rsp+28h] [rbp-38h]
  void *v19; // [rsp+38h] [rbp-28h]
  __int128 v20; // [rsp+40h] [rbp-20h]
  unsigned __int64 v21; // [rsp+80h] [rbp+20h] BYREF
  void *v22; // [rsp+98h] [rbp+38h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, a2);
  }
  if ( *((_DWORD *)this + 68) != a3 )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v21 = (unsigned __int64)this + 8;
    std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>(
      v17,
      (char *)this + 48);
    v9 = v18;
    for ( i = *(_QWORD **)v18; i != v9; i = (_QWORD *)*i )
    {
      v15 = (_DWORD *)i[12];
      if ( v15[161] == a2 )
      {
        LOBYTE(v8) = 1;
        (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v15 + 72LL))(v15, 4LL, v8);
      }
    }
    v11 = v19;
    v12 = 8 * ((__int64)(v20 - (_QWORD)v19) >> 3);
    v21 = v12;
    v22 = v19;
    if ( v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v22, &v21);
      v12 = v21;
      v11 = v22;
    }
    operator delete(v11, v12);
    v19 = 0LL;
    v20 = 0LL;
    v13 = (_QWORD **)v18;
    **((_QWORD **)v18 + 1) = 0LL;
    v14 = *v13;
    if ( *v13 )
    {
      do
      {
        v16 = (_QWORD *)*v14;
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v14 + 12);
        CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)(v14 + 2));
        std::_Deallocate<16,0>(v14, 104LL);
        v14 = v16;
      }
      while ( v16 );
    }
    operator delete(v18, 0x68uLL);
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  return 0LL;
}
