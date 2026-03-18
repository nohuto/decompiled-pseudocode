/*
 * XREFs of NtUserWaitForMsgAndEvent @ 0x1C0200910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserWaitForMsgAndEvent()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 0LL);
  UserSessionSwitchLeaveCrit(v0);
  return 0LL;
}
