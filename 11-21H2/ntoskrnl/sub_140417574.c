/*
 * XREFs of sub_140417574 @ 0x140417574
 * Callers:
 *     sub_1402881A0 @ 0x1402881A0 (sub_1402881A0.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_140417574()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE1FD0, (__int64)&off_1400C9E98);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE1FD8, 0x2EE5DB8u, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_140014AA8, v1);
  return v1;
}
