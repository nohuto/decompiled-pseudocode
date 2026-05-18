/*
 * XREFs of sub_18004B9C4 @ 0x18004B9C4
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18004B9C4(unsigned __int64 a1)
{
  bool result; // al

  result = 1;
  if ( a1 < 0x20 )
    return ((1 << a1) & dword_1801D2B78) != 0;
  return result;
}
