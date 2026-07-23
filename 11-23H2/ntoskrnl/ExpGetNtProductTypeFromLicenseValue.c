/*
 * XREFs of ExpGetNtProductTypeFromLicenseValue @ 0x14084D578
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140B67484 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     NtQueryLicenseValue @ 0x1407AF180 (NtQueryLicenseValue.c)
 */

char __fastcall ExpGetNtProductTypeFromLicenseValue(_DWORD *a1)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG Type; // [rsp+58h] [rbp+18h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+20h] BYREF
  int Data; // [rsp+68h] [rbp+28h] BYREF

  Type = 0;
  ResultDataSize = 0;
  Data = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ProductType");
  if ( NtQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) < 0
    || Type != 4
    || ResultDataSize != 4
    || Data != 1 && (unsigned int)(Data - 2) >= 2 )
  {
    return 0;
  }
  *a1 = Data;
  return 1;
}
