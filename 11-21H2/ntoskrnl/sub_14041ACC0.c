/*
 * XREFs of sub_14041ACC0 @ 0x14041ACC0
 * Callers:
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_14041ACC0()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE21B0, (__int64)&off_1400CA048);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE21A8, 0x3191445u, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_140014AA8, v1);
  return v1;
}
