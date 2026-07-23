/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x1409B5F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140922CE4 @ 0x140922CE4 (sub_140922CE4.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax

  sub_140922CE4((__int64)RegistrationHandle, (struct _EX_RUNDOWN_REF *)RegistrationHandle);
  return result;
}
