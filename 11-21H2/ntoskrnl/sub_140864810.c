/*
 * XREFs of sub_140864810 @ 0x140864810
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall sub_140864810(char a1)
{
  BOOL v2; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+48h] [rbp-20h] BYREF

  v3 = 0x2831628A3BC2075LL;
  v2 = a1 != 0;
  return ZwUpdateWnfStateData((PCWNF_STATE_NAME)&v3, &v2, 4u, 0LL, 0LL, 0, 0);
}
