/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x180018FD4
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180018DF0 (LdrpLoadForwardedDll.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800D882C (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800E09C4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180018AC4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x180018B10 (RtlxAnsiStringToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024EF0 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(unsigned __int16 *a1, PCSTR *a2)
{
  int FileNameBufferIfNeeded; // edi
  int v5; // eax
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  FileNameBufferIfNeeded = 0;
  if ( *(_WORD *)a2 )
  {
    v5 = RtlxAnsiStringToUnicodeSize(a2);
    FileNameBufferIfNeeded = LdrpAllocateFileNameBufferIfNeeded(a1, (unsigned int)*a1 + v5);
    if ( FileNameBufferIfNeeded >= 0 )
    {
      v6 = *a1;
      v7 = *a1;
      DestinationString.Length = 0;
      DestinationString.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + v7);
      DestinationString.MaximumLength = a1[1] - v6;
      RtlAnsiStringToUnicodeString(&DestinationString, (PCANSI_STRING)a2, 0);
      *a1 += DestinationString.Length;
    }
  }
  return (unsigned int)FileNameBufferIfNeeded;
}
