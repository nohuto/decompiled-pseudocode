/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800113C4
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x180011170 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180011588 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVa.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x180046090 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F0FC0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x18010411C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  char *v2; // r15
  char *v3; // r14
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edx
  struct _RTL_CRITICAL_SECTION *v12; // r14
  SaDeviceParams *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // eax
  int v17; // [rsp+20h] [rbp-B8h]
  int v18[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v19; // [rsp+48h] [rbp-90h]
  char *v20; // [rsp+50h] [rbp-88h]
  _BYTE v21[8]; // [rsp+58h] [rbp-80h] BYREF
  std::_Ref_count_base *v22; // [rsp+60h] [rbp-78h]
  _QWORD v23[14]; // [rsp+68h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v25; // [rsp+E8h] [rbp+10h] BYREF
  __int64 *v26; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+F8h] [rbp+20h] BYREF

  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v3 = (char *)this + 80;
  v20 = (char *)this + 80;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((char *)this + 80);
  (*(void (__fastcall **)(struct IAudioResourceManager *, char *))(*(_QWORD *)g_AudioResourceManager + 40LL))(
    g_AudioResourceManager,
    (char *)this + 64);
  *((_QWORD *)this + 8) = 0LL;
  v5 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v4,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 4u )
  {
    v8 = (__int64 *)*((_QWORD *)this + 6);
    v25 = *((_DWORD *)v8 + 2);
    v26 = v8 + 6;
    v27 = *v8;
    *(_QWORD *)v18 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (_DWORD)v5,
      (unsigned int)&unk_18019302F,
      v6,
      v7,
      (__int64)v18,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25);
  }
  if ( *((_BYTE *)this + 72) )
  {
    std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(v21, *((_QWORD *)this + 6));
    v14 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v18, v21, v14);
    v23[0] = off_180170698;
    v23[1] = *(_QWORD *)v18;
    v23[2] = v19;
    v23[7] = v23;
    v16 = CSerialWorkQueue::QueueWorkItem(v15, v23);
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xB15,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v16,
        v17);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
  }
  v9 = *((_QWORD *)this + 15);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 72LL))(
      v9,
      *((unsigned int *)this + 32),
      *((_QWORD *)this + 6));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((char *)this + 120);
  v10 = *((_QWORD *)this + 14);
  if ( v10 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v3);
  v12 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 7);
  if ( v12 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>(
      &v12[1],
      &v12[1],
      v12[1].DebugInfo->CriticalSection);
    std::_Deallocate<16,0>(v12[1].DebugInfo, 40LL);
    DeleteCriticalSection(v12);
    operator delete(v12, 0x40uLL);
  }
  *((_QWORD *)this + 7) = 0LL;
  v13 = (SaDeviceParams *)*((_QWORD *)this + 6);
  if ( v13 )
    SaDeviceParams::`scalar deleting destructor'(v13, v11);
  *((_QWORD *)this + 6) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl>(this);
}
