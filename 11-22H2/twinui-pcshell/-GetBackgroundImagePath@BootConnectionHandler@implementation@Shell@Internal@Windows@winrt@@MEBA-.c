/*
 * XREFs of ?GetBackgroundImagePath@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AUhstring@6@XZ @ 0x18072F800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x18072D9FC (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 */

const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **__fastcall winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::GetBackgroundImagePath(
        __int64 a1,
        const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **a2)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *a1, __int64 a2)))(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *a1, __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(a2);
  return a2;
}
