/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408563D4
 * Callers:
 *     PopUpdatePdcSystemIdleState @ 0x1407A750C (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408561F0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopWnfAudioCallback @ 0x1408562B0 (PopWnfAudioCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1409816C0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1409817B8 (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     PopPowerRequestUnrevokeRequests @ 0x1403AA5F0 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestRevokeRequests @ 0x140583C54 (PopPowerRequestRevokeRequests.c)
 */

void PopPowerRequestHandleExecutionEnablementUpdate()
{
  int v0; // ecx

  v0 = 8;
  if ( PopPowerRequestConvertSystemToExecution )
    v0 = 10;
  if ( PopExecutionRequiredTimeout
    && (!byte_140C3F693
     || PopPowerRequestActiveAudioEnablesExecutionRequired && byte_140C3F692
     || byte_140C3F691
     || MEMORY[0xFFFFF78000000008] - qword_140C3F698 < 10000000
                                                     * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout) )
  {
    PopPowerRequestUnrevokeRequests(v0);
  }
  else
  {
    PopPowerRequestRevokeRequests(v0, 0);
  }
}
