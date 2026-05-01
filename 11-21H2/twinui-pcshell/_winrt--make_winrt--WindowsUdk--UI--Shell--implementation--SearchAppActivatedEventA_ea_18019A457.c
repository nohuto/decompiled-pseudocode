/*
 * XREFs of _winrt::make_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::hstring_const_&_enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode_&_winrt::Windows::Foundation::Rect_&_winrt::Windows::Foundation::DeferralCompletedHandler_&_bool_&_winrt::hstring_&_winrt::WindowsUdk::UI::Shell::SearchAppHost_&__::_1_::dtor$1 @ 0x18019A457
 * Callers:
 *     <none>
 * Callees:
 *     ??1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180020144 (--1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::make_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::hstring_const___enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode___winrt::Windows::Foundation::Rect___winrt::Windows::Foundation::DeferralCompletedHandler___bool___winrt::hstring___winrt::WindowsUdk::UI::Shell::SearchAppHost____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)(a2 + 128));
  }
}
