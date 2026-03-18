/*
 * XREFs of SshpSessionManagerTraceSystemStart @ 0x140864A38
 * Callers:
 *     SshpSessionManagerInitialize @ 0x140B754D4 (SshpSessionManagerInitialize.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x1408741A8 (SshpSessionManagerSendControlEvent.c)
 */

__int64 SshpSessionManagerTraceSystemStart()
{
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STARTED_CONTROL_EVENT, 0LL, 0LL);
}
