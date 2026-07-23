/*
 * XREFs of sub_14080A040 @ 0x14080A040
 * Callers:
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall sub_14080A040(const WNF_STATE_NAME *a1, __int128 *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 Buffer; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v3 = *a2;
  v6 = a3;
  Buffer = v3;
  return ZwUpdateWnfStateData(a1, &Buffer, 0x18u, 0LL, 0LL, 0, 0);
}
