/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewSwitchRequestedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_cce7c2b402c2c0bebd2b07d00f097e8f_@@$0?0PEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewSwitchRequestedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewSwitchRequestedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIAppViewSwitchRequestedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewSwitchRequestedEventArgs@789Windows@@@Z @ 0x1803FA740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *>>::*)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_cce7c2b402c2c0bebd2b07d00f097e8f_,-1,Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *>::Invoke(
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
