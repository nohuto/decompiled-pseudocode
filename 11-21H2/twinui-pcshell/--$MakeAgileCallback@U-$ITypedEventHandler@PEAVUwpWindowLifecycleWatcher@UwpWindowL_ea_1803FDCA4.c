/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAVUwpWindowActivatingEventArgs@2345@@Foundation@Windows@@AEBQEAVUwpWindowManagerBridge@@P84@EAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@3@PEAUIUwpWindowActivatingEventArgs@6783@@_E@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAVUwpWindowActivatingEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVUwpWindowManagerBridge@@$$QEAP84@EAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivatingEventArgs@6789@@_E@Z @ 0x1803FDCA4
 * Callers:
 *     _lambda_ae322bdbb7ebce1880ae0a7995b294cd_::operator() @ 0x180401528 (_lambda_ae322bdbb7ebce1880ae0a7995b294cd_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAVUwpWindowActivatingEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_2615401e457ac26c4ad14208be69e4ef_@@$0?0PEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivatingEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowLifecycleWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowActivatingEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@3@PEAUIUwpWindowActivatingEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_2615401e457ac26c4ad14208be69e4ef_@@@Z @ 0x1803FF894 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_1803FF894.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ___MakeAgileCallback_U__ITypedEventHandler_PEAVUwpWindowLifecycleWatcher_UwpWindowLifecycleManagement_Shell_Internal_Windows__PEAVUwpWindowActivatingEventArgs_2345__Foundation_Windows__AEBQEAVUwpWindowManagerBridge__P84_EAAJPEAUIUwpWindowLifecycleWatcher_UwpWindowLifecycleManagement_Shell_Internal_3_PEAUIUwpWindowActivatingEventArgs_6783___E_wil__YA_AV__ComPtr_U__ITypedEventHandler_PEAVUwpWindowLifecycleWatcher_UwpWindowLifecycleManagement_Shell_Internal_Windows__PEAVUwpWindowActivatingEventArgs_2345__Foundation_Windows___WRL_Microsoft__AEBQEAVUwpWindowManagerBridge____QEAP84_EAAJPEAUIUwpWindowLifecycleWatcher_UwpWindowLifecycleManagement_Shell_Internal_Windows__PEAUIUwpWindowActivatingEventArgs_6789___E_Z(
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
    v4 = (void *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowActivatingEventArgs *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *>>::*)(Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowActivatingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2615401e457ac26c4ad14208be69e4ef_,-1,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowActivatingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2615401e457ac26c4ad14208be69e4ef_,-1,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivatingEventArgs *>(
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
