/*
 * XREFs of McGenEventUnregister_EventUnregister @ 0x180002D60
 * Callers:
 *     TelSetLocalTelemetrySetting @ 0x180001700 (TelSetLocalTelemetrySetting.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister_EventUnregister()
{
  ULONG result; // eax

  if ( !MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context )
    return 0;
  result = EventUnregister(MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context);
  MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context = 0LL;
  return result;
}
