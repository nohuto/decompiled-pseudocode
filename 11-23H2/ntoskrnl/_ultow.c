/*
 * XREFs of _ultow @ 0x1403D9440
 * Callers:
 *     AdtpBuildUlongString @ 0x140A5B5EC (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1403D9464 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
