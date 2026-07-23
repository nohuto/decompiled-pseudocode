/*
 * XREFs of sub_140547850 @ 0x140547850
 * Callers:
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 sub_140547850()
{
  unsigned __int16 v0; // bx
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  __int64 v3; // [rsp+30h] [rbp-38h]
  __int64 v4; // [rsp+38h] [rbp-30h]
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0LL;
  LODWORD(v4) = 0;
  v2 = 0LL;
  *(_DWORD *)sub_14039DF90((PHYSICAL_ADDRESS *)&v2, 1, (__int64)v5, 8LL) = 4;
  v0 = HvlInvokeHypercall(135);
  sub_14039D8F0((__int64)&v2);
  return sub_14054CA70(v0);
}
