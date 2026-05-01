/*
 * XREFs of ??$ZeroStateDataIfSizeInconsistent@W4_TABLETMODESTATE@@@details@wil@@YAXPEAW4_TABLETMODESTATE@@KK@Z @ 0x180211020
 * Callers:
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800AD02C (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 * Callees:
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180392DF0 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::details::ZeroStateDataIfSizeInconsistent<enum _TABLETMODESTATE>(_DWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
  {
    if ( a2 != 4 )
    {
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x271,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)0x8000FFFFLL,
        (int)"Inconsistent state data size in wnf_query",
        v5);
      result = 0LL;
      *a1 = 0;
    }
  }
  return result;
}
