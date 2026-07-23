/*
 * XREFs of _wtol @ 0x1403D9FB0
 * Callers:
 *     _wtoi @ 0x1403D9F90 (_wtoi.c)
 *     PfSnParsePrefetchParam @ 0x1407C2AE0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     wcstolX @ 0x1403DC09C (wcstolX.c)
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
