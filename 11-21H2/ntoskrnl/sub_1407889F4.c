/*
 * XREFs of sub_1407889F4 @ 0x1407889F4
 * Callers:
 *     sub_1406D04CC @ 0x1406D04CC (sub_1406D04CC.c)
 *     sub_140785B98 @ 0x140785B98 (sub_140785B98.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407889F4(_WORD *a1)
{
  unsigned int v1; // edx
  _WORD *i; // rax
  __int64 v3; // r8

  v1 = 0;
  if ( a1 )
  {
    for ( i = a1; *i; i += v3 + 1 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( i[v3] );
    }
    return (unsigned int)(i - a1) + 1;
  }
  return v1;
}
