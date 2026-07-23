/*
 * XREFs of sub_14059A31C @ 0x14059A31C
 * Callers:
 *     sub_1402708F4 @ 0x1402708F4 (sub_1402708F4.c)
 *     sub_140270A00 @ 0x140270A00 (sub_140270A00.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 * Callees:
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_1405B3FA4 @ 0x1405B3FA4 (sub_1405B3FA4.c)
 */

ULONG_PTR __fastcall sub_14059A31C(ULONG_PTR a1, char a2)
{
  if ( (a2 & 2) != 0 )
    return a1;
  sub_1405B3FA4(a1);
  sub_14026845C(a1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
