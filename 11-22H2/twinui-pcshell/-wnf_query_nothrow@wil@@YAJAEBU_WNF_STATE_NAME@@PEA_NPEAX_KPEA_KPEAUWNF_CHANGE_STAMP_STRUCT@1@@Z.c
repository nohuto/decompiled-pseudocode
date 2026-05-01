/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1806C18A0
 * Callers:
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1806BF9C0 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800507C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(wil *this, const struct _WNF_STATE_NAME *a2, bool *a3, void *a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil *v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+20h]
  int v12; // [rsp+5Ch] [rbp+24h]

  v12 = HIDWORD(a4);
  v10 = this;
  v5 = a5;
  LOBYTE(a2->Data[0]) = 0;
  *v5 = 0LL;
  v11 = 256;
  v7 = NtQueryWnfStateData(&WNF_SHEL_CHAT_ICON_BADGE, 0LL, 0LL, &v10);
  if ( v7 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x2EF,
             (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
             (const char *)(unsigned int)v7);
  LOBYTE(a2->Data[0]) = (_DWORD)v10 != 0;
  *v5 = v11;
  return 0LL;
}
