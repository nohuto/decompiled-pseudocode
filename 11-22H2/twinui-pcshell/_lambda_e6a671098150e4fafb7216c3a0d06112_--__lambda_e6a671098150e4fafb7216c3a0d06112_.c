/*
 * XREFs of _lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_ @ 0x18047F14C
 * Callers:
 *     _winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral_::_1_::dtor$5 @ 0x1802B9662 (_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActivatedEventArgs--GetDefe_ea_1802B9662.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 */

__int64 __fastcall lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_(
        volatile __int64 **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(a1);
  return result;
}
