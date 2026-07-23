/*
 * XREFs of sub_14042C070 @ 0x14042C070
 * Callers:
 *     sub_14042BEF0 @ 0x14042BEF0 (sub_14042BEF0.c)
 *     sub_14042C090 @ 0x14042C090 (sub_14042C090.c)
 * Callees:
 *     sub_14042C130 @ 0x14042C130 (sub_14042C130.c)
 */

__int64 __fastcall sub_14042C070(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    sub_14042C130();
  return *a2;
}
