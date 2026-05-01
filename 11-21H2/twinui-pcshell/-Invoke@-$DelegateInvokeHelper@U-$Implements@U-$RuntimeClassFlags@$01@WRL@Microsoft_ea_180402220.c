/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAVUwpWindowActivationRequestedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_43906fb4490484c352c9fb6d443ccf44_@@$0?0PEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivationRequestedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowLifecycleWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVUwpWindowActivationRequestedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivationRequestedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@3@PEAUIUwpWindowActivationRequestedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivationRequestedEventArgs@789Windows@@@Z @ 0x180402220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowActivationRequestedEventArgs *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *>>::*)(Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowActivationRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_43906fb4490484c352c9fb6d443ccf44_,-1,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *>::Invoke(
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
