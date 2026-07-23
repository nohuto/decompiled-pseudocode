/*
 * XREFs of sub_140841E14 @ 0x140841E14
 * Callers:
 *     sub_140841B4C @ 0x140841B4C (sub_140841B4C.c)
 *     sub_140A18AA0 @ 0x140A18AA0 (sub_140A18AA0.c)
 *     sub_140A18FB4 @ 0x140A18FB4 (sub_140A18FB4.c)
 *     sub_140A19614 @ 0x140A19614 (sub_140A19614.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140841E14(_WORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 i; // rax
  unsigned __int16 v3; // r9
  unsigned __int64 v4; // r8

  if ( !a1 )
    return 3221225485LL;
  if ( *a1 )
  {
    v1 = -1LL;
    do
      ++v1;
    while ( a1[v1] );
    for ( i = 0LL; i < v1; ++i )
    {
      v3 = a1[i];
      v4 = 0LL;
      while ( v3 < *(_WORD *)((char *)qword_140025B28 + v4) || v3 > *(_WORD *)((char *)qword_140025B28 + v4 + 2) )
      {
        v4 += 4LL;
        if ( v4 >= 0x14 )
        {
          a1[i] = 64;
          break;
        }
      }
    }
  }
  return 0LL;
}
