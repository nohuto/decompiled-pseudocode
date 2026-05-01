/*
 * XREFs of ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@UE$AAAXXZ @ 0x180611968
 * Callers:
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@WBI@E$AAAXXZ @ 0x180211D60 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@WBI@E$AAAX.c)
 *     ?OnRegionInvoked@XamlSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806119C0 (-OnRegionInvoked@XamlSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistReg.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005F5A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GSAVTest@@@details@wil@@QEAAX_NW4Reportin.c)
 */

void __fastcall _OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__XamlSnapAssistViewController__UE_AAAXXZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  HWND v5; // rcx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GSAVTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GSAVTest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v5 = *(HWND *)(a1 + 192);
  if ( v5 )
    SetForegroundWindow(v5);
  else
    XamlSnapAssistViewController::DismissViewAnimated(a1);
}
