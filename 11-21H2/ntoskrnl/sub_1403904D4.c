/*
 * XREFs of sub_1403904D4 @ 0x1403904D4
 * Callers:
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 * Callees:
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 */

__int64 __fastcall sub_1403904D4(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_140380C38(a1, a2, a3);
  if ( (int)result >= 0 )
    return sub_140381C90(a1, a3);
  return result;
}
