/*
 * XREFs of sub_1404190B0 @ 0x1404190B0
 * Callers:
 *     sub_140667A4C @ 0x140667A4C (sub_140667A4C.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_1404190B0()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE2038, (__int64)&off_1400C9F58);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE2030, 0x30E8BFDu, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_140014AA8, v1);
  return v1;
}
