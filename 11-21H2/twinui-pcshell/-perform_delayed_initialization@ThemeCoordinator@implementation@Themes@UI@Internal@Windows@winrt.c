/*
 * XREFs of ?perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXXZ @ 0x1800B47C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x1800B4818 (-HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@A.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800B49B4 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::perform_delayed_initialization(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  wil::wnf_query_nothrow<unsigned long>(&WNF_SHEL_PACKAGE_SERVICING_STATUS, &v5, &v6);
  v6 &= -(v5 != 0);
  v2 = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicingAsync(
         (winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *)((char *)this - 8),
         v6 == 1);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x43,
      (unsigned int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
      (const char *)(unsigned int)v2,
      v3);
}
