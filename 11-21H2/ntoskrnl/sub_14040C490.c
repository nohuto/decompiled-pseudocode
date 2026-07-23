/*
 * XREFs of sub_14040C490 @ 0x14040C490
 * Callers:
 *     <none>
 * Callees:
 *     sub_14040E690 @ 0x14040E690 (sub_14040E690.c)
 *     sub_14040EE40 @ 0x14040EE40 (sub_14040EE40.c)
 */

__int64 __fastcall sub_14040C490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  sub_14040E690(a2, a3, *(unsigned int *)(a1 + 4), a5);
  return sub_14040EE40(a1, a5, a4);
}
