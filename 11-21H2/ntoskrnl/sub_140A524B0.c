/*
 * XREFs of sub_140A524B0 @ 0x140A524B0
 * Callers:
 *     sub_140A523B0 @ 0x140A523B0 (sub_140A523B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A524B0(unsigned __int64 a1, unsigned __int64 a2)
{
  signed __int64 v3; // rdx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( a2 >= a1 || (v3 = (a1 - a2) / 0x989680, v3 < 30) )
  {
    LODWORD(v3) = 30;
  }
  else if ( v3 >= 0xFFFFFFFFLL )
  {
    LODWORD(v3) = -2;
  }
  return (unsigned int)v3;
}
