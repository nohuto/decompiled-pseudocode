/*
 * XREFs of MiNodeHasFreeOrZeroPages @ 0x14064DFBC
 * Callers:
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeHasFreeOrZeroPages(_QWORD *a1, int a2)
{
  unsigned int v2; // eax

  if ( !a1[a2 + 2846] )
  {
    v2 = 0;
    while ( !*a1 && !a1[1] )
    {
      ++v2;
      a1 += 134;
      if ( v2 >= 3 )
        return 0LL;
    }
  }
  return 1LL;
}
