/*
 * XREFs of NtUserNlsKbdSendIMENotification @ 0x1C01FA990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserNlsKbdSendIMENotification(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (int)NlsKbdSendIMENotificationBase(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
