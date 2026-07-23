/*
 * XREFs of sub_140416F84 @ 0x140416F84
 * Callers:
 *     IoMapTransfer @ 0x140390AC0 (IoMapTransfer.c)
 *     sub_140517BAC @ 0x140517BAC (sub_140517BAC.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_140416F84()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE1BD8, (__int64)&off_1400C9E08);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE1BD0, 0x27353B2u, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_140014AA8, v1);
  return v1;
}
