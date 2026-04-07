/*
 * XREFs of ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800D6D18
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z @ 0x1800D6A5C (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D80E4 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800D8850 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 *     ?ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ @ 0x180105584 (-ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ.c)
 *     ?SetTransitionHandlerResponsive@CGlobalTimeTrackVisual@@QEAAXUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@@Z @ 0x1801055FC (-SetTransitionHandlerResponsive@CGlobalTimeTrackVisual@@QEAAXUScreenRotationResponsiveTransition.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 *__fastcall winrt::com_ptr<winrt::impl::IWeakReference>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
