/*
 * XREFs of ??1CBridgeSourceEndpoint@@EEAA@XZ @ 0x140079484
 * Callers:
 *     ??_GCBridgeSourceEndpoint@@EEAAPEAXI@Z @ 0x140079630 (--_GCBridgeSourceEndpoint@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x140078FB8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIBridgeSourceEndpointConsumer@@Uerr_returncode_poli.c)
 */

void __fastcall CBridgeSourceEndpoint::~CBridgeSourceEndpoint(CBridgeSourceEndpoint *this)
{
  __int64 *v2; // rcx
  volatile int *v3; // rdx
  void *v4; // rcx

  *(_QWORD *)this = &CBridgeSourceEndpoint::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CBridgeSourceEndpoint::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioEndpoint,IWeakReferenceSource,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CBridgeSourceEndpoint::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>'};
  *((_QWORD *)this + 4) = &CBridgeSourceEndpoint::`vftable'{for `IAudioOutputEndpointRT'};
  *((_QWORD *)this + 5) = &CBridgeSourceEndpoint::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IBridgeSourceEndpointControl>'};
  if ( *((_QWORD *)this + 11) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10));
    *((_QWORD *)this + 11) = 0LL;
  }
  v2 = (__int64 *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IBridgeSourceEndpointConsumer,wil::err_returncode_policy>>>(
      v2,
      *((__int64 **)this + 19));
    std::_Deallocate<16,0>(
      *((void **)this + 18),
      (*((_QWORD *)this + 20) - *((_QWORD *)this + 18)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 10);
  v4 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v4 )
    CoTaskMemFree(v4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>(
    (__int64)this,
    v3);
}
