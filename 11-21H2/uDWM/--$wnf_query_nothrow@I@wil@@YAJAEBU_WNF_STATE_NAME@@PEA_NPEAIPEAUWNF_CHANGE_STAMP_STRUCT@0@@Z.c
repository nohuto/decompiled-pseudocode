/*
 * XREFs of ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800C6798
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800C6CF0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180094560 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800C6C3C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<unsigned int>(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  unsigned int v6; // edi
  const char *v7; // r9
  int v9; // [rsp+20h] [rbp-18h]
  const char *v10; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF
  int v14; // [rsp+5Ch] [rbp+24h]

  v14 = HIDWORD(a4);
  v12 = a1;
  v13 = 4;
  v5 = 0;
  *a2 = 0;
  v6 = NtQueryWnfStateData(&WNF_EOA_MAGNIFIER_RENDERING_INPUT, 0LL, 0LL, &v12, a3, &v13) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    if ( (_DWORD)v12 && v13 != 4 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        700LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
        v7);
    LOBYTE(v9) = 0;
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x2BD,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8000FFFFLL,
      v9,
      (bool)"Inconsistent state data size in wnf_query",
      v10);
    if ( (_DWORD)v12 )
    {
      if ( v13 == 4 )
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
      (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v6);
    return v6;
  }
}
