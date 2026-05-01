/*
 * XREFs of CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_InitCoro$2 @ 0x180271CC4
 * Callers:
 *     ?MonitorForCopilotExtendedSignals@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18027204C (-MonitorForCopilotExtendedSignals@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@@W4IMMERSIV.c)
 * Callees:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180271D90 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CopilotHotkeyManager::MonitorForCopilotExtendedSignals__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 66) = a5;
  *(_DWORD *)(a2 + 74) = v5;
  *(_QWORD *)a2 = CopilotHotkeyManager::MonitorForCopilotExtendedSignals__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 65) = 0;
  return CopilotHotkeyManager::MonitorForCopilotExtendedSignals__ResumeCoro_1(a2);
}
