/*
 * XREFs of sub_1406AF62C @ 0x1406AF62C
 * Callers:
 *     sub_1406AF268 @ 0x1406AF268 (sub_1406AF268.c)
 *     sub_1406AF34C @ 0x1406AF34C (sub_1406AF34C.c)
 *     sub_1406AF5A0 @ 0x1406AF5A0 (sub_1406AF5A0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1406AF62C(unsigned int *a1, unsigned int a2, int a3, int a4, int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // edx

  if ( a2 < *a1 )
    return 0;
  v5 = a1[1];
  if ( a2 >= v5 )
  {
    if ( a3 )
      return 0;
  }
  v6 = a3 + a2;
  if ( v6 < *a1 || v6 > v5 || ((a4 - 1) & v6) != 0 )
    return 0;
  if ( a5 )
    *a1 = v6;
  return 1;
}
