/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x18000DEC0
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18000DDE0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x18000DEF0 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxAnsiStringToUnicodeSize(PCSTR *a1)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, a1[1], *(unsigned __int16 *)a1);
  return BytesInUnicodeString + 2;
}
