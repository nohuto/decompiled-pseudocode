/*
 * XREFs of PopPowerRequestOverrideInitialize @ 0x140862EA4
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407A6C54 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14032CE88 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A6ED4 (PopAcquirePowerRequestPushLock.c)
 */

void PopPowerRequestOverrideInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  PVOID *i; // rbx

  PopAcquirePowerRequestPushLock(0);
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    if ( !*((_BYTE *)i + 152) )
      PopUmpoSendPowerRequestOverrideQuery((__int64)i, v0, v1, v2);
  }
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
