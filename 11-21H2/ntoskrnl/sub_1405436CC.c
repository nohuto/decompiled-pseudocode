/*
 * XREFs of sub_1405436CC @ 0x1405436CC
 * Callers:
 *     sub_140A032A0 @ 0x140A032A0 (sub_140A032A0.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char sub_1405436CC()
{
  _QWORD *v0; // rbx
  __int128 v2; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v3; // [rsp+30h] [rbp-D0h]
  __int64 v4; // [rsp+38h] [rbp-C8h]
  __int128 v5; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  _BYTE v8[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v9[2064]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = 0LL;
  LODWORD(v7) = 0;
  v3 = 0LL;
  LODWORD(v4) = 0;
  v5 = 0LL;
  v2 = 0LL;
  v0 = sub_14039DF90((PHYSICAL_ADDRESS *)&v5, 1, (__int64)v9, 1032LL);
  sub_14039DF90((PHYSICAL_ADDRESS *)&v2, 2, (__int64)v8, 72LL);
  *(_DWORD *)v0 = 3;
  LOBYTE(v0) = (unsigned __int16)HvlInvokeHypercall(147) == 0;
  sub_14039D8F0((__int64)&v2);
  sub_14039D8F0((__int64)&v5);
  return (char)v0;
}
