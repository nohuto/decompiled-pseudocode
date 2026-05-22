/*
 * XREFs of ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18007788C
 * Callers:
 *     ?OnHitTest@ShellHandwritingProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180077E40 (-OnHitTest@ShellHandwritingProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18006029C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<bool>(__int64 a1, char *a2, _BYTE *a3, __int64 a4)
{
  char v6; // bl
  unsigned int v7; // edi
  int v9; // eax
  int v10; // ecx
  const char *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF
  int v15; // [rsp+6Ch] [rbp+24h]

  v15 = HIDWORD(a4);
  v13 = a1;
  *a2 = 0;
  v6 = 1;
  v14 = 1;
  v7 = NtQueryWnfStateData(&WNF_SHEL_SHELLHANDWRITING_ENABLED, 0LL, 0LL, &v13, a3, &v14) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    v9 = v13;
    if ( !(_DWORD)v13 )
      goto LABEL_9;
    v10 = v14;
    if ( v14 != 1 )
    {
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x271,
        (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)0x8000FFFFLL,
        (__int64)"Inconsistent state data size in wnf_query",
        v11);
      v10 = v14;
      *a3 = 0;
      v9 = v13;
    }
    if ( !v9 || v10 != 1 )
LABEL_9:
      v6 = 0;
    *a2 = v6;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CC,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v7);
    return v7;
  }
}
