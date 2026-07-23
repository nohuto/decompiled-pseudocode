/*
 * XREFs of sub_140864B00 @ 0x140864B00
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 */

__int64 sub_140864B00()
{
  MEMORY[0xFFFFF7800000037C] = 1;
  qword_140C15D90 = 0LL;
  return sub_1406D2264((char *)&dword_140C04418, (__int64)sub_140861D70, 0LL);
}
