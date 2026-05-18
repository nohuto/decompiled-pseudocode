/*
 * XREFs of sub_1800596AC @ 0x1800596AC
 * Callers:
 *     sub_180058A08 @ 0x180058A08 (sub_180058A08.c)
 *     sub_180059EA8 @ 0x180059EA8 (sub_180059EA8.c)
 *     sub_18005AED8 @ 0x18005AED8 (sub_18005AED8.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 */

__int64 __fastcall sub_1800596AC(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_18001246C((_QWORD *)(a1 + 32), (_QWORD *)(a2 + 32));
  return v2;
}
