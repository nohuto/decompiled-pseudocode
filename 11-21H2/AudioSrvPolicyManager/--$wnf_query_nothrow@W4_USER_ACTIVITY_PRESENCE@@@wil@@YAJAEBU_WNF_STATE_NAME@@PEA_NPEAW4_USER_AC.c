/*
 * XREFs of ??$wnf_query_nothrow@W4_USER_ACTIVITY_PRESENCE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_USER_ACTIVITY_PRESENCE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180008458
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000CDB0 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005464 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18000A5C0 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<enum _USER_ACTIVITY_PRESENCE>(__int64 a1, bool *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v6; // edi
  const char *v7; // r9
  int v9; // ecx
  bool v10; // al
  int v11; // [rsp+20h] [rbp-18h]
  const char *v12; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a1;
  *a2 = 0;
  if ( a4 )
    *a4 = 0;
  LODWORD(v15) = 4;
  v6 = NtQueryWnfStateData(&WNF_PO_INITIAL_GLOBAL_USER_PRESENCE, 0LL, 0LL, &v14, &g_UserPresenceOnBoot, &v15) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    if ( (_DWORD)v14 && (_DWORD)v15 != 4 )
      wil::details::in1diag3::FailFast_Unexpected(
        retaddr,
        700LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        v7);
    LOBYTE(v11) = 0;
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x2BD,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      v11,
      (bool)"Inconsistent state data size in wnf_query",
      v12);
    v9 = v14;
    v10 = (_DWORD)v14 && (_DWORD)v15 == 4;
    *a2 = v10;
    if ( a4 )
      *a4 = v9;
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
