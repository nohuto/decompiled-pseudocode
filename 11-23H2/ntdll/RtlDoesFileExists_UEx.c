/*
 * XREFs of RtlDoesFileExists_UEx @ 0x18000951C
 * Callers:
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18000ADC8 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlDosSearchPath_U @ 0x1800790A0 (RtlDosSearchPath_U.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180083BA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlDoesFileExists_U @ 0x1800898A0 (RtlDoesFileExists_U.c)
 *     RtlpCheckDeviceName @ 0x18008C1FC (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001E0B8 (RtlDoesFileExists_UstrEx.c)
 */

char __fastcall RtlDoesFileExists_UEx(PCWSTR SourceString, char a2)
{
  __int64 v3; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  LOBYTE(v3) = a2;
  return RtlDoesFileExists_UstrEx(&DestinationString, v3);
}
