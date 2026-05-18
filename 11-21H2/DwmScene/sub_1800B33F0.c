/*
 * XREFs of sub_1800B33F0 @ 0x1800B33F0
 * Callers:
 *     sub_1800B3460 @ 0x1800B3460 (sub_1800B3460.c)
 * Callees:
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B33A4 @ 0x1800B33A4 (sub_1800B33A4.c)
 *     sub_1800B6020 @ 0x1800B6020 (sub_1800B6020.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800B33F0(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_18002C84C(a1);
  sub_1800B33A4(a1, (__int64)v5, a2);
  if ( v5[0] )
  {
    sub_1800B6020(*(_QWORD *)(a1 + 16 * v6 + 64));
    j_LanguageEnumProc(a1);
    return 1;
  }
  else
  {
    j_LanguageEnumProc(a1);
    return 0;
  }
}
