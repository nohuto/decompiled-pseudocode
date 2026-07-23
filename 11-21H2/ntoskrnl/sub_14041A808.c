/*
 * XREFs of sub_14041A808 @ 0x14041A808
 * Callers:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_14041A808()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE2180, (__int64)&off_1400C9FE8);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE2178, 0x2EE9E2Cu, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_1400148C0, v1);
  return v1;
}
