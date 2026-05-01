/*
 * XREFs of ?SnappingModeForAction@HotkeyHandler@@AEAA?AW4WINDOW_SNAPPING_MODE@@W4SnapAction@1@@Z @ 0x180677138
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x180676370 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HotkeyHandler::SnappingModeForAction(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx

  if ( a2 <= 8 )
  {
    if ( a2 == 8 )
      return 1LL;
    v2 = a2 - 1;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 1;
    if ( !v3 )
      return 1LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 1LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 1LL;
    v6 = v5 - 1;
    return !v6 || (unsigned int)(v6 - 1) <= 1;
  }
  v8 = a2 - 9;
  if ( !v8 )
    return 2LL;
  v9 = v8 - 1;
  if ( !v9 )
    return 2LL;
  v10 = v9 - 1;
  if ( !v10 )
    return 2LL;
  v11 = v10 - 1;
  if ( v11 && (unsigned int)(v11 - 1) >= 2 )
    return 0LL;
  return 3LL;
}
