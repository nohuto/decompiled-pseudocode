/*
 * XREFs of NtUserDirectedYield @ 0x1C01F2510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDirectedYield()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 0LL);
  UserSessionSwitchLeaveCrit(v0);
  return 1LL;
}
