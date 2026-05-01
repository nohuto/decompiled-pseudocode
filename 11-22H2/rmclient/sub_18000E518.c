/*
 * XREFs of sub_18000E518 @ 0x18000E518
 * Callers:
 *     sub_18000CB9C @ 0x18000CB9C (sub_18000CB9C.c)
 *     sub_18000FDC4 @ 0x18000FDC4 (sub_18000FDC4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000E518(unsigned __int16 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    result = *a1;
  else
    result = a1[4] + 2LL;
  if ( *((_BYTE *)a1 + 2) == 1 )
  {
    result += 2LL;
  }
  else if ( *((_BYTE *)a1 + 2) == 2 )
  {
    result += 4LL;
  }
  return result;
}
