/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x180050580
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x18005052C (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x1800505B0 (RtlpFcRemoveChangeRegistration.c)
 */

__int64 __fastcall RtlUnregisterFeatureConfigurationChangeNotification(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1801843C8 )
  {
    RtlpFcRemoveChangeRegistration(a1, a1);
    return RtlpFcFreeChangeRegistration(a1);
  }
  return result;
}
