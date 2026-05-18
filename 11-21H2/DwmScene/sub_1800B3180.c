/*
 * XREFs of sub_1800B3180 @ 0x1800B3180
 * Callers:
 *     sub_1800B320C @ 0x1800B320C (sub_1800B320C.c)
 * Callees:
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B2760 @ 0x1800B2760 (sub_1800B2760.c)
 *     sub_1800B33A4 @ 0x1800B33A4 (sub_1800B33A4.c)
 *     sub_1800B53C0 @ 0x1800B53C0 (sub_1800B53C0.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800B3180(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h]

  v8 = a1;
  sub_18002C84C(a1);
  sub_1800B33A4(a1, v5, a2);
  if ( v5[0] )
  {
    v7 = v6;
    sub_1800B2760((__int64 *)(a1 + 48), (__int64)v5, &v7);
    sub_1800B53C0(*(_QWORD *)(a1 + 16 * v7 + 64));
    j_LanguageEnumProc(a1);
    return 1;
  }
  else
  {
    j_LanguageEnumProc(a1);
    return 0;
  }
}
