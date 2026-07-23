/*
 * XREFs of sub_1405EF8CC @ 0x1405EF8CC
 * Callers:
 *     sub_140976790 @ 0x140976790 (sub_140976790.c)
 *     sub_1409C02BC @ 0x1409C02BC (sub_1409C02BC.c)
 *     sub_1409C04B8 @ 0x1409C04B8 (sub_1409C04B8.c)
 *     sub_1409C0744 @ 0x1409C0744 (sub_1409C0744.c)
 *     sub_1409C0794 @ 0x1409C0794 (sub_1409C0794.c)
 *     sub_140A6BF28 @ 0x140A6BF28 (sub_140A6BF28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EF8CC(_DWORD *a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( *a1 >= 3u )
    return (unsigned int)(a1[6] + 2);
  return result;
}
