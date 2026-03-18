/*
 * XREFs of NtUserEnableSessionForMMCSS @ 0x1C00FD040
 * Callers:
 *     <none>
 * Callees:
 *     _EnableSessionForMMCSS @ 0x1C00FD080 (_EnableSessionForMMCSS.c)
 */

__int64 __fastcall NtUserEnableSessionForMMCSS(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = EnableSessionForMMCSS(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
