/*
 * XREFs of StorNVMeDriverUnload @ 0x1C00046A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00049B0 (_guard_dispatch_icall_nop.c)
 */

__int64 StorNVMeDriverUnload()
{
  __int64 result; // rax

  result = ((__int64 (*)(void))StorPortDriverUnload)();
  if ( g_wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  return result;
}
