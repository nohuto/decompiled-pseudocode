/*
 * XREFs of CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync$_InitCoro$2 @ 0x180273A1C
 * Callers:
 *     ?TryInvokeCopilotFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@_K@Z @ 0x180273BE8 (-TryInvokeCopilotFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@winrt@@_K@Z.c)
 * Callees:
 *     CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180273AE0 (CopilotHotkeyManager--TryInvokeCopilotFromHardwareKeyAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  *(_QWORD *)(a2 + 26) = a5;
  *(_QWORD *)(a2 + 34) = a4;
  *(_QWORD *)a2 = CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 25) = 0;
  return CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync__ResumeCoro_1(a2);
}
