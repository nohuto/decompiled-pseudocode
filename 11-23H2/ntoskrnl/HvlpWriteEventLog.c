/*
 * XREFs of HvlpWriteEventLog @ 0x1405492C8
 * Callers:
 *     HvlPhase2Initialize @ 0x1403B4E80 (HvlPhase2Initialize.c)
 *     HvlpCheckTscSync @ 0x140548B20 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140548CAC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x140548F44 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x140548FBC (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x140549018 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x140549200 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 */

NTSTATUS __fastcall HvlpWriteEventLog(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = (int)EventDescriptor;
  if ( HvlGlobalSystemEventsHandle )
    return EtwWriteEx(HvlGlobalSystemEventsHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  return result;
}
