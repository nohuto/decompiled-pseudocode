/*
 * XREFs of sub_14022CF58 @ 0x14022CF58
 * Callers:
 *     sub_1406A4140 @ 0x1406A4140 (sub_1406A4140.c)
 * Callees:
 *     sub_14022CF78 @ 0x14022CF78 (sub_14022CF78.c)
 */

__int64 __fastcall sub_14022CF58(__int64 a1)
{
  return *(_DWORD *)(sub_14022CF78(a1) + 48) & 0x3FFFFFFF;
}
