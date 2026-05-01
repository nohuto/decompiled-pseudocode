/*
 * XREFs of ??$wnf_query_nothrow@U_SEB_EVENT_HEADER@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAU_SEB_EVENT_HEADER@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800AC9E0
 * Callers:
 *     ?IsBatterySaverEnabled@@YA_NXZ @ 0x1800AC9A0 (-IsBatterySaverEnabled@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@U_SEB_EVENT_HEADER@@@details@wil@@YAXPEAU_SEB_EVENT_HEADER@@KK@Z @ 0x1801CF8B8 (--$ZeroStateDataIfSizeInconsistent@U_SEB_EVENT_HEADER@@@details@wil@@YAXPEAU_SEB_EVENT_HEADER@@K.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<_SEB_EVENT_HEADER>(__int64 a1, bool *a2, __int64 a3, unsigned int *a4)
{
  unsigned int v7; // edi
  unsigned int v9; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  if ( a4 )
    *a4 = 0;
  v7 = NtQueryWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, 0LL, 0LL, &v11) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    wil::details::ZeroStateDataIfSizeInconsistent<_SEB_EVENT_HEADER>(a3, 8LL, v11);
    v9 = v11;
    *a2 = v11 != 0;
    if ( a4 )
      *a4 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v7,
      a3);
    return v7;
  }
}
