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

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  CHAR v1; // cl

  RtlpIsUtf8Process();
  if ( (unsigned __int8)(v1 - 97) <= 0x19u )
    return v1 ^ 0x20;
  return v1;
}
