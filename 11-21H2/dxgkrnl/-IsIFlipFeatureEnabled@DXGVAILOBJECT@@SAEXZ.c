/*
 * XREFs of ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C035162C
 * Callers:
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02DEB54 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382810 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

bool __fastcall DXGVAILOBJECT::IsIFlipFeatureEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  bool v5; // sf

  v4 = g_IsVailIFlipEnabled == 0;
  v5 = g_IsVailIFlipEnabled < 0;
  if ( g_IsVailIFlipEnabled < 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Vail_iFLIP__private_reporting,
      0xDCD10Au,
      a3,
      a4,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
    _InterlockedCompareExchange(&g_IsVailIFlipEnabled, 1, -1);
    v4 = g_IsVailIFlipEnabled == 0;
    v5 = g_IsVailIFlipEnabled < 0;
  }
  return !v5 && !v4;
}
