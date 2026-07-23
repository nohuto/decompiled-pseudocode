/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1409BD6F0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x140A2748C (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  return CmFcManagerUnregisterFeatureConfigurationChangeNotification(RegistrationHandle, RegistrationHandle);
}
