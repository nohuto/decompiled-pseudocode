/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x1407EBD08
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140370230 (RtlCheckTokenMembership.c)
 */

BOOLEAN PopIsRunningAsLocalSystem()
{
  BOOLEAN IsMember; // [rsp+30h] [rbp+8h] BYREF

  IsMember = 0;
  RtlCheckTokenMembership(0LL, SeLocalSystemSid, &IsMember);
  return IsMember;
}
