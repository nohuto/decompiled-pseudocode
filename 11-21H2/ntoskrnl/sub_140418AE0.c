/*
 * XREFs of sub_140418AE0 @ 0x140418AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140418AE0(__int64 a1, __int16 a2, char a3)
{
  if ( a3 == 1 )
  {
    if ( ((a2 - 35) & 0xFFF7) != 0 )
      return a1 << 16 >> 16;
    else
      return (unsigned int)a1;
  }
  return a1;
}
