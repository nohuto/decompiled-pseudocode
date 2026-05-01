/*
 * XREFs of ?remove_SearchBoxPlacementMarginChanged@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1801A3100
 * Callers:
 *     <none>
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801A43C0 (-remove@-$event@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Fou.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost3>::remove_SearchBoxPlacementMarginChanged(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 56;
  if ( !a1 )
    v1 = 88LL;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>::remove(v1);
  return 0LL;
}
