/*
 * XREFs of ?PublishApoTelemetry@@YAJPEBG@Z @ 0x18001110C
 * Callers:
 *     AudioServerGetMixFormat @ 0x180010C40 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005C2D4 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PublishApoTelemetry(CEndpointStoreCache *a1)
{
  int EndpointStore; // eax
  int v3; // ebx
  std::_Ref_count_base *v5; // rcx
  void **v6; // rdi
  std::_Ref_count_base *v7; // rax
  std::_Ref_count_base *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int128 v11; // rax
  __int64 v12; // rax
  std::_Ref_count_base *v13; // rbx
  unsigned __int16 **v14; // [rsp+20h] [rbp-79h]
  unsigned __int64 *v15; // [rsp+28h] [rbp-71h]
  unsigned int v16; // [rsp+30h] [rbp-69h]
  void **v17[2]; // [rsp+40h] [rbp-59h] BYREF
  char *v18; // [rsp+50h] [rbp-49h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp-41h]
  std::_Ref_count_base *v20[2]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v21[14]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  struct CEndpointStore *v23; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v24; // [rsp+110h] [rbp+77h]

  v23 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(a1, (const unsigned __int16 *)a1, &v23);
  v3 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointStore,
      (int)v14);
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v23 + 52, 1, 0) )
    {
LABEL_3:
      v3 = 0;
      goto LABEL_4;
    }
    *(_OWORD *)v17 = 0LL;
    *(_OWORD *)v20 = 0LL;
    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
      v17,
      v20);
    v5 = v20[1];
    if ( v20[1] )
      std::_Ref_count_base::_Decref(v20[1]);
    v6 = v17[0];
    if ( !v17[0] )
    {
      v7 = (std::_Ref_count_base *)operator new(0x18uLL);
      v8 = v7;
      if ( v7 )
      {
        *((_DWORD *)v7 + 2) = 1;
        *((_DWORD *)v7 + 3) = 1;
        *(_QWORD *)v7 = &std::_Ref_count_obj2<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::`vftable';
        *((_QWORD *)v7 + 2) = 0LL;
      }
      else
      {
        v8 = 0LL;
      }
      v18 = (char *)v8 + 16;
      v19 = v8;
      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
        v17,
        &v18);
      v5 = v19;
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      v6 = v17[0];
    }
    v9 = -1LL;
    do
      ++v9;
    while ( *((_WORD *)a1 + v9) );
    *v6 = 0LL;
    v10 = v9 + 1;
    if ( v9 + 1 >= v9
      && (*v6 = 0LL, v11 = v10 * (unsigned __int128)2uLL, v24 = *((_QWORD *)&v11 + 1), is_mul_ok(v10, 2uLL)) )
    {
      v3 = CTCoAllocPolicy::Alloc(v5, DWORD2(v11), 2 * v10, v6);
      if ( v3 >= 0 )
      {
        StringCchCopyNExW((unsigned __int16 *)*v6, v9 + 1, (const unsigned __int16 *)a1, v9, v14, v15, v16);
        v12 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
        v13 = (std::_Ref_count_base *)v17[1];
        if ( v17[1] )
        {
          _InterlockedAdd((volatile signed __int32 *)v17[1] + 2, 1u);
          v13 = (std::_Ref_count_base *)v17[1];
          v6 = v17[0];
        }
        v21[0] = off_18016B350;
        v21[1] = v6;
        v21[2] = v13;
        v21[7] = v21;
        CSerialWorkQueue::QueueWorkItem(v12, v21);
        if ( v13 )
          std::_Ref_count_base::_Decref(v13);
        goto LABEL_3;
      }
    }
    else
    {
      v3 = -2147024362;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x530,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v3,
      (int)v14);
    if ( v17[1] )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v17[1]);
  }
LABEL_4:
  if ( v23 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v23);
  return (unsigned int)v3;
}
