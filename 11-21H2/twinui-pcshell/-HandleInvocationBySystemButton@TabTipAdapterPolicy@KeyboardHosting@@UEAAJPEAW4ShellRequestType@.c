/*
 * XREFs of ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481BB0
 * Callers:
 *     ?OnKeyboardButtonRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180475C10 (-OnKeyboardButtonRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OnScreenKeyboardHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801602CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OnScreenKeyboardHandling@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016400C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@.c)
 *     ??$HandleInvocationBySystemButton@AEB_NAEB_NAEAU?$atomic@_N@std@@AEAU12@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N0AEAU?$atomic@_N@std@@1AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18047F410 (--$HandleInvocationBySystemButton@AEB_NAEB_NAEAU-$atomic@_N@std@@AEAU12@AEAW4ShellRequestType@Te.c)
 *     ?FireHostInvokedTelemetry@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEBG@Z @ 0x1804806B0 (-FireHostInvokedTelemetry@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEBG@Z.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180482488 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FireHostInvokedTelemetryInExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180482AA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FireHostInvokedTelemetryInExplorer@@@deta.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInvocationBySystemButton(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  char v11; // [rsp+48h] [rbp+10h] BYREF
  bool IsViewShown; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  IsViewShown = KeyboardHosting::TabTipAdapterPolicy::IsViewShown(this, *((_DWORD *)this + 153));
  v11 = *((_BYTE *)this + 616);
  *((_BYTE *)this + 616) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OnScreenKeyboardHandling>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_OnScreenKeyboardHandling>::GetImpl'::`2'::impl,
    1u,
    3u,
    v6);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v7,
    v8);
  if ( *((_BYTE *)this + 617) && !*((_BYTE *)this + 514) )
    *(_DWORD *)a2 = 1;
  TouchKeyboardExperienceTelemetryLogger::HandleInvocationBySystemButton<bool const &,bool const &,std::atomic<bool> &,std::atomic<bool> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    (char *)&IsViewShown,
    &v11,
    (char *)this + 514,
    (char *)this + 617,
    (char *)a2);
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FireHostInvokedTelemetryInExplorer>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_FireHostInvokedTelemetryInExplorer>::GetImpl'::`2'::impl,
    v9);
  KeyboardHosting::TabTipAdapterPolicy::FireHostInvokedTelemetry(this, L"BUTTON");
  return 0LL;
}
