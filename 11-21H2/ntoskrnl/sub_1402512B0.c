/*
 * XREFs of sub_1402512B0 @ 0x1402512B0
 * Callers:
 *     sub_140251260 @ 0x140251260 (sub_140251260.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402512B0(_RTL_AVL_TABLE *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10

  v3 = *a2;
  v4 = *a3;
  if ( *a2 < *a3 )
  {
    return v4 < v3 + a2[1] ? 2u : 0;
  }
  else if ( *a2 == *a3 )
  {
    return 2;
  }
  else
  {
    return (unsigned int)((v3 < v4 + a3[1]) + 1);
  }
}
