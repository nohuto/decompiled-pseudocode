/*
 * XREFs of __security_check_cookie @ 0x1C0003050
 * Callers:
 *     CiSchedulerWait @ 0x1C0001680 (CiSchedulerWait.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C000350C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     __GSHandlerCheckCommon @ 0x1C0003B8C (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C00047A0 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C000488C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0004910 (CiLogSchedulerWakeup.c)
 *     CiLogSetBufferingMode @ 0x1C0004980 (CiLogSetBufferingMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0004A04 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0004A74 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0004AE4 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0004B54 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C0004BEC (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C0004C80 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0004DD4 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C0004E70 (CiLogTurboEngaged.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C000B29C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1C000B350 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     CiNdisThrottle @ 0x1C000B4B0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000CD00 (CiCreateTaskIndexClientFromThread.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C000F114 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 *     CiConfigReadDWORD @ 0x1C000F9C0 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000FA60 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000FED0 (CiConfigQueryValue.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
