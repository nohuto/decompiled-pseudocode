/*
 * XREFs of sub_140263154 @ 0x140263154
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall sub_140263154(__int64 a1)
{
  *(_WORD *)a1 = word_140D05070;
  *(_WORD *)(a1 + 2) = word_140D069A4;
  *(_WORD *)(a1 + 4) = word_140D06AA4;
  *(_WORD *)(a1 + 6) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 8) = qword_140D068D8;
  return 0LL;
}
