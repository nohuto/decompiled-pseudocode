/*
 * XREFs of ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@$0?0V_lambda_6065e98e4d29edfd61ea85b9116cd992_@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@PEAUISharedD3DDeviceRemovedEventArgs@2345@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@3@@Z@Details@WRL@Microsoft@@SA?AV?$ComPtr@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@@23@$$QEAV_lambda_6065e98e4d29edfd61ea85b9116cd992_@@@Z @ 0x1800A4130
 * Callers:
 *     ??$CreateAgileHelper@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800A4194 (--$CreateAgileHelper@U-$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@U.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_6065e98e4d29edfd61ea85b9116cd992_@@$0?0PEAUIInspectable@@PEAUISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@PEAUISharedD3DDeviceRemovedEventArgs@2345@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@3@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_6065e98e4d29edfd61ea85b9116cd992_@@@Z @ 0x1800A4CA8 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *>>::*)(IInspectable *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *)>::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::FtmBase>,Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,-1,_lambda_6065e98e4d29edfd61ea85b9116cd992_>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rbx
  void *v5; // rax
  __int64 v6; // rax
  __int64 *result; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = DefaultHeap::Alloc(0x48uLL);
  v8 = v5;
  if ( v5 )
  {
    v6 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *>>::*)(IInspectable *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_6065e98e4d29edfd61ea85b9116cd992_,-1,IInspectable *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_6065e98e4d29edfd61ea85b9116cd992_,-1,IInspectable *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *>(
           v5,
           a2);
    v8 = 0LL;
    v3 = v6;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v8);
  result = a1;
  *a1 = v3;
  return result;
}
