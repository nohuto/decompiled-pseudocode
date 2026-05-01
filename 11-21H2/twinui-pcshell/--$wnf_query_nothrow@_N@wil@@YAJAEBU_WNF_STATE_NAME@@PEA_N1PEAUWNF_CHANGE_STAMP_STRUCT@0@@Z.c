/*
 * XREFs of ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800C990C
 * Callers:
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x1800C96E0 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800E186C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<bool>(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  unsigned int v6; // edi
  const char *v7; // r9
  const char *v9; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+58h] [rbp+20h]
  int v13; // [rsp+5Ch] [rbp+24h]

  v13 = HIDWORD(a4);
  v11 = a1;
  *a2 = 0;
  v5 = 1;
  v12 = 1;
  v6 = NtQueryWnfStateData(&WNF_SHEL_LOCK_ON_LOGON, 0LL, 0LL, &v11) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    if ( v12 != 1 && (_DWORD)v11 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2BC,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        v7);
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x2BD,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (bool)"Inconsistent state data size in wnf_query",
      v9);
    if ( !(_DWORD)v11 || v12 != 1 )
      v5 = 0;
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
