/*
 * XREFs of NtUserGetIMEShowStatus @ 0x1C0106410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 NtUserGetIMEShowStatus()
{
  _BOOL8 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) != 0;
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
