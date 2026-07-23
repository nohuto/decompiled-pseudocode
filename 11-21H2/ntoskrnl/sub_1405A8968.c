/*
 * XREFs of sub_1405A8968 @ 0x1405A8968
 * Callers:
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_14097A358 @ 0x14097A358 (sub_14097A358.c)
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 * Callees:
 *     sub_14028EDD0 @ 0x14028EDD0 (sub_14028EDD0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 */

__int64 __fastcall sub_1405A8968(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // di
  __int64 v9; // rbx

  v8 = sub_1402CF4F0(a4);
  v9 = sub_14028EDD0(a1, a2, a3, v8, 0, 0LL, 0LL);
  sub_1402B0CE0(a4, v8);
  return v9;
}
