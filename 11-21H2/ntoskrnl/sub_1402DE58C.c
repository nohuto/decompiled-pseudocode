/*
 * XREFs of sub_1402DE58C @ 0x1402DE58C
 * Callers:
 *     sub_140771CD0 @ 0x140771CD0 (sub_140771CD0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402DE58C(__int16 a1)
{
  unsigned int v1; // ecx

  v1 = a1 & 0xFFF;
  return v1 < 0x12 || v1 > 0x14 && v1 != 25;
}
