/*
 * XREFs of ??0last_error_context@wil@@QEAA@XZ @ 0x14004B1DC
 * Callers:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x140059FDC (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x140082F48 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x140089C9C (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x14008A04C (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     <none>
 */

wil::last_error_context *__fastcall wil::last_error_context::last_error_context(wil::last_error_context *this)
{
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 1) = GetLastError();
  return this;
}
