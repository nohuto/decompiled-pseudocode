/*
 * XREFs of RtlpFtInitialize @ 0x18009F910
 * Callers:
 *     RtlpFtInitOnceCallback @ 0x18009F8F0 (RtlpFtInitOnceCallback.c)
 * Callees:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180060D20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlQueryFeatureConfiguration @ 0x1800710F0 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

NTSTATUS RtlpFtInitialize()
{
  int v0; // eax
  NTSTATUS result; // eax
  ULONGLONG ChangeStamp; // [rsp+20h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
  FeatureConfiguration.VariantPayload = 0;
  if ( RtlQueryFeatureConfiguration(0x303579Au, RtlFeatureConfigurationBoot, &ChangeStamp, &FeatureConfiguration) < 0
    || (v0 = 1, (FeatureConfiguration.Flags & 0x30) != 0x20) )
  {
    v0 = 0;
  }
  _ft_g_isTestReadyMedia = v0;
  result = RtlRegisterFeatureConfigurationChangeNotification(
             (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)RtlpFtFeatureConfigChangeCallback,
             0LL,
             0LL,
             &_ft_g_feature_store_change_registration_handle);
  if ( result >= 0 )
    return 0;
  return result;
}
