/*
 * XREFs of sub_180013B70 @ 0x180013B70
 * Callers:
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180013B70(__int64 a1)
{
  _DWORD v2[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v4; // [rsp+60h] [rbp-58h]

  NtQueryInformationProcess(*(HANDLE *)(a1 + 40), ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
  MemUtilIsWorkingSetTooLargeForSwap(v4, 5000LL, v2);
  return v2[0];
}
