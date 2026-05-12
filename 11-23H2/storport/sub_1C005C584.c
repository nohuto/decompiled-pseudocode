/*
 * XREFs of sub_1C005C584 @ 0x1C005C584
 * Callers:
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 * Callees:
 *     sub_1C00207BC @ 0x1C00207BC (sub_1C00207BC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1C005C584(PUNICODE_STRING DeviceName, unsigned int *a2)
{
  unsigned int v2; // edi
  __int64 i; // r9
  unsigned int v6; // ebx
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-69h] BYREF
  WCHAR SourceString[64]; // [rsp+30h] [rbp-59h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  for ( i = 0LL; ; i = v2 )
  {
    sub_1C00207BC(
      SourceString,
      64LL,
      L"\\Device\\ScsiPort%d",
      i,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = IoCreateSymbolicLink(&DestinationString, DeviceName);
    if ( !v6 )
      break;
    if ( v6 != -1073741771 )
      return v6;
    ++v2;
  }
  sub_1C00207BC(SourceString, 64LL, L"\\DosDevices\\Scsi%d:", v2);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoCreateSymbolicLink(&DestinationString, DeviceName);
  ConfigurationInformation = IoGetConfigurationInformation();
  ++ConfigurationInformation->ScsiPortCount;
  if ( a2 )
    *a2 = v2;
  return v6;
}
