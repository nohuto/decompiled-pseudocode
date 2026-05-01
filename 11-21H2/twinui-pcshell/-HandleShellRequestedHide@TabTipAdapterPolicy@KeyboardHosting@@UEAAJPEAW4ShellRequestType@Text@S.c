/*
 * XREFs of ?HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481DC0
 * Callers:
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x180477260 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016400C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@.c)
 *     ??$HandleShellRequestedHide@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18047F558 (--$HandleShellRequestedHide@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExp.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180482488 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleShellRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9

  *(_DWORD *)a2 = 0;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsViewShown(
         (KeyboardHosting::TabTipAdapterPolicy *)((char *)this - 16),
         *((_DWORD *)this + 149)) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::GetImpl'::`2'::impl,
      1u,
      v4,
      v5);
    if ( !*((_BYTE *)this + 600) || *((_BYTE *)this + 487) )
      *(_DWORD *)a2 = 2;
    *((_BYTE *)this + 496) = 0;
  }
  TouchKeyboardExperienceTelemetryLogger::HandleShellRequestedHide<enum Windows::Internal::Shell::Text::ShellRequestType &>((char *)a2);
  return 0LL;
}
