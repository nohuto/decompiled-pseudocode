/*
 * XREFs of RtlUnregisterFeatureConfigurationChangeNotification @ 0x180050420
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcFreeChangeRegistration @ 0x1800503CC (RtlpFcFreeChangeRegistration.c)
 *     RtlpFcRemoveChangeRegistration @ 0x180050450 (RtlpFcRemoveChangeRegistration.c)
 */

__int64 __fastcall RtlUnregisterFeatureConfigurationChangeNotification(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_180187488 )
  {
    RtlpFcRemoveChangeRegistration(a1, a1);
    return RtlpFcFreeChangeRegistration(a1);
  }
  return result;
}
