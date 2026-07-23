/*
 * XREFs of sub_14054D374 @ 0x14054D374
 * Callers:
 *     sub_14054A25C @ 0x14054A25C (sub_14054A25C.c)
 *     sub_14054A4B0 @ 0x14054A4B0 (sub_14054A4B0.c)
 *     sub_14054AE18 @ 0x14054AE18 (sub_14054AE18.c)
 *     sub_14054D2AC @ 0x14054D2AC (sub_14054D2AC.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14054D374(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int128 v6; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+30h] [rbp-58h]
  __int64 v8; // [rsp+38h] [rbp-50h]
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v4 = sub_14039DF90((PHYSICAL_ADDRESS *)&v6, 1, (__int64)&v9, 24LL);
  v4[1] = -1LL;
  v4[2] = 1LL;
  *v4 = a2;
  v4[2] = *(_BYTE *)(a1 + 4) != 0 ? 3LL : 1LL;
  HvlInvokeHypercall(151);
  return sub_14039D8F0((__int64)&v6);
}
