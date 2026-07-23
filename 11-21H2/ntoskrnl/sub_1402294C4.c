/*
 * XREFs of sub_1402294C4 @ 0x1402294C4
 * Callers:
 *     sub_140229100 @ 0x140229100 (sub_140229100.c)
 *     sub_140352A00 @ 0x140352A00 (sub_140352A00.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1402294C4(__int16 a1)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 )
    return (a1 & 0x3E0) != 0LL;
  return result;
}
