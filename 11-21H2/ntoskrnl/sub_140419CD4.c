/*
 * XREFs of sub_140419CD4 @ 0x140419CD4
 * Callers:
 *     sub_140356CB8 @ 0x140356CB8 (sub_140356CB8.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_140419CD4()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE2060, (__int64)&off_1400C9F88);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE2068, 0x32B8C1Bu, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_140014AA8, v1);
  return v1;
}
