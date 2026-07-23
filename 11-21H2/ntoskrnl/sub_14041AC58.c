/*
 * XREFs of sub_14041AC58 @ 0x14041AC58
 * Callers:
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1403DF3B0 @ 0x1403DF3B0 (sub_1403DF3B0.c)
 */

__int64 sub_14041AC58()
{
  unsigned int v0; // eax
  unsigned int v1; // ebx

  v0 = sub_1403DF3B0((unsigned int *)&unk_140CE21A0, (__int64)&off_1400CA018);
  v1 = (v0 >> 3) & 1;
  sub_1402D6B0C((__int64)&unk_140CE2198, 0x2FD67E4u, (v0 >> 8) & 1, (v0 >> 9) & 1, (__int64)&qword_140014AA8, v1);
  return v1;
}
