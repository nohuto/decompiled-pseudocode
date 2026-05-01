/*
 * XREFs of ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACB5C
 * Callers:
 *     ?PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ @ 0x1800ACAC0 (-PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x1805030CC (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
 *     ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x180601E08 (-IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ.c)
 *     ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180618530 (-GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@H@details@wil@@YAXPEAHKK@Z @ 0x1801D9780 (--$ZeroStateDataIfSizeInconsistent@H@details@wil@@YAXPEAHKK@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<int>(__int64 a1, char *a2, __int64 a3, __int64 a4)
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
    wil::details::ZeroStateDataIfSizeInconsistent<int>(a3, v12, v11);
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
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v7,
      v9);
    return v7;
  }
}
