/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1409BD5A0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140A2728C (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  return CmFcManagerUnregisterFeatureConfigurationChangeNotification(RegistrationHandle, RegistrationHandle);
}
