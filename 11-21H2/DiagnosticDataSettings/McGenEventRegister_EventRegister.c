/*
 * XREFs of McGenEventRegister_EventRegister @ 0x1800030EC
 * Callers:
 *     TelSetLocalTelemetrySetting @ 0x180001700 (TelSetLocalTelemetrySetting.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister_EventRegister()
{
  ULONG result; // eax

  result = 0;
  if ( !MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context )
    return EventRegister(
             &MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER,
             (PENABLECALLBACK)McGenControlCallbackV2,
             &MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context,
             &MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context);
  return result;
}
