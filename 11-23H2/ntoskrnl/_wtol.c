/*
 * XREFs of _wtol @ 0x1403D9DD0
 * Callers:
 *     _wtoi @ 0x1403D9DB0 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x1407C2810 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403DBEBC (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
