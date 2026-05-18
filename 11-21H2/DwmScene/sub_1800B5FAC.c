/*
 * XREFs of sub_1800B5FAC @ 0x1800B5FAC
 * Callers:
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 * Callees:
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_1800B4028 @ 0x1800B4028 (sub_1800B4028.c)
 *     sub_1800B5388 @ 0x1800B5388 (sub_1800B5388.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_1800B5FAC(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // di

  v2 = a1 + 8;
  sub_18002C84C(a1 + 8);
  sub_1800B5388(a1);
  v3 = 0;
  if ( !sub_1800B4028() )
    v3 = !sub_1800B4028();
  j_LanguageEnumProc(v2);
  return v3;
}
