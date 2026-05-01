/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVGipControllerWatcher@Gaming@Internal@Windows@@PEAVGipSystemButtonEventArgs@234@@Foundation@Windows@@V_lambda_baaf4cb12b19c908b42db85550aea0de_@@$0?0PEAUIGipControllerWatcher@Gaming@Internal@3@PEAUIGipSystemButtonEventArgs@673@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVGipControllerWatcher@Gaming@Internal@Windows@@PEAUIGipControllerWatcher@234@@Internal@Foundation@Windows@@U?$AggregateType@PEAVGipSystemButtonEventArgs@Gaming@Internal@Windows@@PEAUIGipSystemButtonEventArgs@234@@234@@Foundation@Windows@@EAAJPEAUIGipControllerWatcher@Gaming@Internal@3@PEAUIGipSystemButtonEventArgs@563@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_baaf4cb12b19c908b42db85550aea0de_@@@Z @ 0x1803F82C4
 * Callers:
 *     ?StartGipControllerWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180407A1C (-StartGipControllerWatcher@GamingOverlayExperienceManager@@AEAAJUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::IGipControllerWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::Gaming::GipSystemButtonEventArgs *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>>::*)(Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::GipSystemButtonEventArgs *>,_lambda_baaf4cb12b19c908b42db85550aea0de_,-1,Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::GipSystemButtonEventArgs *>,_lambda_baaf4cb12b19c908b42db85550aea0de_,-1,Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::GipSystemButtonEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::IGipControllerWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::Gaming::GipSystemButtonEventArgs *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>>::*)(Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Gaming::GipControllerWatcher *,Windows::Internal::Gaming::GipSystemButtonEventArgs *>,_lambda_baaf4cb12b19c908b42db85550aea0de_,-1,Windows::Internal::Gaming::IGipControllerWatcher *,Windows::Internal::Gaming::IGipSystemButtonEventArgs *>::`vftable';
  return a1;
}
