/*
 * XREFs of ??$sprintf_s@$0BAA@@@YAHAEAY0BAA@DPEBDZZ @ 0x18001CE80
 * Callers:
 *     _anonymous_namespace_::GetTimeString @ 0x18001D6C8 (_anonymous_namespace_--GetTimeString.c)
 * Callees:
 *     vsprintf_s @ 0x18000C184 (vsprintf_s.c)
 */

int sprintf_s<256>(char *a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vsprintf_s(a1, 0x100uLL, a2, va);
}
