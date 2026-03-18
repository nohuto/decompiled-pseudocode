/*
 * XREFs of NtUserDeferredDesktopRotation @ 0x1C01F24D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDeferredDesktopRotation @ 0x1C0211D1C (xxxDeferredDesktopRotation.c)
 */

__int64 NtUserDeferredDesktopRotation()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = xxxDeferredDesktopRotation();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
