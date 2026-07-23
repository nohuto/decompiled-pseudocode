/*
 * XREFs of sub_1409FB924 @ 0x1409FB924
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1409FC784 @ 0x1409FC784 (sub_1409FC784.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 */

bool __fastcall sub_1409FB924(PUNICODE_STRING CapabilityName)
{
  BOOLEAN HasCapability; // [rsp+38h] [rbp+10h] BYREF

  HasCapability = 0;
  return RtlCapabilityCheck(0LL, CapabilityName, &HasCapability) >= 0 && HasCapability;
}
