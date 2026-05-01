/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowVisibilityChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_941b513ee8029e7f02b6e9258ef8a278_@@$0?0PEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowVisibilityChangedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVWindowVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowVisibilityChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIWindowVisibilityChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowVisibilityChangedEventArgs@789Windows@@@Z @ 0x180053020
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::WindowVisibilityChangedEventArgs *,Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *>>::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowVisibilityChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_941b513ee8029e7f02b6e9258ef8a278_,-1,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *>::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 72))(*(_QWORD *)(a1 + 64) + *(int *)(a1 + 80));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
