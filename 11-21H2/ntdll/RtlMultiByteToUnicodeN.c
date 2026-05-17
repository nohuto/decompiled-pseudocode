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

__int64 __fastcall RtlMultiByteToUnicodeN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r9
  int v8; // r10d
  __int16 *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(a1, a2, a3) )
  {
    v9 = (__int16 *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &GlobalRtlNlsState;
  }
  RtlCustomCPToUnicodeN((_DWORD)v9, v8, v5, v6, v7, a5);
  return 0LL;
}
