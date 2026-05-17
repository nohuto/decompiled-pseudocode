/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x180018B10
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180018890 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180018FD4 (LdrpAppendAnsiStringToFilenameBuffer.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180018B40 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxAnsiStringToUnicodeSize(unsigned __int16 *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&v2, *((_QWORD *)a1 + 1), *a1);
  return (unsigned int)(v2 + 2);
}
