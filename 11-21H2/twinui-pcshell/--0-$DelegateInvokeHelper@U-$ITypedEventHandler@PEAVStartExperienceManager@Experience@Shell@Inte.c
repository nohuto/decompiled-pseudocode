/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@V_lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21_@@$0?0PEAUIStartExperienceManager@Experience@Shell@Internal@3@H@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIStartExperienceManager@2345@@Internal@Foundation@Windows@@H@Foundation@Windows@@EAAJPEAUIStartExperienceManager@Experience@Shell@Internal@3@H@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21_@@@Z @ 0x180172ADC
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x18011BC20 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::StartExperienceManager *,Windows::Internal::Shell::Experience::IStartExperienceManager *>,int>::*)(Windows::Internal::Shell::Experience::IStartExperienceManager *,int)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,_lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21_,-1,Windows::Internal::Shell::Experience::IStartExperienceManager *,int>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,_lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21_,-1,Windows::Internal::Shell::Experience::IStartExperienceManager *,int>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::StartExperienceManager *,Windows::Internal::Shell::Experience::IStartExperienceManager *>,int>::*)(Windows::Internal::Shell::Experience::IStartExperienceManager *,int)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,_lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21_,-1,Windows::Internal::Shell::Experience::IStartExperienceManager *,int>::`vftable';
  return a1;
}
