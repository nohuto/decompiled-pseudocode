/*
 * XREFs of sub_140811C98 @ 0x140811C98
 * Callers:
 *     sub_140809E5C @ 0x140809E5C (sub_140809E5C.c)
 *     sub_140B02344 @ 0x140B02344 (sub_140B02344.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall sub_140811C98(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v4 = a1;
  v5 = a2;
  v6 = a3;
  return ZwUpdateWnfStateData(&stru_1400102C0, &v4, 0x10u, 0LL, 0LL, 0, 0);
}
