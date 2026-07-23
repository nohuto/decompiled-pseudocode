/*
 * XREFs of PopValidateContextMembership @ 0x1407EBDEC
 * Callers:
 *     PopGetSettingNotificationName @ 0x140783270 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140370230 (RtlCheckTokenMembership.c)
 */

NTSTATUS __fastcall PopValidateContextMembership(PSID SidToCheck)
{
  NTSTATUS result; // eax
  BOOLEAN IsMember; // [rsp+38h] [rbp+10h] BYREF

  IsMember = 0;
  result = RtlCheckTokenMembership(0LL, SidToCheck, &IsMember);
  if ( result < 0 || !IsMember )
    return -1073741790;
  return result;
}
