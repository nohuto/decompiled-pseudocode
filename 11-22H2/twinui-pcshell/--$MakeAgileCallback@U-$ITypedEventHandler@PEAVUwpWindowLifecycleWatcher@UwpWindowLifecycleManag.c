/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@2345@@Foundation@Windows@@PEAVUwpWindowManagerBridge@@P84@EAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@3@UUwpWindowContextId@6783@@_E@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@2345@@Foundation@Windows@@@WRL@Microsoft@@$$QEAPEAVUwpWindowManagerBridge@@$$QEAP84@EAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@6789@@_E@Z @ 0x1801768A8
 * Callers:
 *     ?StartUalmWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180176438 (-StartUalmWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_daa20d128bbbbc61f03a08a87050d586_@@$0?0PEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@UUwpWindowContextId@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIUwpWindowLifecycleWatcher@2345@@Internal@Foundation@Windows@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@24@@Foundation@Windows@@EAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@3@UUwpWindowContextId@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_daa20d128bbbbc61f03a08a87050d586_@@@Z @ 0x180176990 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_180176990.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ___MakeAgileCallback_U__ITypedEventHandler_PEAVUwpWindowLifecycleWatcher_UwpWindowLifecycleManagement_Shell_Internal_Windows__UUwpWindowContextId_2345__Foundation_Windows__PEAVUwpWindowManagerBridge__P84_EAAJPEAUIUwpWindowLifecycleWatcher_UwpWindowLifecycleManagement_Shell_Internal_3_UUwpWindowContextId_6783___E_wil__YA_AV__ComPtr_U__ITypedEventHandler_PEAVUwpWindowLifecycleWatcher_UwpWindowLifecycleManagement_Shell_Internal_Windows__UUwpWindowContextId_2345__Foundation_Windows___WRL_Microsoft____QEAPEAVUwpWindowManagerBridge____QEAP84_EAAJPEAUIUwpWindowLifecycleWatcher_UwpWindowLifecycleManagement_Shell_Internal_Windows__UUwpWindowContextId_6789___E_Z(
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
    v4 = (void *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *>,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId>::*)(Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId>,Microsoft::WRL::FtmBase>,_lambda_daa20d128bbbbc61f03a08a87050d586_,-1,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId>,Microsoft::WRL::FtmBase>,_lambda_daa20d128bbbbc61f03a08a87050d586_,-1,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId>(
                   v4,
                   &v7);
  *a1 = v4;
  if ( !v4 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x53,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
  return a1;
}
