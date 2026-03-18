/*
 * XREFs of NtUserNlsKbdSendIMENotification @ 0x1C01D7E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserNlsKbdSendIMENotification(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 0LL);
  v4 = (unsigned __int8)NlsKbdSendIMENotification(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
