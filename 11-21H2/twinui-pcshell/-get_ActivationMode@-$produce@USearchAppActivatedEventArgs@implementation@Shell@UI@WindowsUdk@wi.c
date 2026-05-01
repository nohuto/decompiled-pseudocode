/*
 * XREFs of ?get_ActivationMode@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAH@Z @ 0x18003C570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs>::get_ActivationMode(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 72;
  if ( !a1 )
    v2 = 88LL;
  *a2 = *(_DWORD *)v2;
  return 0LL;
}
