/*
 * XREFs of iswdigit @ 0x1403DA1B0
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1407C2810 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403DC344 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
