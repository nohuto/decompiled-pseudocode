/*
 * XREFs of RtlpResetDriveEnvironment @ 0x18000B5E4
 * Callers:
 *     RtlpCheckRelativeDrive @ 0x18000B3FC (RtlpCheckRelativeDrive.c)
 *     RtlpReferenceCurrentDirectory @ 0x180080340 (RtlpReferenceCurrentDirectory.c)
 * Callees:
 *     RtlSetEnvironmentVariable @ 0x18000D0B0 (RtlSetEnvironmentVariable.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
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
