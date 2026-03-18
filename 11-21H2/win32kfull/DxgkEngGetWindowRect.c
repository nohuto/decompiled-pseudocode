/*
 * XREFs of DxgkEngGetWindowRect @ 0x1C0122DF0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetWindowRect @ 0x1C0084E98 (UserGetWindowRect.c)
 */

__int64 __fastcall DxgkEngGetWindowRect(int a1, _OWORD *a2)
{
  return UserGetWindowRect(a1, a2);
}
