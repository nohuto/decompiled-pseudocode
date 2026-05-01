/*
 * XREFs of ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0001@@@Z @ 0x1801D6FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D8E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SetGhostVisualStyleInternal(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 + 384) )
  {
    result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
               `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
               1u,
               3u,
               a4);
    if ( *(_DWORD *)(a1 + 388) )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 48LL))(
                 *(_QWORD *)(a1 + 328),
                 2 - (unsigned int)(a2 != 0));
    *(_DWORD *)(a1 + 384) = a2;
  }
  return result;
}
