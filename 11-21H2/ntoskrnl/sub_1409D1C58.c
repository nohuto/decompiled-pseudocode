/*
 * XREFs of sub_1409D1C58 @ 0x1409D1C58
 * Callers:
 *     sub_1409D01AC @ 0x1409D01AC (sub_1409D01AC.c)
 *     sub_1409D0420 @ 0x1409D0420 (sub_1409D0420.c)
 * Callees:
 *     iswalnum @ 0x1403E1BB0 (iswalnum.c)
 */

char __fastcall sub_1409D1C58(wint_t a1)
{
  char result; // al
  const wchar_t *v3; // rcx
  unsigned int v4; // edx

  result = 1;
  if ( a1 < 0x7Fu )
  {
    if ( !iswalnum(a1) )
    {
      result = 1;
      v3 = L"#$'*+-./:;?@[\\]^_`{}~";
      v4 = 0;
      while ( *v3 != a1 )
      {
        ++v4;
        ++v3;
        if ( v4 >= 0x15 )
          return result;
      }
    }
    return 0;
  }
  return result;
}
