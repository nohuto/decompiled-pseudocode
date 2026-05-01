/*
 * XREFs of ??$SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect@AEBURect@Foundation@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEBURect@Foundation@Windows@winrt@@@Z @ 0x18022C0B0
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1 @ 0x18022D6A0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18022D6A0.c)
 * Callees:
 *     ?SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_@SnapFlyoutTelemetry@@QEBAXAEBURect@Foundation@Windows@winrt@@@Z @ 0x18022D504 (-SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_@SnapFlyoutTelemetry@@QEBAXAEBURect@Founda.c)
 *     ?Instance@SnapFlyoutTelemetry@@KAPEAV1@XZ @ 0x18067AD3C (-Instance@SnapFlyoutTelemetry@@KAPEAV1@XZ.c)
 *     ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x18067B720 (-IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z.c)
 */

void __fastcall SnapFlyoutTelemetry::SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect<winrt::Windows::Foundation::Rect const &>(
        struct winrt::Windows::Foundation::Rect *a1,
        unsigned __int64 a2)
{
  SnapFlyoutTelemetry *v3; // rcx

  if ( SnapFlyoutTelemetry::IsEnabled((unsigned __int8)a1, a2) )
  {
    SnapFlyoutTelemetry::Instance();
    SnapFlyoutTelemetry::SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect_(v3, a1);
  }
}
