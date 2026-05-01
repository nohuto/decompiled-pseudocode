/*
 * XREFs of ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481930
 * Callers:
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1804756F0 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTelemetryLogger@@P6AXXZ@Z @ 0x1800C0EE4 (-get@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAAPEAVTouchKeyboardE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OnScreenKeyboardHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801602CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OnScreenKeyboardHandling@@@details@wil@@Q.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180460E00 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?FireHostInvokedTelemetry@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEBG@Z @ 0x1804806B0 (-FireHostInvokedTelemetry@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEBG@Z.c)
 *     ?HandleInputPaneTryShow_@TouchKeyboardExperienceTelemetryLogger@@QEBAXII_N000000E@Z @ 0x180481A98 (-HandleInputPaneTryShow_@TouchKeyboardExperienceTelemetryLogger@@QEBAXII_N000000E@Z.c)
 *     ?IsAutoInvokeInDesktopModeEnabled@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ @ 0x180482328 (-IsAutoInvokeInDesktopModeEnabled@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ.c)
 *     ?IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ @ 0x18048246C (-IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180482488 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FireHostInvokedTelemetryInExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180482AA8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FireHostInvokedTelemetryInExplorer@@@deta.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  KeyboardHosting::TabTipAdapterPolicy *v10; // rcx
  char v11; // bl
  __int64 v12; // rcx
  char v13; // si
  __int64 v14; // rcx
  TouchKeyboardExperienceTelemetryLogger *v15; // rcx

  *(_DWORD *)a3 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OnScreenKeyboardHandling>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_OnScreenKeyboardHandling>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v7,
    v8);
  if ( !KeyboardHosting::TabTipAdapterPolicy::IsViewShown(this, *((_DWORD *)this + 153))
    && (*((_DWORD *)this + 129) == 2 || *((_DWORD *)this + 129) == 16)
    && (KeyboardHosting::TabTipAdapterPolicy::IsAutoInvokeInDesktopModeEnabled(this) || *((_BYTE *)this + 507))
    && !KeyboardHosting::TabTipAdapterPolicy::IsHardwareKeyboardAvailable(v10)
    && !*((_BYTE *)this + 514)
    && *((_BYTE *)this + 617) )
  {
    v11 = 1;
LABEL_11:
    *(_DWORD *)a3 = 1;
    goto LABEL_12;
  }
  v11 = 0;
  if ( a2 - 1 <= 5 )
    goto LABEL_11;
LABEL_12:
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FireHostInvokedTelemetryInExplorer>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_FireHostInvokedTelemetryInExplorer>::GetImpl'::`2'::impl,
    v9);
  if ( v11 || a2 - 1 <= 1 )
    KeyboardHosting::TabTipAdapterPolicy::FireHostInvokedTelemetry(this, L"TRYSHOW2");
  v13 = *(_BYTE *)a3;
  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled(v12) )
  {
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::get(
      v14,
      _lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    LOBYTE(v15) = *((_BYTE *)this + 506);
    TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow_(
      v15,
      a2,
      *((_DWORD *)this + 129),
      *((_BYTE *)this + 510),
      *((_BYTE *)this + 511),
      *((_BYTE *)this + 507),
      (bool)v15,
      *((_BYTE *)this + 508),
      *((_BYTE *)this + 514),
      *((_BYTE *)this + 617),
      v13);
  }
  return 0LL;
}
