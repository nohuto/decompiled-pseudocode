/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x14031CEB8
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E3F0 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventHandleRegistration @ 0x14077F69C (PiUEventHandleRegistration.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783544 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140872360 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1406D9430 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  HashValue = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
