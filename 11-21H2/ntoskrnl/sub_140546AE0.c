/*
 * XREFs of sub_140546AE0 @ 0x140546AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140546AE0(int a1)
{
  __int16 v1; // bx
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int64 v5; // [rsp+38h] [rbp-30h]
  _BYTE v6[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0LL;
  LODWORD(v5) = 0;
  v3 = 0LL;
  *(_DWORD *)sub_14039DF90((PHYSICAL_ADDRESS *)&v3, 1, (__int64)v6, 8LL) = a1;
  v1 = HvlInvokeHypercall(132);
  sub_14039D8F0((__int64)&v3);
  return v1 != 0 ? 0xC0000001 : 0;
}
