/*
 * XREFs of sub_140417818 @ 0x140417818
 * Callers:
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_140417818()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE1FF0, (__int64)&off_1400C9EF8);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE1FF8, 0x2AA282Bu, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_140014AA8, v1);
  return v1;
}
