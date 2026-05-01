/*
 * XREFs of ??1last_error_context@wil@@QEAA@XZ @ 0x18038D30C
 * Callers:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800BBFF0 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800D1440 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800D2A70 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18013017C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?IsWidgetDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18023FEC8 (-IsWidgetDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AXPEAU1@@Z$1?DsrFreeJoinInfo@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802589DC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AX.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?UnregisterWait@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAPEAPEAXXZ @ 0x18027EF40 (-put@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-UnregisterWait.c)
 *     _wil::details_abi::heap_buffer::reserve_::_1_::dtor$0 @ 0x1802B9A98 (_wil--details_abi--heap_buffer--reserve_--_1_--dtor$0.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1802CE996 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x18038E84C (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1803E5DF4 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     _wil::details::StagingFailureInformation::StagingFailureInformation_::_1_::dtor$0 @ 0x1803E5F2E (_wil--details--StagingFailureInformation--StagingFailureInformation_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::last_error_context::~last_error_context(wil::last_error_context *this)
{
  if ( !*(_BYTE *)this )
    SetLastError(*((_DWORD *)this + 1));
}
