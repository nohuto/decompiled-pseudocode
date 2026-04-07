/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800CB624
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1800CB7D8 (--1-$_TlgActivityBase@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

void __fastcall _tlgWriteActivityAutoStop<35184372088832,5>(_DWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 > 5u )
  {
    if ( tlgKeywordOn((__int64)a1, 0x200000000000LL) )
      tlgWriteTransfer_EtwEventWriteTransfer(v1, byte_180120819, v2, 0LL, 2, (__int64)v3);
  }
}
