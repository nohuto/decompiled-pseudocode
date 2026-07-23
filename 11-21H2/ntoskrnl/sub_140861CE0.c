/*
 * XREFs of sub_140861CE0 @ 0x140861CE0
 * Callers:
 *     sub_1406D1E90 @ 0x1406D1E90 (sub_1406D1E90.c)
 * Callees:
 *     sub_1403DCD6C @ 0x1403DCD6C (sub_1403DCD6C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS sub_140861CE0()
{
  __int64 v0; // rcx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = dword_140C0C650;
  Buffer[2] = (unsigned __int8)byte_140C23315;
  Buffer[1] = dword_140C23310;
  ZwUpdateWnfStateData(&stru_1400133B8, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  return sub_1403DCD6C(v0, dword_140C23310, byte_140C23315);
}
