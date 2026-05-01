/*
 * XREFs of _lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_ @ 0x18039FE38
 * Callers:
 *     ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x1800F4A20 (-GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA-AUDeferr.c)
 *     _winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral_::_1_::dtor$5 @ 0x18021DDB2 (_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActivatedEventArgs--GetDefe_ea_18021DDB2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800FA3F4 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 */

__int64 __fastcall lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(a1);
  return result;
}
