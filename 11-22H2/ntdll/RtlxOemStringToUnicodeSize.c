/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1800590A0
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x180058FD0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180018D50 (RtlMultiByteToUnicodeSize.c)
 */

__int64 RtlxOemStringToUnicodeSize()
{
  int v1; // [rsp+30h] [rbp+8h]

  RtlMultiByteToUnicodeSize();
  return (unsigned int)(v1 + 2);
}
