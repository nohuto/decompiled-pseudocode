/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVUniversalPropertyChangedEventArgs@2345@@Foundation@Windows@@AEBQEAVUwpWindowManagerBridge@@P84@EAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIUniversalPropertyChangedEventArgs@6783@@_E@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVUniversalPropertyChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVUwpWindowManagerBridge@@$$QEAP84@EAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIUniversalPropertyChangedEventArgs@6789@@_E@Z @ 0x1803FDB5C
 * Callers:
 *     _lambda_524ccb934e25246a0120727c88ebe67d_::operator() @ 0x18040076C (_lambda_524ccb934e25246a0120727c88ebe67d_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVUniversalPropertyChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_580aa36bdc3cd68f960570f43ff5a0a4_@@$0?0PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIUniversalPropertyChangedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@U?$AggregateType@PEAVUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIUniversalPropertyChangedEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIUniversalPropertyChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_580aa36bdc3cd68f960570f43ff5a0a4_@@@Z @ 0x1803FF73C (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_1803FF73C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ___MakeAgileCallback_U__ITypedEventHandler_PEAUIUniversalAppModelWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAVUniversalPropertyChangedEventArgs_2345__Foundation_Windows__AEBQEAVUwpWindowManagerBridge__P84_EAAJPEAUIUniversalAppModelWatcher_WindowManagement_ApplicationModel_Internal_3_PEAUIUniversalPropertyChangedEventArgs_6783___E_wil__YA_AV__ComPtr_U__ITypedEventHandler_PEAUIUniversalAppModelWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAVUniversalPropertyChangedEventArgs_2345__Foundation_Windows___WRL_Microsoft__AEBQEAVUwpWindowManagerBridge____QEAP84_EAAJPEAUIUniversalAppModelWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAUIUniversalPropertyChangedEventArgs_6789___E_Z(
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
    v4 = (void *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs *,Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *>>::*)(Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_580aa36bdc3cd68f960570f43ff5a0a4_,-1,Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_580aa36bdc3cd68f960570f43ff5a0a4_,-1,Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *>(
                   v4,
                   &v7);
  *a1 = v4;
  if ( !v4 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x4E,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
  return a1;
}
