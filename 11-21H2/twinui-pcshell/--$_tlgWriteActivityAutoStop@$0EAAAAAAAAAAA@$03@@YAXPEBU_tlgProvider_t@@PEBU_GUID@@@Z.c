/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1804F2F08
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$03@@IEAA@XZ @ 0x1804F3218 (--1-$_TlgActivityBase@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_P_ea_1804F3218.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall _tlgWriteActivityAutoStop<70368744177664,4>(_DWORD *a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r10
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 > 4u )
  {
    if ( tlgKeywordOn((__int64)a1, 0x400000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_1806BFE40, v2, 0LL, 2u, &v3);
  }
}
