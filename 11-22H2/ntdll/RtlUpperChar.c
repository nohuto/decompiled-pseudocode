/*
 * XREFs of RtlUpperChar @ 0x180082FA0
 * Callers:
 *     RtlPrefixString @ 0x180082E60 (RtlPrefixString.c)
 *     RtlEqualString @ 0x180082F00 (RtlEqualString.c)
 *     RtlCompareString @ 0x18008D400 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800F6200 (RtlUpperString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 */

char RtlUpperChar()
{
  char v0; // cl

  RtlpIsUtf8Process();
  if ( (unsigned __int8)(v0 - 97) <= 0x19u )
    return v0 ^ 0x20;
  return v0;
}
