/*
 * XREFs of sub_14054C770 @ 0x14054C770
 * Callers:
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14054C770(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int16 v3; // bx
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v2 = sub_14039DF90((PHYSICAL_ADDRESS *)&v5, 2, (__int64)&v8, 8LL);
  v3 = HvlInvokeHypercall(32769);
  sub_14039D8F0((__int64)&v5);
  if ( v3 )
    return 0;
  *a1 = *v2;
  return 1;
}
