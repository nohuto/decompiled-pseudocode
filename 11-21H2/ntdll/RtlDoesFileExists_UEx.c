/*
 * XREFs of RtlDoesFileExists_UEx @ 0x180063E54
 * Callers:
 *     RtlDosSearchPath_U @ 0x1800606F0 (RtlDosSearchPath_U.c)
 *     RtlDoesFileExists_U @ 0x180061E30 (RtlDoesFileExists_U.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180062EC0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180063C14 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpCheckDeviceName @ 0x18009184C (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlDoesFileExists_UstrEx @ 0x180044304 (RtlDoesFileExists_UstrEx.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(__int64 a1, char a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  return (int)RtlInitUnicodeStringEx((__int64)v4, a1) >= 0 && RtlDoesFileExists_UstrEx((int)v4, a2);
}
