/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408554C4
 * Callers:
 *     PopUpdatePdcSystemIdleState @ 0x1407A6FFC (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408552E0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopWnfAudioCallback @ 0x1408553A0 (PopWnfAudioCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140981610 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140981708 (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     PopPowerRequestUnrevokeRequests @ 0x1403AACE0 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestRevokeRequests @ 0x140583BC4 (PopPowerRequestRevokeRequests.c)
 */

__int64 PopPowerRequestHandleExecutionEnablementUpdate()
{
  int v0; // ecx

  v0 = 8;
  if ( PopPowerRequestConvertSystemToExecution )
    v0 = 10;
  if ( PopExecutionRequiredTimeout
    && (!byte_140C3F4E3
     || PopPowerRequestActiveAudioEnablesExecutionRequired && byte_140C3F4E2
     || byte_140C3F4E1
     || MEMORY[0xFFFFF78000000008] - qword_140C3F4E8 < 10000000
                                                     * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout) )
  {
    return PopPowerRequestUnrevokeRequests(v0);
  }
  else
  {
    return PopPowerRequestRevokeRequests(v0, 0);
  }
}
