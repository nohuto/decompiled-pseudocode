/*
 * XREFs of ??$HandInputReportProcessed@AEAKAEAW4MPCGestureType@@PEAULegacyInputInfo@@@RawInputProvidersContinuousTracing@@SAXAEAKAEAW4MPCGestureType@@$$QEAPEAULegacyInputInfo@@@Z @ 0x1800D5DF0
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@_J4444_N@Z @ 0x1800DB400 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureTy.c)
 * Callees:
 *     ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x1800D90F8 (-HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInput.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x1800D9794 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x1800DCBA0 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

char __fastcall RawInputProvidersContinuousTracing::HandInputReportProcessed<unsigned long &,enum MPCGestureType &,LegacyInputInfo *>(
        unsigned int *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // rcx

  result = RawInputProvidersContinuousTracing::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
      v7,
      _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    return RawInputProvidersContinuousTracing::HandInputReportProcessed_(v8, *a1, *a2, *a3);
  }
  return result;
}
