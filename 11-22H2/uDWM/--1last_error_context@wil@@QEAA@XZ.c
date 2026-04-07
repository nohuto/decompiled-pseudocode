/*
 * XREFs of ??1last_error_context@wil@@QEAA@XZ @ 0x18009AF70
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800106C4 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180016954 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18004C9CC (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18004CB84 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x180056870 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     _wil::details_abi::heap_buffer::reserve_::_1_::dtor$0 @ 0x180067192 (_wil--details_abi--heap_buffer--reserve_--_1_--dtor$0.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18009CA74 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::last_error_context::~last_error_context(wil::last_error_context *this)
{
  if ( !*(_BYTE *)this )
    SetLastError(*((_DWORD *)this + 1));
}
