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

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  CHAR v1; // cl

  RtlpIsUtf8Process();
  if ( (unsigned __int8)(v1 - 97) <= 0x19u )
    return v1 ^ 0x20;
  return v1;
}
