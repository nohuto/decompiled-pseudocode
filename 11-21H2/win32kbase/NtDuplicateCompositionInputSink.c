/*
 * XREFs of NtDuplicateCompositionInputSink @ 0x1C023CFB0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0241304 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall NtDuplicateCompositionInputSink(__int64 a1, __int64 a2, __int64 a3)
{
  MicrosoftTelemetryAssertTriggeredMsgKM("API is being deprecated. Caller should switch to DuplicateHandle", a2, a3);
  return 3221225659LL;
}
