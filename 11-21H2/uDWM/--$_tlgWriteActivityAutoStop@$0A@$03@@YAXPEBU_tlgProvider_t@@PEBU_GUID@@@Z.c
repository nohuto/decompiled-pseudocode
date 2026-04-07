/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800A1740
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$03@@IEAA@XZ @ 0x1800A1974 (--1-$_TlgActivityBase@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall _tlgWriteActivityAutoStop<0,4>(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 > 4u )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)a1, byte_18011F49A, a2, 0LL, 2, (__int64)v3);
  return result;
}
