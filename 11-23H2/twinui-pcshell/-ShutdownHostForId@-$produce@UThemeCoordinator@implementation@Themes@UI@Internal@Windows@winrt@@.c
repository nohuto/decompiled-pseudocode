/*
 * XREFs of ?ShutdownHostForId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHH@Z @ 0x1806E3970
 * Callers:
 *     <none>
 * Callees:
 *     ?ShutdownHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAAXW4BackgroundIdentifier@34567@@Z @ 0x1806E39C8 (-ShutdownHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAAXW4Back.c)
 */

__int64 winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator>::ShutdownHostForId()
{
  __int64 result; // rax
  int v1; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ShutdownHostForId();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v1);
  }
  return result;
}
