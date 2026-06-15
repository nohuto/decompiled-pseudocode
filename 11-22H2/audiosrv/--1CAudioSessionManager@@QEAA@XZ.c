/*
 * XREFs of ??1CAudioSessionManager@@QEAA@XZ @ 0x1800E7928
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180027660 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800EA5F0 (std--_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil--com_pt_ea_1800EA5F0.c)
 *     ??1CEndpointStore@@UEAA@XZ @ 0x18010F090 (--1CEndpointStore@@UEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@0@@Z @ 0x18000B7AC (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@QEAV123@AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x1800126A0 (--$_Destroy_range@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x18004840C (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2D00 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E70C8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@.c)
 *     ??0?$unordered_map@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@5@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x1800E7598 (--0-$unordered_map@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy.c)
 *     ?_Move_assign@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800E8F64 (-_Move_assign@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uer.c)
 */

void __fastcall CAudioSessionManager::~CAudioSessionManager(CAudioSessionManager *this)
{
  _QWORD **v2; // rdi
  _QWORD *i; // rbx
  void *v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  void *v9; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD **v15; // [rsp+28h] [rbp-38h]
  void *v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h]
  unsigned __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  void *v19; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)this = &CAudioSessionManager::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_c22fced76a16385f24e46043528014d7_Traceguids);
  }
  std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>((__int64)v14);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( v14 != (char *)this + 48 )
    std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Move_assign(
      v14,
      (char *)this + 48);
  v2 = v15;
  for ( i = *v15; i != v2; i = (_QWORD *)*i )
    CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(this, (struct CAudioSession *)i[12]);
  if ( this != (CAudioSessionManager *)-8LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v4 = v16;
  v18 = (v17 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL;
  v19 = v16;
  if ( v18 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v19, &v18);
    v4 = v19;
  }
  operator delete(v4);
  v16 = 0LL;
  v17 = 0LL;
  std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
    v5,
    v15);
  std::_Deallocate<16,0>(v15, 0x68uLL);
  v6 = (_QWORD *)*((_QWORD *)this + 36);
  *((_QWORD *)this + 36) = 0LL;
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v6 + 1);
      std::_Deallocate<16,0>(v6, 0x10uLL);
      v6 = v7;
    }
    while ( v7 );
  }
  v8 = *((_QWORD *)this + 33);
  if ( v8 >= 8 )
  {
    v18 = 2 * v8 + 2;
    v9 = (void *)*((_QWORD *)this + 30);
    v19 = v9;
    if ( v18 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v19, &v18);
      v9 = v19;
    }
    operator delete(v9);
  }
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 7LL;
  *((_WORD *)this + 120) = 0;
  v10 = (__int64 *)*((_QWORD *)this + 27);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>(
      v10,
      *((__int64 **)this + 28));
    std::_Deallocate<16,0>(
      *((void **)this + 27),
      (*((_QWORD *)this + 29) - *((_QWORD *)this + 27)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>>(v11, *((_QWORD *)this + 20));
    std::_Deallocate<16,0>(
      *((void **)this + 19),
      (*((_QWORD *)this + 21) - *((_QWORD *)this + 19)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v12 = (void *)*((_QWORD *)this + 9);
  v18 = (*((_QWORD *)this + 10) - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL;
  v19 = v12;
  if ( v18 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v19, &v18);
    v12 = v19;
  }
  operator delete(v12);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
    v13,
    *((_QWORD ***)this + 7));
  std::_Deallocate<16,0>(*((void **)this + 7), 0x68uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
}
