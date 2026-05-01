/*
 * XREFs of ?GetBackgroundImagePath@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AUhstring@6@XZ @ 0x180731D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWallpaperImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x1807307A4 (-GetWallpaperImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::GetBackgroundImagePath(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  winrt::Windows::Internal::Shell::implementation::Utils::GetWallpaperImagePath(a2);
  return a2;
}
