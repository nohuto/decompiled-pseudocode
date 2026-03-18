/*
 * XREFs of _atoi64 @ 0x1403D8BD0
 * Callers:
 *     KiMatchLoadOption @ 0x140A902C0 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x1403D8B0C (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
