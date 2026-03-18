/*
 * XREFs of RtlUpperChar @ 0x1406D84E0
 * Callers:
 *     RtlEqualString @ 0x14034C590 (RtlEqualString.c)
 *     RtlCompareString @ 0x1406D7DE0 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1407C3450 (RtlPrefixString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406DA530 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0LL);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
