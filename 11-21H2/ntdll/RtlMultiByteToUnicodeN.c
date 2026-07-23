/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x18000DD40
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18000CED0 (RtlCreateEnvironmentEx.c)
 *     mbstowcs @ 0x180097A00 (mbstowcs.c)
 *     LdrpEtwLogLoaderSnaps @ 0x1800DAF24 (LdrpEtwLogLoaderSnaps.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800F0180 (RtlConsoleMultiByteToUnicodeN.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     RtlCustomCPToUnicodeN @ 0x18000E210 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __cdecl RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCSTR MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v5; // edx
  ULONG *v6; // r8
  CHAR *CustomCPString; // r9
  WCHAR *v8; // r10
  _CPTABLEINFO *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(UnicodeString) )
  {
    v9 = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &GlobalRtlNlsState;
  }
  RtlCustomCPToUnicodeN(v9, v8, v5, v6, CustomCPString, BytesInMultiByteString);
  return 0;
}
