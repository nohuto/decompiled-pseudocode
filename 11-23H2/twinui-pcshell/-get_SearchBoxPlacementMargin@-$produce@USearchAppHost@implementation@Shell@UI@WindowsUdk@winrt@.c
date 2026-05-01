/*
 * XREFs of ?get_SearchBoxPlacementMargin@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@@impl@winrt@@UEAAHPEAN@Z @ 0x18046CB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost3>::get_SearchBoxPlacementMargin(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 112;
  if ( !a1 )
    v2 = 144LL;
  *a2 = *(_QWORD *)v2;
  return 0LL;
}
