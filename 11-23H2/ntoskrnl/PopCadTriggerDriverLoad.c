/*
 * XREFs of PopCadTriggerDriverLoad @ 0x14099CBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x14041CEE0 (ZwLoadDriver.c)
 */

NTSTATUS PopCadTriggerDriverLoad()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CAD");
  return ZwLoadDriver(&DestinationString);
}
