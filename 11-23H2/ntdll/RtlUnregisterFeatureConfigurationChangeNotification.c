/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x180050420
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x1800503CC (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x180050450 (RtlpFcRemoveChangeRegistration.c)
 */

NTSTATUS __cdecl RtlUnregisterFeatureConfigurationChangeNotification(
        RTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  NTSTATUS result; // eax

  if ( !byte_180187488 )
  {
    RtlpFcRemoveChangeRegistration(RegistrationHandle, RegistrationHandle);
    return RtlpFcFreeChangeRegistration((PTP_WORK *)RegistrationHandle);
  }
  return result;
}
