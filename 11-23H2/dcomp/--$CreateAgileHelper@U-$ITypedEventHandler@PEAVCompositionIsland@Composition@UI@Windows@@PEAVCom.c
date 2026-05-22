/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18006731C
 * Callers:
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18006750C (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180064D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_c6f73476c338bf328afce5637152cad0_@@$0?0PEAUICompositionIsland@Composition@UI@Windows@@PEAUICompositionIslandEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCompositionIsland@Composition@UI@Windows@@PEAUICompositionIsland@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCompositionIslandEventArgs@Composition@UI@Windows@@PEAUICompositionIslandEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUICompositionIsland@Composition@UI@3@PEAUICompositionIslandEventArgs@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_c6f73476c338bf328afce5637152cad0_@@@Z @ 0x18006726C (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHa.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  __int64 v7; // rax
  LPVOID v8; // rax
  __int64 *v9; // rbx
  __int64 *v11; // rax
  __int64 v12; // [rsp+40h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v13 = &v12;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_ecdc591f_5dbc_5aee_9f12_e482b9070ad7, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_7;
  }
  else
  {
    v11 = (__int64 *)*v4;
    v14 = 0LL;
    *v5 = 0LL;
    v13 = v11;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  }
  v7 = v12;
  v12 = 0LL;
  v14 = v7;
  v8 = DefaultHeap::Alloc(0x48uLL);
  if ( v8 )
    v9 = (__int64 *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::ICompositionIsland *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionIslandEventArgs *,Windows::UI::Composition::ICompositionIslandEventArgs *>>::*)(Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_c6f73476c338bf328afce5637152cad0_,-1,Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_c6f73476c338bf328afce5637152cad0_,-1,Windows::UI::Composition::ICompositionIsland *,Windows::UI::Composition::ICompositionIslandEventArgs *>(
                      (__int64)v8,
                      &v14);
  else
    v9 = 0LL;
  v13 = v9;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  if ( v9 )
  {
    v13 = 0LL;
    *a2 = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    AgileReference = -2147024882;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return (unsigned int)AgileReference;
}
