/*
 * XREFs of LdrpBuildSystem32FileName @ 0x1800731B8
 * Callers:
 *     LdrpInitShimEngine @ 0x1800726D8 (LdrpInitShimEngine.c)
 *     LdrpCorInitialize @ 0x180072FF8 (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DCB54 (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180044FE8 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x1800509E0 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall LdrpBuildSystem32FileName(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  const WCHAR *NtSystemRoot; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *a1 = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeString(&DestinationString, NtSystemRoot);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &DestinationString.Length);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &SlashSystem32SlashString.Length);
  if ( a2 )
    return (unsigned int)LdrpAppendUnicodeStringToFilenameBuffer(a1, a2);
  return v2;
}
