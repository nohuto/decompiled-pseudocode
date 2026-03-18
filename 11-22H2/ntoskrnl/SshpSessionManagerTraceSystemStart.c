/*
 * XREFs of SshpSessionManagerTraceSystemStart @ 0x140864E58
 * Callers:
 *     SshpSessionManagerInitialize @ 0x140B76400 (SshpSessionManagerInitialize.c)
 * Callees:
 *     SshpSessionManagerSendControlEvent @ 0x140874678 (SshpSessionManagerSendControlEvent.c)
 */

__int64 SshpSessionManagerTraceSystemStart()
{
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_SYSTEM_STARTED_CONTROL_EVENT, 0LL, 0LL);
}
