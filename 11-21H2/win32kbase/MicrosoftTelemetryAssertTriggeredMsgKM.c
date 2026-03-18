/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0241304
 * Callers:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x1C0096628 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 *     NtDuplicateCompositionInputSink @ 0x1C023CFB0 (NtDuplicateCompositionInputSink.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0241364 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredMsgKM(__int64 a1)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1, a1);
}
