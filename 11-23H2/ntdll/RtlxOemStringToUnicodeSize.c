/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x180058F40
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x180058E70 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180018B40 (RtlMultiByteToUnicodeSize.c)
 */

__int64 RtlxOemStringToUnicodeSize()
{
  int v1; // [rsp+30h] [rbp+8h]

  RtlMultiByteToUnicodeSize();
  return (unsigned int)(v1 + 2);
}
