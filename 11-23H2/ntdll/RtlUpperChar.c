/*
 * XREFs of RtlUpperChar @ 0x180083610
 * Callers:
 *     RtlPrefixString @ 0x1800834D0 (RtlPrefixString.c)
 *     RtlEqualString @ 0x180083570 (RtlEqualString.c)
 *     RtlCompareString @ 0x18008DC00 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800F7610 (RtlUpperString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018DC4 (RtlpIsUtf8Process.c)
 */

char RtlUpperChar()
{
  char v0; // cl

  RtlpIsUtf8Process();
  if ( (unsigned __int8)(v0 - 97) <= 0x19u )
    return v0 ^ 0x20;
  return v0;
}
