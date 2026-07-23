/*
 * XREFs of sub_14040CA80 @ 0x14040CA80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14040E880 @ 0x14040E880 (sub_14040E880.c)
 *     sub_14040EE40 @ 0x14040EE40 (sub_14040EE40.c)
 */

__int64 __fastcall sub_14040CA80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_14040E880(a2, *(unsigned int *)(a1 + 4), a4);
  return sub_14040EE40(a1, a4, a3);
}
