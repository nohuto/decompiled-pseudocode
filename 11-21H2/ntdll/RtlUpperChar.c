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

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  CHAR v1; // cl

  RtlpIsUtf8Process(Character);
  if ( (unsigned __int8)(v1 - 97) <= 0x19u )
    return v1 ^ 0x20;
  return v1;
}
