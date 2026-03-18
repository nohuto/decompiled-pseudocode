/*
 * XREFs of NtUserLoadCursorsAndIcons @ 0x1C0115D10
 * Callers:
 *     <none>
 * Callees:
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C0115D4C (-_LoadCursorsAndIcons@@YAHXZ.c)
 */

__int64 NtUserLoadCursorsAndIcons()
{
  __int64 CursorsAndIcons; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  CursorsAndIcons = (int)_LoadCursorsAndIcons();
  UserSessionSwitchLeaveCrit(v1);
  return CursorsAndIcons;
}
