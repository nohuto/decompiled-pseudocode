/*
 * XREFs of HvlpWriteEventLog @ 0x140548CA8
 * Callers:
 *     HvlPhase2Initialize @ 0x1403B4610 (HvlPhase2Initialize.c)
 *     HvlpCheckTscSync @ 0x140548500 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14054868C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x140548924 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x14054899C (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x1405489F8 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x140548BE0 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
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
