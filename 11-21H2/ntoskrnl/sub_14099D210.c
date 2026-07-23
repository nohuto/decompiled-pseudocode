/*
 * XREFs of sub_14099D210 @ 0x14099D210
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x14041D8C0 (ZwLoadDriver.c)
 */

NTSTATUS sub_14099D210()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CAD");
  return ZwLoadDriver(&DestinationString);
}
