/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180067730
 * Callers:
 *     ?AddListener@CompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAJPEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z @ 0x180067B00 (-AddListener@CompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAJPEAVCompositionCapabiliti.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180064D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_02a86428158461f4dc557e8a6d2b58da_@@$0?0PEAUIInspectable@@PEAU5@@?$DelegateArgTraits@P8?$IEventHandler_impl@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIInspectable@@0@Z@Details@WRL@Microsoft@@V_lambda_02a86428158461f4dc557e8a6d2b58da_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_02a86428158461f4dc557e8a6d2b58da_@@$0?0PEAUIInspectable@@PEAU5@@?$DelegateArgTraits@P8?$IEventHandler_impl@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIInspectable@@0@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_02a86428158461f4dc557e8a6d2b58da_@@@Z @ 0x18006789C (--$Make@U-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventH.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_18007F280.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<IInspectable *>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  __int64 v7; // rax
  __int64 **v8; // rax
  __int64 *v9; // rbx
  __int64 *v11; // rax
  __int64 v12; // [rsp+50h] [rbp+28h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+30h] BYREF
  __int64 v14; // [rsp+60h] [rbp+38h] BYREF
  __int64 v15; // [rsp+68h] [rbp+40h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v13 = &v12;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, a1, v5);
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
  v15 = v7;
  v8 = (__int64 **)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<IInspectable *>::*)(IInspectable *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_02a86428158461f4dc557e8a6d2b58da_,-1,IInspectable *,IInspectable *>,_lambda_02a86428158461f4dc557e8a6d2b58da_>(
                     &v14,
                     &v15);
  v9 = *v8;
  *v8 = 0LL;
  v13 = v9;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>,Microsoft::WRL::FtmBase>>::Release();
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v15);
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
