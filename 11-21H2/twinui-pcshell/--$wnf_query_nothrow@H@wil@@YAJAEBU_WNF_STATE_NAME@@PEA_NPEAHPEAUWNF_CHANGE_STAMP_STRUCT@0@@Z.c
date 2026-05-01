/*
 * XREFs of ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180152350
 * Callers:
 *     ?PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ @ 0x1801520B0 (-PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ.c)
 *     ?IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ @ 0x1801B5B60 (-IsSlideShowEnabled@CVirtualDesktopManager@@CA_NXZ.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x18044CE3C (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
 *     ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18055DCF0 (-GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800E186C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<int>(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  unsigned int v6; // edi
  const char *v7; // r9
  const char *v9; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+58h] [rbp+20h]
  int v13; // [rsp+5Ch] [rbp+24h]

  v13 = HIDWORD(a4);
  v12 = 4;
  v5 = 0;
  *a2 = 0;
  v6 = NtQueryWnfStateData(a1, 0LL, 0LL, &v11) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    if ( v12 != 4 && v11 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2BC,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        v7);
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x2BD,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (__int64)"Inconsistent state data size in wnf_query",
      v9);
    if ( v11 )
    {
      if ( v12 == 4 )
        v5 = 1;
    }
    *a2 = v5;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BB,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v6);
    return v6;
  }
}
