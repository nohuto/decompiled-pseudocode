/*
 * XREFs of KeGetEffectiveIrql @ 0x140244120
 * Callers:
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     sub_1402E1704 @ 0x1402E1704 (sub_1402E1704.c)
 *     sub_1402E1CBC @ 0x1402E1CBC (sub_1402E1CBC.c)
 *     sub_1402E1D48 @ 0x1402E1D48 (sub_1402E1D48.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1403B3C40 @ 0x1403B3C40 (sub_1403B3C40.c)
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1403C7A30 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     WheaIsCriticalState @ 0x1403D2BA0 (WheaIsCriticalState.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     sub_140460684 @ 0x140460684 (sub_140460684.c)
 *     sub_14053FE50 @ 0x14053FE50 (sub_14053FE50.c)
 *     sub_14056CB60 @ 0x14056CB60 (sub_14056CB60.c)
 *     sub_14056CC3C @ 0x14056CC3C (sub_14056CC3C.c)
 *     sub_140570750 @ 0x140570750 (sub_140570750.c)
 *     sub_1405792C0 @ 0x1405792C0 (sub_1405792C0.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     EtwSendTraceBuffer @ 0x140630940 (EtwSendTraceBuffer.c)
 *     sub_1406352B0 @ 0x1406352B0 (sub_1406352B0.c)
 *     sub_1406354FC @ 0x1406354FC (sub_1406354FC.c)
 *     sub_1406EC9F8 @ 0x1406EC9F8 (sub_1406EC9F8.c)
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_14082AB94 @ 0x14082AB94 (sub_14082AB94.c)
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 */

unsigned __int8 KeGetEffectiveIrql()
{
  if ( (unsigned __int8)sub_1402ABBD0() )
    return KeGetCurrentIrql();
  else
    return 15;
}
