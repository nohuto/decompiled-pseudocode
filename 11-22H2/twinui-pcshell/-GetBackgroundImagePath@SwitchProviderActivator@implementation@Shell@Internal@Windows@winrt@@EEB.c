/*
 * XREFs of ?GetBackgroundImagePath@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@EEBA?AUhstring@6@XZ @ 0x180730760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWallpaperImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x1807307A4 (-GetWallpaperImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::GetBackgroundImagePath(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::Utils::GetWallpaperImagePath(a2);
  return a2;
}
