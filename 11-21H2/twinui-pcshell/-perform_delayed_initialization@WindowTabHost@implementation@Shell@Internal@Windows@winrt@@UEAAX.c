/*
 * XREFs of ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801675B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800F6E70 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800FE1D4 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180167610 (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost *v2; // rdi

  if ( *((_QWORD *)this + 12) )
  {
    v2 = (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this - 48);
    if ( *((_DWORD *)this + 62) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateAltTabFilterSetting((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this - 48));
    if ( *((_DWORD *)this + 94) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindExistingWindows(v2);
    if ( *((_QWORD *)this + 48) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(v2);
  }
}
