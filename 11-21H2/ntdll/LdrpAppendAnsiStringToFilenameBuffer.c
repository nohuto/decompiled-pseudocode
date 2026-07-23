/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x18000DDE0
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180043614 (LdrpLoadForwardedDll.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800D8B6C (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800E0E90 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18000DE78 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x18000DEC0 (RtlxAnsiStringToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003D5E0 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(unsigned __int16 *a1, const ANSI_STRING *a2)
{
  int FileNameBufferIfNeeded; // edi
  int v5; // eax
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  FileNameBufferIfNeeded = 0;
  if ( a2->Length )
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
      RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
      *a1 += DestinationString.Length;
    }
  }
  return (unsigned int)FileNameBufferIfNeeded;
}
