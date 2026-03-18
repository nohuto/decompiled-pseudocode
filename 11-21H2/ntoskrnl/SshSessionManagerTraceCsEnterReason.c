/*
 * XREFs of SshSessionManagerTraceCsEnterReason @ 0x14080A488
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140809614 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x140811238 (SshpSessionManagerSendControlEvent.c)
 */

__int64 __fastcall SshSessionManagerTraceCsEnterReason(__int64 a1)
{
  _QWORD v2[10]; // [rsp+20h] [rbp-60h] BYREF

  v2[1] = 4LL;
  v2[0] = a1 + 32;
  v2[3] = 4LL;
  v2[2] = a1 + 40;
  v2[5] = 4LL;
  v2[4] = a1 + 48;
  v2[6] = a1 + 8;
  v2[7] = 8LL;
  v2[8] = 0xFFFFF780000002C4uLL;
  v2[9] = 4LL;
  return SshpSessionManagerSendControlEvent(SLEEPSTUDY_EVT_CS_ENTER_REASON_CONTROL_EVENT, 5LL, v2);
}
