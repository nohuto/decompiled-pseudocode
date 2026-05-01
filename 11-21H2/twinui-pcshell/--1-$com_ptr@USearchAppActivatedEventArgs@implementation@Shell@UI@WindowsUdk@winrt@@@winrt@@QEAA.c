/*
 * XREFs of ??1?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x18039FE54
 * Callers:
 *     _winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral_::_1_::dtor$0 @ 0x18021DD8E (_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActivatedEventArgs--GetDeferral_--_1_--d.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800FA3F4 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::~com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(a1);
  return result;
}
