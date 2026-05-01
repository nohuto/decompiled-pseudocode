/*
 * XREFs of ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800AD02C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@W4_TABLETMODESTATE@@@details@wil@@YAXPEAW4_TABLETMODESTATE@@KK@Z @ 0x180211020 (--$ZeroStateDataIfSizeInconsistent@W4_TABLETMODESTATE@@@details@wil@@YAXPEAW4_TABLETMODESTATE@@K.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<enum _TABLETMODESTATE>(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v6; // di
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h]
  int v13; // [rsp+6Ch] [rbp+24h]

  v13 = HIDWORD(a4);
  v11 = a1;
  v12 = 4;
  v9 = a3;
  v6 = 0;
  *a2 = 0;
  v7 = NtQueryWnfStateData(&WNF_TMCN_ISTABLETMODE, 0LL, 0LL, &v11) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    wil::details::ZeroStateDataIfSizeInconsistent<enum _TABLETMODESTATE>(a3, v12, (unsigned int)v11);
    if ( (_DWORD)v11 )
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
