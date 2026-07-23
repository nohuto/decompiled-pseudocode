/*
 * XREFs of sub_14056F694 @ 0x14056F694
 * Callers:
 *     sub_1402F3FE0 @ 0x1402F3FE0 (sub_1402F3FE0.c)
 *     sub_1403AD034 @ 0x1403AD034 (sub_1403AD034.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14056F694(int a1)
{
  if ( byte_140D0688A )
    return 0;
  if ( byte_140E01840 )
  {
    if ( !a1 || a1 == 2 )
      return 0;
  }
  else if ( a1 && a1 <= 2 )
  {
    return 0;
  }
  return 1;
}
