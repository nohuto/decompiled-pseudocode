/*
 * XREFs of sub_1405FEE84 @ 0x1405FEE84
 * Callers:
 *     sub_1405FE9EC @ 0x1405FE9EC (sub_1405FE9EC.c)
 *     sub_1405FEC4C @ 0x1405FEC4C (sub_1405FEC4C.c)
 *     sub_1405FECBC @ 0x1405FECBC (sub_1405FECBC.c)
 * Callees:
 *     <none>
 */

char **__fastcall sub_1405FEE84(int a1)
{
  char **result; // rax

  result = &off_140D4E250;
  while ( *((_DWORD *)result + 7) != a1 )
  {
    result += 4;
    if ( !*result )
      return 0LL;
  }
  return result;
}
