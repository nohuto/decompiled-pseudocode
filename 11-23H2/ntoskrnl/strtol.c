/*
 * XREFs of strtol @ 0x1403D8FB8
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1405AF440 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1403D8D90 (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
