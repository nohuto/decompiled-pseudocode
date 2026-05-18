/*
 * XREFs of sub_18001B544 @ 0x18001B544
 * Callers:
 *     sub_1800176E8 @ 0x1800176E8 (sub_1800176E8.c)
 *     sub_18004D538 @ 0x18004D538 (sub_18004D538.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001B544(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  return sub_18001B57C();
}
