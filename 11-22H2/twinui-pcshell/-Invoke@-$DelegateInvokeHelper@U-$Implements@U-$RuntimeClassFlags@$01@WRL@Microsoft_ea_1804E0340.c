/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVClearPersistedStateRequestedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b20ca4443229d620e8c7dee0346b68bf_@@$0?0PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIClearPersistedStateRequestedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@U?$AggregateType@PEAVClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIClearPersistedStateRequestedEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIClearPersistedStateRequestedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIClearPersistedStateRequestedEventArgs@789Windows@@@Z @ 0x1804E0340
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::ClearPersistedStateRequestedEventArgs *,Windows::Internal::ApplicationModel::WindowManagement::IClearPersistedStateRequestedEventArgs *>>::*)(Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IClearPersistedStateRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::ClearPersistedStateRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_b20ca4443229d620e8c7dee0346b68bf_,-1,Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IClearPersistedStateRequestedEventArgs *>::Invoke(
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
