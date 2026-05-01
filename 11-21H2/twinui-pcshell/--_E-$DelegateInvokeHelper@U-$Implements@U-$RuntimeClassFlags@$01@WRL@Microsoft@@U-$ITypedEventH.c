/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVSwitchRequestedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_1ba8f6de45da3abfb3f065fffecbbbe1_@@$0?0PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUISwitchRequestedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@U?$AggregateType@PEAVSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUISwitchRequestedEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUISwitchRequestedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803FA500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::SwitchRequestedEventArgs *,Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *>>::*)(Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::SwitchRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_1ba8f6de45da3abfb3f065fffecbbbe1_,-1,Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
