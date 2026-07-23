/*
 * XREFs of sub_1405A6A10 @ 0x1405A6A10
 * Callers:
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1405A6A10(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( (dword_140D06880 & 0x2000000) != 0 )
    return (*a1 & 0x42) == 64;
  return result;
}
