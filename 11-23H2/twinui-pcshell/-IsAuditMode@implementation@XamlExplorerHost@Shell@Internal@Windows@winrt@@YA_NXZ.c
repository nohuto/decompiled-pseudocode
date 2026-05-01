/*
 * XREFs of ?IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ @ 0x18010EA20
 * Callers:
 *     ?LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18010EC90 (-LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 * Callees:
 *     RegExists @ 0x18010EA80 (RegExists.c)
 *     RegGetDword @ 0x18073B5EC (RegGetDword.c)
 */

char __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::IsAuditMode(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation *this)
{
  char v1; // bl

  v1 = 1;
  if ( ((unsigned int)RegExists(-2147483646LL, L"System\\Setup\\Status", L"AuditBoot") != 1
     || !(unsigned int)RegGetDword(-2147483646LL, L"System\\Setup\\Status"))
    && (unsigned int)RegExists(-2147483646LL, L"System\\Setup\\Status\\AuditBootVolatile", 0LL) != 1 )
  {
    return 0;
  }
  return v1;
}
