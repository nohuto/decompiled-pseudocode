/*
 * XREFs of ?GetBackgroundImagePath@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@EEBA?AUhstring@6@XZ @ 0x18072D670
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x18072D9FC (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::BootProviderActivator::GetBackgroundImagePath(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(a2);
  return a2;
}
