/*
 * XREFs of sub_14041718C @ 0x14041718C
 * Callers:
 *     sub_140389670 @ 0x140389670 (sub_140389670.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_14041718C()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE1C00, (__int64)&off_1400C9E68);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE1BF8, 0x315BB42u, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_1400148C0, v1);
  return v1;
}
