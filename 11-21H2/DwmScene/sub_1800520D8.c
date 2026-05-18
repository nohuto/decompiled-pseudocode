/*
 * XREFs of sub_1800520D8 @ 0x1800520D8
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800520D8(unsigned __int64 a1)
{
  bool result; // al

  result = 1;
  if ( a1 < 0x20 )
    return ((1 << a1) & dword_1801F4B58) != 0;
  return result;
}
