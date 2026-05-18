/*
 * XREFs of sub_18002BAAC @ 0x18002BAAC
 * Callers:
 *     sub_18002A630 @ 0x18002A630 (sub_18002A630.c)
 *     sub_180049490 @ 0x180049490 (sub_180049490.c)
 *     sub_18004DFA0 @ 0x18004DFA0 (sub_18004DFA0.c)
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     sub_18005D0C0 @ 0x18005D0C0 (sub_18005D0C0.c)
 *     sub_18007A4B0 @ 0x18007A4B0 (sub_18007A4B0.c)
 *     sub_180096500 @ 0x180096500 (sub_180096500.c)
 *     sub_180096CD8 @ 0x180096CD8 (sub_180096CD8.c)
 *     sub_18009746C @ 0x18009746C (sub_18009746C.c)
 * Callees:
 *     sub_18002B4A0 @ 0x18002B4A0 (sub_18002B4A0.c)
 */

_BYTE *__fastcall sub_18002BAAC(__int64 a1, unsigned int a2)
{
  _BYTE *result; // rax

  result = (_BYTE *)sub_18002B4A0((__int64 *)(a1 + 80), a2);
  *result = 1;
  return result;
}
