/*
 * XREFs of ?wnf_is_published_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18044C80C
 * Callers:
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x180114A18 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_is_published_nothrow(
        wil *this,
        const struct _WNF_STATE_NAME *a2,
        bool *a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil *v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+50h] [rbp+18h]
  int v10; // [rsp+54h] [rbp+1Ch]

  v10 = HIDWORD(a3);
  v8 = this;
  v9 = 0;
  LOBYTE(a2->Data[0]) = 0;
  v5 = NtQueryWnfStateData(&WNF_SHEL_SESSION_LOGON_COMPLETE, 0LL, 0LL, &v8) | 0x10000000;
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -805306333 )
  {
    LOBYTE(a2->Data[0]) = (_DWORD)v8 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27D,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v5);
    return v5;
  }
}
