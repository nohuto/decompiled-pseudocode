/*
 * XREFs of _atoi64 @ 0x1403D9410
 * Callers:
 *     KiMatchLoadOption @ 0x140A90140 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x1403D934C (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
