/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800B775C
 * Callers:
 *     ?add_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1800B7940 (-add_RenderingDeviceReplaced@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAU-$IT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180064D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAVRenderingDeviceReplacedEventArgs@234@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_1183650d033c1ac3e961591be25d6f74_@@$0?0PEAUICompositionGraphicsDevice@Composition@UI@Windows@@PEAUIRenderingDeviceReplacedEventArgs@678@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@PEAUICompositionGraphicsDevice@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVRenderingDeviceReplacedEventArgs@Composition@UI@Windows@@PEAUIRenderingDeviceReplacedEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUICompositionGraphicsDevice@Composition@UI@3@PEAUIRenderingDeviceReplacedEventArgs@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_1183650d033c1ac3e961591be25d6f74_@@@Z @ 0x1800B7862 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_1800B7862.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  __int64 *v7; // rax
  __int64 v8; // rax
  LPVOID v9; // rax
  __int64 *v10; // rbx
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
    AgileReference = RoGetAgileReference(0LL, &GUID_259b32be_bd06_53c2_bd51_89e8e0f9e239, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_11;
  }
  else
  {
    v7 = (__int64 *)*v4;
    v14 = 0LL;
    *v5 = 0LL;
    v13 = v7;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  }
  v8 = v12;
  v12 = 0LL;
  v14 = v8;
  v9 = DefaultHeap::Alloc(0x48uLL);
  if ( v9 )
    v10 = (__int64 *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::ICompositionGraphicsDevice *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::RenderingDeviceReplacedEventArgs *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>>::*)(Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_1183650d033c1ac3e961591be25d6f74_,-1,Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice *,Windows::UI::Composition::RenderingDeviceReplacedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_1183650d033c1ac3e961591be25d6f74_,-1,Windows::UI::Composition::ICompositionGraphicsDevice *,Windows::UI::Composition::IRenderingDeviceReplacedEventArgs *>(
                       v9,
                       &v14);
  else
    v10 = 0LL;
  v13 = v10;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  if ( v10 )
  {
    v13 = 0LL;
    *a2 = v10;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    AgileReference = -2147024882;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return (unsigned int)AgileReference;
}
