/*
 * XREFs of McGenEventUnregister_EventUnregister @ 0x18000377C
 * Callers:
 *     TelSetLocalTelemetrySetting @ 0x1800018B0 (TelSetLocalTelemetrySetting.c)
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
