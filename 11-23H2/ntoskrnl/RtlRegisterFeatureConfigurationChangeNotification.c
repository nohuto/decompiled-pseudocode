/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x140374740
 * Callers:
 *     CmInitSystem0 @ 0x140B534F0 (CmInitSystem0.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x14080E738 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( ObGetCurrentIrql() && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 3221225659LL;
  else
    return CmFcRegisterFeatureConfigurationChangeNotification(a1, a2, a3, a4);
}
