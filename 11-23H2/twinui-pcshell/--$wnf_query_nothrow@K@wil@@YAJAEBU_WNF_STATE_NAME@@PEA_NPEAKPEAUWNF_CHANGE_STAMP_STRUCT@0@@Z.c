/*
 * XREFs of ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACC14
 * Callers:
 *     ?perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXXZ @ 0x1800A3240 (-perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt.c)
 *     ?ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ @ 0x1802D4948 (-ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ.c)
 *     ?GetActiveQuietHoursProfile@GamingOverlayExperienceManager@@UEAAJPEAK@Z @ 0x1803FBED0 (-GetActiveQuietHoursProfile@GamingOverlayExperienceManager@@UEAAJPEAK@Z.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18045B39C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ??$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1804A9878 (--$try_wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@K@details@wil@@YAXPEAKKK@Z @ 0x1801DA0AC (--$ZeroStateDataIfSizeInconsistent@K@details@wil@@YAXPEAKKK@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<unsigned long>(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v6; // di
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h]
  int v13; // [rsp+6Ch] [rbp+24h]

  v13 = HIDWORD(a4);
  v12 = 4;
  v9 = a3;
  v6 = 0;
  *a2 = 0;
  v7 = NtQueryWnfStateData(a1, 0LL, 0LL, &v11) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    wil::details::ZeroStateDataIfSizeInconsistent<unsigned long>(a3, v12, v11);
    if ( v11 )
    {
      if ( v12 == 4 )
        v6 = 1;
    }
    *a2 = v6;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
      (const char *)v7,
      v9);
    return v7;
  }
}
