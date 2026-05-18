/*
 * XREFs of sub_18002B740 @ 0x18002B740
 * Callers:
 *     sub_18002A630 @ 0x18002A630 (sub_18002A630.c)
 *     sub_180049490 @ 0x180049490 (sub_180049490.c)
 *     sub_18004DFA0 @ 0x18004DFA0 (sub_18004DFA0.c)
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     sub_18005D0C0 @ 0x18005D0C0 (sub_18005D0C0.c)
 *     sub_18007A4B0 @ 0x18007A4B0 (sub_18007A4B0.c)
 *     sub_180096500 @ 0x180096500 (sub_180096500.c)
 *     sub_180096CD8 @ 0x180096CD8 (sub_180096CD8.c)
 *     sub_180099870 @ 0x180099870 (sub_180099870.c)
 *     sub_18009ADA0 @ 0x18009ADA0 (sub_18009ADA0.c)
 * Callees:
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002B4A0 @ 0x18002B4A0 (sub_18002B4A0.c)
 */

_BYTE *__fastcall sub_18002B740(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  _BYTE *result; // rax

  v2 = sub_180028544(*a2);
  result = (_BYTE *)sub_18002B4A0((__int64 *)(v3 + 80), v2);
  *result = 0;
  return result;
}
