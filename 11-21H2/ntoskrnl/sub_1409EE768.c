/*
 * XREFs of sub_1409EE768 @ 0x1409EE768
 * Callers:
 *     sub_1409F3EC0 @ 0x1409F3EC0 (sub_1409F3EC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409EE768(unsigned int *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r10d
  unsigned int v6; // edx

  v4 = *a1;
  v5 = 0;
  if ( !*a1 )
    v4 = a2;
  v6 = v4;
  if ( v4 < a3 )
    v6 = a3;
  LOBYTE(v5) = v4 < a3;
  if ( v6 > a4 )
  {
    v5 = 1;
    v6 = a4;
  }
  *a1 = v6;
  return v5;
}
