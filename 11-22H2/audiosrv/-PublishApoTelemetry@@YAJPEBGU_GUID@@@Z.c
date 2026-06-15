/*
 * XREFs of ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18003E70C
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18003E018 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     AudioServerGetMixFormat @ 0x180122210 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_712966666638945b78fb28c344e489ab__0_ @ 0x18007381C (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_712966666638945b78fb28c3.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PublishApoTelemetry(CEndpointStoreCache *a1, struct _GUID *a2)
{
  int EndpointStore; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rax
  std::_Ref_count_base *v9; // rcx
  unsigned __int64 v10; // r9
  int v11; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-59h]
  std::_Ref_count_base *v16[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  std::_Ref_count_base *v18; // [rsp+48h] [rbp-31h]
  std::_Ref_count_base *v19[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v21; // [rsp+70h] [rbp-9h]
  _BYTE v22[64]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  struct CEndpointStore *v24; // [rsp+F0h] [rbp+77h] BYREF

  v24 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(a1, (const unsigned __int16 *)a1, &v24);
  v5 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x521,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_17:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v24);
    return v5;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)v24 + 52, 1, 0) )
  {
    *(_OWORD *)v16 = 0LL;
    *(_OWORD *)v19 = 0LL;
    std::shared_ptr<std::function<void (void)>>::operator=(v16, (__int64 *)v19);
    v7 = v19[1];
    if ( v19[1] )
      std::_Ref_count_base::_Decref(v19[1]);
    if ( !v16[0] )
    {
      v8 = (std::_Ref_count_base *)operator new(0x18uLL);
      v9 = v8;
      if ( v8 )
      {
        *((_DWORD *)v8 + 2) = 1;
        *((_DWORD *)v8 + 3) = 1;
        *(_QWORD *)v8 = &std::_Ref_count_obj2<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::`vftable';
        *((_QWORD *)v8 + 2) = 0LL;
      }
      else
      {
        v9 = 0LL;
      }
      v17 = (__int64)v9 + 16;
      v18 = v9;
      std::shared_ptr<std::function<void (void)>>::operator=(v16, &v17);
      v7 = v18;
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
    }
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)a1 + v10) );
    v11 = _AllocStringWorker<CTCoAllocPolicy>(
            (__int64)v7,
            v6,
            (const unsigned __int16 *)a1,
            v10,
            v15,
            (unsigned __int16 **)v16[0]);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x526,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v11);
      if ( v16[1] )
        std::_Ref_count_base::_Decref(v16[1]);
      goto LABEL_17;
    }
    v13 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v20, v16);
    v21 = (__int128)*a2;
    v14 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_712966666638945b78fb28c344e489ab__0_(
            v22,
            v20);
    CSerialWorkQueue::QueueWorkItem(v13, v14);
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
  }
  if ( v24 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
  return 0LL;
}
