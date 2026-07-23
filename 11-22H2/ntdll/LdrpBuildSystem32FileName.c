/*
 * XREFs of LdrpBuildSystem32FileName @ 0x1800793C4
 * Callers:
 *     LdrpInitShimEngine @ 0x180079158 (LdrpInitShimEngine.c)
 *     LdrpCorInitialize @ 0x18008DA54 (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DD2D4 (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x180018A20 (RtlGetNtSystemRoot.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019D38 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 */

__int64 __fastcall LdrpBuildSystem32FileName(unsigned __int16 *a1, const void **a2)
{
  unsigned int v2; // ebx
  const WCHAR *NtSystemRoot; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *a1 = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeString(&DestinationString, NtSystemRoot);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, (const void **)&DestinationString);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, (const void **)&SlashSystem32SlashString);
  if ( a2 )
    return (unsigned int)LdrpAppendUnicodeStringToFilenameBuffer(a1, a2);
  return v2;
}
