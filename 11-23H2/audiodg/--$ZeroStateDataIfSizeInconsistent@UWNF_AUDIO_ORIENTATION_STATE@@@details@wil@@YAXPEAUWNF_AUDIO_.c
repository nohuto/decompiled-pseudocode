/*
 * XREFs of ??$ZeroStateDataIfSizeInconsistent@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAXPEAUWNF_AUDIO_ORIENTATION_STATE@@KK@Z @ 0x14002D474
 * Callers:
 *     ??$wnf_query_nothrow@UWNF_AUDIO_ORIENTATION_STATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_AUDIO_ORIENTATION_STATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x14006B0C8 (--$wnf_query_nothrow@UWNF_AUDIO_ORIENTATION_STATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_AU.c)
 * Callees:
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14006D4B0 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::details::ZeroStateDataIfSizeInconsistent<WNF_AUDIO_ORIENTATION_STATE>(
        _DWORD *a1,
        int a2,
        int a3)
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
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
        (const char *)0x8000FFFFLL,
        (int)"Inconsistent state data size in wnf_query",
        v5);
      result = 0LL;
      *a1 = 0;
    }
  }
  return result;
}
