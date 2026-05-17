/*
 * XREFs of LdrpBuildSystem32FileName @ 0x180079A34
 * Callers:
 *     LdrpInitShimEngine @ 0x1800797C8 (LdrpInitShimEngine.c)
 *     LdrpCorInitialize @ 0x18008E254 (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DCC84 (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x180018810 (RtlGetNtSystemRoot.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019B28 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 */

__int64 __fastcall LdrpBuildSystem32FileName(unsigned __int16 *a1, const void **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  const WCHAR *NtSystemRoot; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  *a1 = 0;
  NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot((__int64)a1, (__int64)a2, a3, a4);
  RtlInitUnicodeString(&DestinationString, NtSystemRoot);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, (const void **)&DestinationString);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &SlashSystem32SlashString);
  if ( a2 )
    return (unsigned int)LdrpAppendUnicodeStringToFilenameBuffer(a1, a2);
  return v4;
}
