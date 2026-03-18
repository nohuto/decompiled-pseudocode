/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C005118C
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C000A120 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C000D648 (RootHub_WaitForResumeCompletion.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000FC10 (UsbDevice_UcxEvtEnable.c)
 *     Command_Initialize @ 0x1C001471C (Command_Initialize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00511BC (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredMsgKM(const char *a1, ...)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1, (__int64)a1);
}
