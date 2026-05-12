/*
 * XREFs of sub_1C00100E0 @ 0x1C00100E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00100E0(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 < a2 )
    return 0xFFFFFFFFLL;
  else
    return a1 != a2;
}
