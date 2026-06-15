/*
 * XREFs of ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54
 * Callers:
 *     ?NotifySessionAudioProtocol@AudioSessionManagerProvider@@YAXKI@Z @ 0x180043678 (-NotifySessionAudioProtocol@AudioSessionManagerProvider@@YAXKI@Z.c)
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180047730 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E9E7C (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ?NotifyAudioDGTerminated@AudioSessionManagerProvider@@YAX_N@Z @ 0x1800EA104 (-NotifyAudioDGTerminated@AudioSessionManagerProvider@@YAX_N@Z.c)
 *     ?NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z @ 0x1800EA194 (-NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z @ 0x1800EA320 (-RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z.c)
 *     ?Shutdown@AudioSessionManagerProvider@@YAXXZ @ 0x1800EA3D4 (-Shutdown@AudioSessionManagerProvider@@YAXXZ.c)
 *     ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010BE38 (-GetAllStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 *     ?GetOffloadStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010C518 (-GetOffloadStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Mic.c)
 *     ?GetSubmixHelper@DeviceGraphStore@@YAJAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x18010C730 (-GetSubmixHelper@DeviceGraphStore@@YAJAEAV-$unordered_set@V-$com_ptr_t@UIProcessSubmixProxy@@Uer.c)
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x18012AD10 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 *     ?Shutdown@CVolumeProvider@@UEAAXXZ @ 0x18012AE20 (-Shutdown@CVolumeProvider@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800260A8 (--1-$_Flist_insert_after_op2@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_retu.c)
 *     ??$_Append_range_unchecked@V?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@U_Default_sentinel@2@@?$_Flist_insert_after_op2@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAAXV?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@1@U_Default_sentinel@1@@Z @ 0x1800260C8 (--$_Append_range_unchecked@V-$_Flist_unchecked_const_iterator@V-$_Flist_val@U-$_Flist_simple_typ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x18010EE3C (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 *     ??1?$forward_list@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18010EEE0 (--1-$forward_list@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointStoreCache::ForEachEndpoint(__int64 a1, __int64 a2)
{
  void **v3; // rsi
  _QWORD *i; // rbx
  void **v5; // rdi
  void **j; // rbx
  __int64 v7; // rcx
  int v8; // eax
  volatile signed __int32 *v9; // r8
  signed __int32 v10; // edx
  volatile signed __int32 *v12; // r10
  void **v13; // rbx
  void **v14; // [rsp+20h] [rbp-20h] BYREF
  void **v15; // [rsp+28h] [rbp-18h]
  void *v16; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v18; // [rsp+60h] [rbp+20h] BYREF

  v18 = 0LL;
  v3 = &v18;
  for ( i = (_QWORD *)qword_1801CFAE0; ; i = (_QWORD *)*i )
  {
    v5 = (void **)*v3;
    if ( !i )
      break;
    if ( !v5 )
    {
      v14 = &v18;
      v15 = 0LL;
      std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::_Append_range_unchecked<std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>>,std::_Iterator_base0>,std::_Default_sentinel>(
        &v14,
        i);
      if ( v15 )
      {
        *v15 = *v3;
        *v3 = v16;
        v15 = 0LL;
      }
      std::_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::~_Flist_insert_after_op2<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(&v14);
      goto LABEL_7;
    }
    v12 = (volatile signed __int32 *)v5[1];
    a1 = i[1];
    v5[1] = (void *)a1;
    if ( a1 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 12), (volatile int *)a2);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v12);
    v3 = v5;
  }
  *v3 = 0LL;
  if ( v5 )
  {
    do
    {
      v13 = (void **)*v5;
      std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
        a1,
        v5);
      v5 = v13;
    }
    while ( v13 );
  }
LABEL_7:
  AcquireSRWLockShared(&stru_1801CFAD8);
  ReleaseSRWLockShared(&stru_1801CFAD8);
  for ( j = (void **)v18; ; j = (void **)*j )
  {
    if ( !j )
    {
      j = (void **)v18;
      v18 = 0LL;
      if ( j )
      {
        LODWORD(v3) = 0x7FFFFFFF;
        goto LABEL_14;
      }
      return 0LL;
    }
    v7 = *(_QWORD *)(a2 + 56);
    if ( !v7 )
    {
      std::_Xbad_function_call();
LABEL_30:
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                          + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      while ( 1 )
      {
        operator delete(j, 0x10uLL);
        j = v5;
        if ( !v5 )
          return 0LL;
LABEL_14:
        v5 = (void **)*j;
        v9 = (volatile signed __int32 *)j[1];
        if ( v9 )
        {
          do
            v10 = *((_DWORD *)v9 + 3);
          while ( v10 != (_DWORD)v3 && v10 != _InterlockedCompareExchange(v9 + 3, v10 - 1, v10) );
          if ( v10 == 1 )
            goto LABEL_30;
        }
      }
    }
    v8 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 16LL))(v7, j + 1);
    v5 = (void **)(unsigned int)v8;
    if ( v8 < 0 )
      break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
    (const char *)(unsigned int)v8,
    (int)v14);
  std::forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>>(&v18);
  return (unsigned int)v5;
}
