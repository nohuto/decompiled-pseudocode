/*
 * XREFs of sub_1C0024728 @ 0x1C0024728
 * Callers:
 *     sub_1C00AC730 @ 0x1C00AC730 (sub_1C00AC730.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0024728(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // eax

  v3 = 0;
  if ( a2 )
  {
    while ( *a1 )
    {
      if ( *a1 == a3 )
        return 1;
      ++v3;
      ++a1;
      if ( v3 >= a2 )
        return 0;
    }
  }
  return 0;
}
