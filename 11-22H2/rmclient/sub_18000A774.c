/*
 * XREFs of sub_18000A774 @ 0x18000A774
 * Callers:
 *     sub_180018190 @ 0x180018190 (sub_180018190.c)
 * Callees:
 *     sub_18000F66C @ 0x18000F66C (sub_18000F66C.c)
 */

__int64 __fastcall sub_18000A774(_BYTE *a1)
{
  if ( !(unsigned __int8)sub_18000F66C() )
    return sub_18000CF64(a1);
  *a1 = 0;
  return sub_18000F974(a1);
}
