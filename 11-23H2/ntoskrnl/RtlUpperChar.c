/*
 * XREFs of RtlUpperChar @ 0x1406D8510
 * Callers:
 *     RtlEqualString @ 0x14034C730 (RtlEqualString.c)
 *     RtlCompareString @ 0x1406D7E10 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1407C3720 (RtlPrefixString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406DA560 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
