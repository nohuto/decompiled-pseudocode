/*
 * XREFs of sub_14054CE04 @ 0x14054CE04
 * Callers:
 *     sub_14039DA34 @ 0x14039DA34 (sub_14039DA34.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     sub_14039DC38 @ 0x14039DC38 (sub_14039DC38.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14054CE04(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+30h] [rbp-58h]
  __int64 v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v6 = sub_14039DF90((PHYSICAL_ADDRESS *)&v8, 1, (__int64)&v11, 24LL);
  sub_14039DC38(v6, a1, a2, a3);
  HvlInvokeHypercall(2);
  return sub_14039D8F0((__int64)&v8);
}
