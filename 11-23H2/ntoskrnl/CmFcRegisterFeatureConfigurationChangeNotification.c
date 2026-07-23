/*
 * XREFs of CmFcRegisterFeatureConfigurationChangeNotification @ 0x14080EA08
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1403748E0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x14080EA2C (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall CmFcRegisterFeatureConfigurationChangeNotification(int a1, int a2, int a3, __int64 a4)
{
  return CmFcManagerRegisterFeatureConfigurationChangeNotification(a1, a1, a2, a3, a4);
}
