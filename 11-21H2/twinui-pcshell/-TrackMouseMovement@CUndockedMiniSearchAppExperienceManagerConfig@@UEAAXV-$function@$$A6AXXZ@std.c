/*
 * XREFs of ?TrackMouseMovement@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXV?$function@$$A6AXXZ@std@@@Z @ 0x1803A46B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18010E48C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x18034F7C0 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CUndockedMiniSearchAppExperienceManagerConfig::TrackMouseMovement(
        struct _TP_TIMER **pv,
        struct _TP_TIMER **a2)
{
  char *v4; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v6; // rdx

  v4 = (char *)(pv + 3);
  if ( pv + 3 != a2 )
  {
    std::_Func_class<void,>::_Tidy((__int64)(pv + 3), (__int64)a2);
    std::_Func_class<void,>::_Reset_move((__int64)v4, (__int64)a2);
  }
  (*((void (__fastcall **)(struct _TP_TIMER **))*pv + 6))(pv);
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_52ac8a1d7cd5e113393ebfb57ce15774_::_lambda_invoker_cdecl_,
                      pv,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 11,
    ThreadpoolTimer);
  ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(pv[11], (struct _TP_TIMER *)0x14D, 0x14Du);
  return std::_Func_class<void,>::_Tidy((__int64)a2, v6);
}
