/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x14031D148
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x14077E5E0 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventHandleRegistration @ 0x14077F88C (PiUEventHandleRegistration.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140783734 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1408725A0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1406D9460 (RtlHashUnicodeString.c)
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
