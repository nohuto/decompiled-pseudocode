/*
 * XREFs of iswdigit @ 0x1403DA390
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1407C2AE0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     iswctype @ 0x1403DC524 (iswctype.c)
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
