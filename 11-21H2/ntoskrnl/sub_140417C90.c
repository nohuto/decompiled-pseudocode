/*
 * XREFs of sub_140417C90 @ 0x140417C90
 * Callers:
 *     sub_1406B9FD4 @ 0x1406B9FD4 (sub_1406B9FD4.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_140417C90()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE2008, (__int64)&off_1400C9F28);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE2010, 0x2FB07BBu, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_140014AA8, v1);
  return v1;
}
