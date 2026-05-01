/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b5fc8668da1d75b680eab80eff8dd753_@@$0?0PEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowWatcher@2345@@Internal@Foundation@Windows@@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@Z@Details@WRL@Microsoft@@UEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804D99D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *>,IInspectable *>::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_b5fc8668da1d75b680eab80eff8dd753_,-1,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *>::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 72))(*(_QWORD *)(a1 + 64) + *(int *)(a1 + 80));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
