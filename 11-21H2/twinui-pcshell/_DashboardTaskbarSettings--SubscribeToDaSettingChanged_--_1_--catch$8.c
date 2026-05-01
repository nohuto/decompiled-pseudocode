/*
 * XREFs of _DashboardTaskbarSettings::SubscribeToDaSettingChanged_::_1_::catch$8 @ 0x1801D0B48
 * Callers:
 *     <none>
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

__int64 __fastcall DashboardTaskbarSettings::SubscribeToDaSettingChanged_::_1_::catch_8(__int64 a1, __int64 a2)
{
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *v3; // rbx

  *(_QWORD *)(a2 + 64) = 0LL;
  v3 = *(winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs **)(a2 + 48);
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    v3,
    (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a2 + 64));
  *((_QWORD *)v3 + 1) = 0LL;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a2 + 64));
  return 0LL;
}
