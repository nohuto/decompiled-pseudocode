/*
 * XREFs of ??$sprintf_s@$0IEA@@@YAHAEAY0IEA@DPEBDZZ @ 0x18001CEB0
 * Callers:
 *     ?Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z @ 0x18001D938 (-Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z.c)
 * Callees:
 *     vsprintf_s @ 0x18000C184 (vsprintf_s.c)
 */

int sprintf_s<2112>(char *a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vsprintf_s(a1, 0x840uLL, a2, va);
}
