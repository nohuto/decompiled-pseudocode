/*
 * XREFs of RtlpFtInitialize @ 0x18009F950
 * Callers:
 *     RtlpFtInitOnceCallback @ 0x18009F930 (RtlpFtInitOnceCallback.c)
 * Callees:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180060D20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlQueryFeatureConfiguration @ 0x1800710F0 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 RtlpFtInitialize()
{
  int v0; // eax
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  int v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0;
  if ( (int)RtlQueryFeatureConfiguration(50550682LL, 0, &v2, (__int64)&v3) < 0 || (v0 = 1, (BYTE4(v3) & 0x30) != 0x20) )
    v0 = 0;
  _ft_g_isTestReadyMedia = v0;
  result = RtlRegisterFeatureConfigurationChangeNotification(
             (__int64)RtlpFtFeatureConfigChangeCallback,
             0LL,
             0LL,
             &_ft_g_feature_store_change_registration_handle);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
