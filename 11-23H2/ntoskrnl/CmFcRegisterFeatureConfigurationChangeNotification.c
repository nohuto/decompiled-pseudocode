/*
 * XREFs of CmFcRegisterFeatureConfigurationChangeNotification @ 0x14080E738
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x140374740 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14080E75C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall CmFcRegisterFeatureConfigurationChangeNotification(int a1, int a2, int a3, __int64 a4)
{
  return CmFcManagerRegisterFeatureConfigurationChangeNotification(a1, a1, a2, a3, a4);
}
