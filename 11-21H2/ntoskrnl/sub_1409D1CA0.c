/*
 * XREFs of sub_1409D1CA0 @ 0x1409D1CA0
 * Callers:
 *     sub_1409D0588 @ 0x1409D0588 (sub_1409D0588.c)
 *     sub_1409D23E8 @ 0x1409D23E8 (sub_1409D23E8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409D1CA0(unsigned __int16 a1)
{
  char result; // al
  int v2; // r8d
  const wchar_t *i; // rdx

  result = 1;
  if ( a1 < 0x7Fu )
  {
    v2 = 0;
    for ( i = L" !\"&)(<>=|"; *i != a1; ++i )
    {
      if ( (unsigned int)++v2 >= 0xA )
        return result;
    }
    return 0;
  }
  return result;
}
