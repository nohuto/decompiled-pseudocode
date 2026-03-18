/*
 * XREFs of ExpCapabilityCheck @ 0x1409FBA34
 * Callers:
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC7E4 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x1407ECD50 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(UNICODE_STRING *String2)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, String2, &v2) >= 0 && v2 != 0;
}
