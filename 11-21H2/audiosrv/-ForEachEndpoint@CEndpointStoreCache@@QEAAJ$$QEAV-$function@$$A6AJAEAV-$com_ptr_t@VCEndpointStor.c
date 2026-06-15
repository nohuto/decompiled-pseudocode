/*
 * XREFs of ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800422B0
 * Callers:
 *     VADServerUserSessionChanged @ 0x1800420A8 (VADServerUserSessionChanged.c)
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180042200 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 *     ??1CVolumeProvider@@UEAA@XZ @ 0x1800D0F98 (--1CVolumeProvider@@UEAA@XZ.c)
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x1800D10F0 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E267C (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ?NotifyAudioDGTerminated@AudioSessionManagerProvider@@YAX_N@Z @ 0x1800E28DC (-NotifyAudioDGTerminated@AudioSessionManagerProvider@@YAX_N@Z.c)
 *     ?NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z @ 0x1800E296C (-NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z @ 0x1800E2AF0 (-RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z.c)
 *     ?Shutdown@AudioSessionManagerProvider@@YAXXZ @ 0x1800E2BA4 (-Shutdown@AudioSessionManagerProvider@@YAXXZ.c)
 *     ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FC730 (-GetAllStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 *     ?GetOffloadStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FCDD4 (-GetOffloadStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Mic.c)
 *     ?GetSubmixHelper@DeviceGraphStore@@YAJAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800FD0C8 (-GetSubmixHelper@DeviceGraphStore@@YAJAEAV-$unordered_set@V-$com_ptr_t@UIProcessSubmixProxy@@Uer.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F07C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@PEAU01@@Z @ 0x1801130CC (--$_Freenode@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointStoreCache::ForEachEndpoint(__int64 a1, __int64 a2)
{
  void **v3; // rsi
  _QWORD *i; // rbx
  void **v5; // rdi
  HANDLE ProcessHeap; // rax
  void **v7; // r14
  signed __int32 *v8; // rdx
  signed __int32 j; // eax
  void **k; // rdi
  _QWORD *m; // rbx
  unsigned int v12; // edi
  _QWORD *v13; // rbx
  _QWORD *v14; // rsi
  volatile signed __int32 *v15; // rcx
  __int64 v17; // rcx
  int v18; // eax
  volatile signed __int32 *v19; // r10
  volatile int *v20; // rdx
  void **v21; // r10
  __int64 v22; // rcx
  void **v23; // rbx
  void **v24; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v26; // [rsp+70h] [rbp+8h] BYREF

  v26 = 0LL;
  v3 = &v26;
  for ( i = (_QWORD *)qword_1801C25C8; ; i = (_QWORD *)*i )
  {
    v5 = (void **)*v3;
    if ( !i )
      break;
    if ( !v5 )
    {
      v24 = &v26;
      ProcessHeap = GetProcessHeap();
      v7 = (void **)HeapAlloc(ProcessHeap, 0, 0x10uLL);
      v8 = (signed __int32 *)i[1];
      v7[1] = v8;
      if ( v8 )
      {
        for ( j = v8[3]; j != 0x7FFFFFFF; j = v8[3] )
        {
          if ( j == _InterlockedCompareExchange(v8 + 3, j + 1, j) )
            break;
        }
      }
      for ( k = v7; ; k = v21 )
      {
        i = (_QWORD *)*i;
        if ( !i )
          break;
        v21 = (void **)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
        v22 = i[1];
        v21[1] = (void *)v22;
        if ( v22 )
          Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v22 + 12), v20);
        *k = v21;
      }
      if ( k )
      {
        *k = *v3;
        *v3 = v7;
      }
      goto LABEL_11;
    }
    v19 = (volatile signed __int32 *)v5[1];
    a1 = i[1];
    v5[1] = (void *)a1;
    if ( a1 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 12), (volatile int *)a2);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    v3 = v5;
  }
  *v3 = 0LL;
  if ( v5 )
  {
    do
    {
      v23 = (void **)*v5;
      std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>::_Freenode<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>(
        a1,
        v5);
      v5 = v23;
    }
    while ( v23 );
  }
LABEL_11:
  AcquireSRWLockShared(&SRWLock);
  ReleaseSRWLockShared(&SRWLock);
  for ( m = v26; ; m = (_QWORD *)*m )
  {
    if ( !m )
    {
      v12 = 0;
      goto LABEL_14;
    }
    v17 = *(_QWORD *)(a2 + 56);
    if ( !v17 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x18007A10FLL);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 16LL))(v17, m + 1);
    v12 = v18;
    if ( v18 < 0 )
      break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
    (const char *)(unsigned int)v18,
    (int)v24);
LABEL_14:
  v13 = v26;
  v26 = 0LL;
  if ( v13 )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      v15 = (volatile signed __int32 *)v13[1];
      if ( v15 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v15);
      operator delete(v13, 0x10uLL);
      v13 = v14;
    }
    while ( v14 );
  }
  return v12;
}
