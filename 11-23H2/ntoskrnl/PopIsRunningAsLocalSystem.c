/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x1407EBA38
 * Callers:
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140370090 (RtlCheckTokenMembership.c)
 */

char PopIsRunningAsLocalSystem()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  RtlCheckTokenMembership(0LL, SeLocalSystemSid, &v1);
  return v1;
}
