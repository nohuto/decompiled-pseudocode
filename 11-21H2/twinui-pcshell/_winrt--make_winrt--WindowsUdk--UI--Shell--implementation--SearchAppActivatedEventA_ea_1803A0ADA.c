/*
 * XREFs of _winrt::make_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_unsigned_short_const_(&)[19]_enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode_&_winrt::Windows::Foundation::Rect_const_&_std::nullptr_t_bool__::_1_::dtor$1 @ 0x1803A0ADA
 * Callers:
 *     <none>
 * Callees:
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

void __fastcall winrt::make_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_unsigned_short_const_____19__enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode___winrt::Windows::Foundation::Rect_const___std::nullptr_t_bool__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal((winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal *)(a2 + 72));
  }
}
