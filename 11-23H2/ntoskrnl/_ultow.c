/*
 * XREFs of _ultow @ 0x1403D9620
 * Callers:
 *     AdtpBuildUlongString @ 0x140A5B89C (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1403D9644 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
