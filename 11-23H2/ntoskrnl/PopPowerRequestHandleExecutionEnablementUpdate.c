/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408557C4
 * Callers:
 *     PopUpdatePdcSystemIdleState @ 0x1407A71EC (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408555E0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopWnfAudioCallback @ 0x1408556A0 (PopWnfAudioCallback.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140981810 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140981908 (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     PopPowerRequestUnrevokeRequests @ 0x1403AAEC0 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestRevokeRequests @ 0x1405840B4 (PopPowerRequestRevokeRequests.c)
 */

__int64 PopPowerRequestHandleExecutionEnablementUpdate()
{
  int v0; // ecx

  v0 = 8;
  if ( PopPowerRequestConvertSystemToExecution )
    v0 = 10;
  if ( PopExecutionRequiredTimeout
    && (!byte_140C3F363
     || PopPowerRequestActiveAudioEnablesExecutionRequired && byte_140C3F362
     || byte_140C3F361
     || MEMORY[0xFFFFF78000000008] - qword_140C3F368 < 10000000
                                                     * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout) )
  {
    return PopPowerRequestUnrevokeRequests(v0);
  }
  else
  {
    return PopPowerRequestRevokeRequests(v0, 0);
  }
}
