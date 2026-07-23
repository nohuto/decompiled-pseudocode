/*
 * XREFs of RtlpResetDriveEnvironment @ 0x180057B04
 * Callers:
 *     RtlpCheckRelativeDrive @ 0x180057918 (RtlpCheckRelativeDrive.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007B7A8 (RtlpReferenceCurrentDirectory.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlSetEnvironmentVariable @ 0x180058F90 (RtlSetEnvironmentVariable.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpResetDriveEnvironment(WCHAR a1)
{
  _UNICODE_STRING Value; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  WCHAR SourceString[2]; // [rsp+40h] [rbp-20h] BYREF
  int v6; // [rsp+44h] [rbp-1Ch]
  WCHAR v7; // [rsp+48h] [rbp-18h] BYREF
  int v8; // [rsp+4Ah] [rbp-16h]
  __int16 v9; // [rsp+4Eh] [rbp-12h]

  SourceString[1] = a1;
  v6 = 58;
  SourceString[0] = 61;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v7 = a1;
  v8 = 6029370;
  v9 = 0;
  RtlInitUnicodeString(&Value, &v7);
  return RtlSetEnvironmentVariable(0LL, &DestinationString, &Value);
}
