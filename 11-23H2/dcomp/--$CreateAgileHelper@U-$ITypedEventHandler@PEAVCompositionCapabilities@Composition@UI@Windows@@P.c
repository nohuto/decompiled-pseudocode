/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180067654
 * Callers:
 *     ?add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x180067D64 (-add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU-$ITypedEventHandler@PEAVC.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180064D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_67b7fa98fb96140dbfd30baf33749eb3_@@$0?0PEAUICompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUICompositionCapabilities@234@@Internal@Foundation@Windows@@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUICompositionCapabilities@Composition@UI@3@PEAUIInspectable@@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_67b7fa98fb96140dbfd30baf33749eb3_@@@Z @ 0x1800675A4 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_1800675A4.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>>(
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
    AgileReference = RoGetAgileReference(0LL, &GUID_6e8cc6f4_6cf5_5994_9447_726171236ea8, a1, v5);
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
    v9 = (__int64 *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::CompositionCapabilities *,Windows::UI::Composition::ICompositionCapabilities *>,IInspectable *>::*)(Windows::UI::Composition::ICompositionCapabilities *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_67b7fa98fb96140dbfd30baf33749eb3_,-1,Windows::UI::Composition::ICompositionCapabilities *,IInspectable *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionCapabilities *,IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_67b7fa98fb96140dbfd30baf33749eb3_,-1,Windows::UI::Composition::ICompositionCapabilities *,IInspectable *>(
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
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    AgileReference = -2147024882;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return (unsigned int)AgileReference;
}
