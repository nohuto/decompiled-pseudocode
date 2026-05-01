/*
 * XREFs of ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x18022FFA0
 * Callers:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18022F548 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BE054 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016400C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@.c)
 *     ??$HandleInputModalityInfoChanged@AEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18022FA24 (--$HandleInputModalityInfoChanged@AEAU-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Wind.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180482488 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputModalityInfoChanged(
        __int64 a1,
        __int32 *a2,
        char *a3,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // r9

  *(_DWORD *)a3 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::GetImpl'::`2'::impl,
    1u,
    v7,
    v8);
  if ( *(_BYTE *)(a1 + 616)
    && KeyboardHosting::TabTipAdapterPolicy::IsViewShown(
         (KeyboardHosting::TabTipAdapterPolicy *)a1,
         *(_DWORD *)(a1 + 612))
    && *a2 == 4 )
  {
    *(_DWORD *)a3 = 2;
    *(_BYTE *)(a1 + 616) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 516), *a2);
  TouchKeyboardExperienceTelemetryLogger::HandleInputModalityInfoChanged<std::atomic<enum Windows::UI::Internal::Text::Core::CoreKeyboardModality> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    (int *)(a1 + 516),
    a3);
  return 0LL;
}
