/*
 * XREFs of sub_1402E766C @ 0x1402E766C
 * Callers:
 *     sub_1402E7400 @ 0x1402E7400 (sub_1402E7400.c)
 *     sub_1405C37D0 @ 0x1405C37D0 (sub_1405C37D0.c)
 * Callees:
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

_BOOL8 __fastcall sub_1402E766C(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r8

  v2 = a2;
  v3 = sub_140317A10(a1);
  return v3 && ((v3 & 1) != 0 || (v3 & 0x400) == 0 || !sub_1402806A0(v3) || ((v5 >> 5) & 0x1F) != v2);
}
