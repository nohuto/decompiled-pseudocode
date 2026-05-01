/*
 * XREFs of ?AreWindowsFromSameProcess@CApplicationManager@@CA_NPEAUHWND__@@0@Z @ 0x180397F14
 * Callers:
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1803A34BC (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManager::AreWindowsFromSameProcess(HWND a1, HWND a2)
{
  DWORD WindowThreadProcessId; // ebx
  DWORD v5; // [rsp+40h] [rbp+18h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp+20h] BYREF

  WindowThreadProcessId = GetWindowThreadProcessId(a1, &dwProcessId);
  return WindowThreadProcessId == GetWindowThreadProcessId(a2, &v5) && dwProcessId == v5;
}
