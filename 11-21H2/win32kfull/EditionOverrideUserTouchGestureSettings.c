/*
 * XREFs of EditionOverrideUserTouchGestureSettings @ 0x1C011C620
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00A0DF8 (GetLocalMachineRegistryDWORDValues.c)
 */

__int64 __fastcall EditionOverrideUserTouchGestureSettings(__int128 *a1, __int128 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  GetLocalMachineRegistryDWORDValues((__int64)a1, L"\\Software\\Microsoft\\Wisp\\Touch", a1);
  GetLocalMachineRegistryDWORDValues(v4, L"\\Software\\Microsoft\\Wisp\\Touch", a1 + 6);
  return GetLocalMachineRegistryDWORDValues(v5, L"\\Software\\Microsoft\\Wisp\\MultiTouch", a2);
}
