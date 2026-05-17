/*
 * XREFs of RtlUpperChar @ 0x18000C350
 * Callers:
 *     RtlPrefixString @ 0x18000BEB0 (RtlPrefixString.c)
 *     RtlEqualString @ 0x18000BF50 (RtlEqualString.c)
 *     RtlCompareString @ 0x180092980 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800F65B0 (RtlUpperString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 */

char RtlUpperChar()
{
  char v0; // cl

  RtlpIsUtf8Process();
  if ( (unsigned __int8)(v0 - 97) <= 0x19u )
    return v0 ^ 0x20;
  return v0;
}
