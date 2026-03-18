/*
 * XREFs of ?CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL@@QEAAXXZ @ 0x1C03098D8
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C030C1C8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z @ 0x1C034570C (-ReportState@DXGTRACKEDWORKLOAD@@QEAAXI@Z.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0345B20 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

void __fastcall DXGGLOBAL::CreatePerfDataWorkerThreadIfNeeded(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_TrackedWorkload__private_reporting,
    0xC3EBFFu,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
    0);
}
