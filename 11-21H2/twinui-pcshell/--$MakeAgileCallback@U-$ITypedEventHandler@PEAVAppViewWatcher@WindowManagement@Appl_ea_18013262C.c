/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewSwitchRequestedEventArgs@2345@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIAppViewSwitchRequestedEventArgs@6783@@_E@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewSwitchRequestedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewSwitchRequestedEventArgs@6789@@_E@Z @ 0x18013262C
 * Callers:
 *     _lambda_245d2a2be388f7a941ea2187d291aeff_::operator() @ 0x180131528 (_lambda_245d2a2be388f7a941ea2187d291aeff_--operator().c)
 * Callees:
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVAppViewSwitchRequestedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_cce7c2b402c2c0bebd2b07d00f097e8f_@@$0?0PEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewSwitchRequestedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewSwitchRequestedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIAppViewSwitchRequestedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_cce7c2b402c2c0bebd2b07d00f097e8f_@@@Z @ 0x1801326A0 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_1801326A0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ___MakeAgileCallback_U__ITypedEventHandler_PEAVAppViewWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAVAppViewSwitchRequestedEventArgs_2345__Foundation_Windows__AEBQEAVWindowManagerBridge__P84_EAAJPEAUIAppViewWatcher_WindowManagement_ApplicationModel_Internal_3_PEAUIAppViewSwitchRequestedEventArgs_6783___E_wil__YA_AV__ComPtr_U__ITypedEventHandler_PEAVAppViewWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAVAppViewSwitchRequestedEventArgs_2345__Foundation_Windows___WRL_Microsoft__AEBQEAVWindowManagerBridge____QEAP84_EAAJPEAUIAppViewWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAUIAppViewSwitchRequestedEventArgs_6789___E_Z(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  void *v4; // rax
  const char *v5; // r9
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = *a2;
  v8 = *a3;
  v4 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v4 = (void *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *>>::*)(Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_cce7c2b402c2c0bebd2b07d00f097e8f_,-1,Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::AppViewSwitchRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_cce7c2b402c2c0bebd2b07d00f097e8f_,-1,Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *>(
                   v4,
                   &v7);
  *a1 = v4;
  if ( !v4 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x4E,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
  return a1;
}
