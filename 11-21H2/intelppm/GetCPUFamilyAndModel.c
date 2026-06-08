/*
 * XREFs of GetCPUFamilyAndModel @ 0x1C0044008
 * Callers:
 *     QueryPPMForRegisterList @ 0x1C002CB00 (QueryPPMForRegisterList.c)
 *     GetHwDebugRegisters @ 0x1C002CB90 (GetHwDebugRegisters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00036D0 (GetCpuIdInfo.c)
 */

__int64 __fastcall GetCPUFamilyAndModel(_WORD *a1, _BYTE *a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  GetCpuIdInfo(1u, &v5);
  result = WORD1(v5);
  LOBYTE(result) = ((unsigned int)v5 >> 4) & 0xF | (16 * BYTE2(v5));
  *a1 = ((unsigned int)v5 >> 8) & 0xF | (16 * (unsigned __int8)((unsigned int)v5 >> 20));
  *a2 = result;
  return result;
}
