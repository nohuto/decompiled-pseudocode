/*
 * XREFs of sub_14023210C @ 0x14023210C
 * Callers:
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_140597940 @ 0x140597940 (sub_140597940.c)
 * Callees:
 *     sub_140232154 @ 0x140232154 (sub_140232154.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 */

_BOOL8 __fastcall sub_14023210C(__int64 a1, unsigned int a2)
{
  ULONG_PTR v3; // rax

  v3 = sub_1402D03D0(a1 << 25 >> 16);
  return (unsigned int)sub_140232154(v3, a2) == 0;
}
