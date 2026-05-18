/*
 * XREFs of sub_18000E55C @ 0x18000E55C
 * Callers:
 *     sub_18000CB44 @ 0x18000CB44 (sub_18000CB44.c)
 *     sub_18000CBC8 @ 0x18000CBC8 (sub_18000CBC8.c)
 *     sub_18000CC70 @ 0x18000CC70 (sub_18000CC70.c)
 *     sub_18000CCD8 @ 0x18000CCD8 (sub_18000CCD8.c)
 *     sub_18000CD4C @ 0x18000CD4C (sub_18000CD4C.c)
 *     sub_18000E764 @ 0x18000E764 (sub_18000E764.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000E55C(int a1)
{
  unsigned int v1; // edx

  v1 = a1;
  if ( a1 > -2147024662 )
  {
    if ( a1 > -2147023746 )
    {
      switch ( a1 )
      {
        case -2147023604:
          return (unsigned int)-1073740757;
        case -2147023537:
          return (unsigned int)-1073741595;
        case -2147023431:
          return (unsigned int)-1073700733;
        case 0:
          return 0;
      }
    }
    else
    {
      switch ( a1 )
      {
        case -2147023746:
          return (unsigned int)-1073741735;
        case -2147024362:
          return (unsigned int)-1073741675;
        case -2147024322:
          return (unsigned int)-1073741787;
        case -2147024314:
          return (unsigned int)-1073741471;
        case -2147024313:
          return (unsigned int)-1073741469;
        case -2147024270:
          return (unsigned int)-1073741197;
      }
    }
  }
  else
  {
    if ( a1 == -2147024662 )
      return (unsigned int)-2147483643;
    if ( a1 > -2147024809 )
    {
      switch ( a1 )
      {
        case -2147024784:
          return (unsigned int)-1073741697;
        case -2147024774:
          return (unsigned int)-1073741789;
        case -2147024773:
          return (unsigned int)-1073741773;
        case -2147024770:
          return (unsigned int)-1073741515;
      }
    }
    else
    {
      switch ( a1 )
      {
        case -2147024809:
          return (unsigned int)-1073741811;
        case -2147467259:
          return (unsigned int)-1073741823;
        case -2147024895:
          return (unsigned int)-1073741822;
        case -2147024894:
          return (unsigned int)-1073741772;
        case -2147024893:
          return (unsigned int)-1073741766;
        case -2147024882:
          return (unsigned int)-1073741801;
      }
    }
  }
  if ( (a1 & 0x10000000) != 0 )
    return a1 & 0xEFFFFFFF;
  if ( (a1 & 0x1FFF0000) == 0x70000 )
  {
    v1 = (unsigned __int16)a1;
    if ( (_WORD)a1 )
      return (unsigned __int16)a1 | 0xC0070000;
    return v1;
  }
  if ( (a1 & 0x1FFF0000) != 0x90000 )
    return (unsigned int)-1073741595;
  if ( a1 > 0 )
    return (unsigned __int16)a1 | 0xC0090000;
  return v1;
}
