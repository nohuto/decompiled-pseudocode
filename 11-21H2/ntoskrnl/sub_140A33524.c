/*
 * XREFs of sub_140A33524 @ 0x140A33524
 * Callers:
 *     sub_140A33600 @ 0x140A33600 (sub_140A33600.c)
 *     sub_140A33AD0 @ 0x140A33AD0 (sub_140A33AD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A33524(int a1, int a2, int a3)
{
  signed __int64 v3; // r9
  int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r9

  v3 = a2 * a1;
  if ( a3 >= 0 )
  {
    if ( a3 > 0 )
    {
      v6 = (unsigned int)a3;
      do
      {
        v7 = (__int64)((unsigned __int128)(v3 * (__int128)0x6666666666666667LL) >> 64) >> 2;
        v3 = (v7 >> 63) + v7;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v4 = -a3;
    if ( v4 > 0 )
    {
      v5 = (unsigned int)v4;
      do
      {
        LODWORD(v3) = 10 * v3;
        --v5;
      }
      while ( v5 );
    }
  }
  return (unsigned int)v3;
}
