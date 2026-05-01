/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVApplyWindowingEnvironmentSettingsRequestedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_d60a7912d06caa00aadf4b0c9ed9d685_@@$0?0PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@U?$AggregateType@PEAVApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIApplyWindowingEnvironmentSettingsRequestedEventArgs@789Windows@@@Z @ 0x180401FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::ApplyWindowingEnvironmentSettingsRequestedEventArgs *,Windows::Internal::ApplicationModel::WindowManagement::IApplyWindowingEnvironmentSettingsRequestedEventArgs *>>::*)(Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IApplyWindowingEnvironmentSettingsRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::ApplyWindowingEnvironmentSettingsRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_d60a7912d06caa00aadf4b0c9ed9d685_,-1,Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IApplyWindowingEnvironmentSettingsRequestedEventArgs *>::Invoke(
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
