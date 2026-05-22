/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_6065e98e4d29edfd61ea85b9116cd992_@@$0?0PEAUIInspectable@@PEAUISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@PEAUISharedD3DDeviceRemovedEventArgs@2345@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@3@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800A52F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_6065e98e4d29edfd61ea85b9116cd992_@@$0?0PEAUIInspectable@@PEAUISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@PEAUISharedD3DDeviceRemovedEventArgs@2345@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@3@@Z@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800A4E50 (--1-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler.c)
 */

void *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *>>::*)(IInspectable *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_6065e98e4d29edfd61ea85b9116cd992_,-1,IInspectable *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *>>::*)(IInspectable *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_6065e98e4d29edfd61ea85b9116cd992_,-1,IInspectable *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *>::~DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_6065e98e4d29edfd61ea85b9116cd992_,-1,IInspectable *,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs *>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
