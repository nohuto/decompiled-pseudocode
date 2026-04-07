/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800CFD68
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1800CFF30 (--1-$_TlgActivityBase@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0_ea_1800CFF30.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180008020 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteActivityAutoStop<35184372088832,5>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*(_QWORD *)(a1 + 16) & 0x200000000000LL) != 0 )
  {
    result = *(_QWORD *)(a1 + 24) & 0x200000000000LL;
    if ( result == *(_QWORD *)(a1 + 24) )
      return tlgWriteTransfer_EtwEventWriteTransfer(a1, byte_180127305, a2, 0LL, 2, (__int64)v3);
  }
  return result;
}
