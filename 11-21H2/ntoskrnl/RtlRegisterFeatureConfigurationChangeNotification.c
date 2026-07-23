/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1403C7A30
 * Callers:
 *     sub_140B131D4 @ 0x140B131D4 (sub_140B131D4.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_14083332C @ 0x14083332C (sub_14083332C.c)
 */

NTSTATUS __cdecl RtlRegisterFeatureConfigurationChangeNotification(
        PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK Callback,
        PVOID Context,
        PRTL_FEATURE_CHANGE_STAMP ObservedChangeStamp,
        PRTL_FEATURE_CONFIGURATION_CHANGE_REGISTRATION RegistrationHandle)
{
  if ( KeGetEffectiveIrql() && ((dword_140C31E20 & 3) != 0 || byte_140C22263) )
    return -1073741637;
  else
    return sub_14083332C(Callback, Context, ObservedChangeStamp, RegistrationHandle);
}
