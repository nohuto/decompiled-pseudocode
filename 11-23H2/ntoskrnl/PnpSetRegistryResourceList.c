/*
 * XREFs of PnpSetRegistryResourceList @ 0x1409584FC
 * Callers:
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14041B960 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041C900 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x1407901CC (PnpDetermineResourceListSize.c)
 */

NTSTATUS __fastcall PnpSetRegistryResourceList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"BootConfig");
  if ( !a3 )
    return ZwDeleteValueKey(KeyHandle, &DestinationString);
  DataSize = PnpDetermineResourceListSize(a3);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 8u, a3, DataSize);
}
