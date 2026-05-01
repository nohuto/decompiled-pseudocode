/*
 * XREFs of ?FailForceReturn@@YAHJ@Z @ 0x18079A924
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x18079B45C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FailForceReturn(int a1)
{
  if ( a1 > -2147024672 )
  {
    if ( a1 != -2147024542
      && a1 != -2147023696
      && a1 != -2147023693
      && a1 != -2147023673
      && a1 != -2147023652
      && a1 != -2147023624
      && a1 != -2147021872 )
    {
      return a1 == -2144927486;
    }
  }
  else if ( a1 != -2147024672
         && a1 != -2147221008
         && a1 != -2147024894
         && a1 != -2147024893
         && a1 != -2147024891
         && a1 != -2147024882
         && a1 != -2147024881
         && a1 != -2147024843
         && a1 != -2147024829 )
  {
    return 0LL;
  }
  return 1LL;
}
