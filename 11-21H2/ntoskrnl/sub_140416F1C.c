/*
 * XREFs of sub_140416F1C @ 0x140416F1C
 * Callers:
 *     sub_1406DBDA0 @ 0x1406DBDA0 (sub_1406DBDA0.c)
 *     sub_140AF2E9C @ 0x140AF2E9C (sub_140AF2E9C.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_140416F1C()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE1BC0, (__int64)&off_1400C9DD8);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE1BC8, 0x30A2903u, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_1400148C0, v1);
  return v1;
}
