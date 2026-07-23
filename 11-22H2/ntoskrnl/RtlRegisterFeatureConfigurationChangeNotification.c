/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x140374D90
 * Callers:
 *     CmInitSystem0 @ 0x140B5DFB8 (CmInitSystem0.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 *     CmFcRegisterFeatureConfigurationChangeNotification @ 0x140810CB8 (CmFcRegisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  if ( ObGetCurrentIrql() && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return -1073741637;
  else
    return CmFcRegisterFeatureConfigurationChangeNotification(
             Callback,
             Context,
             ObservedChangeStamp,
             RegistrationHandle);
}
