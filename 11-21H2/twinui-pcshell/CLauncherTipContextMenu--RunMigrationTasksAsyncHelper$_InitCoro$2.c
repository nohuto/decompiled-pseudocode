/*
 * XREFs of CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_InitCoro$2 @ 0x1801DA238
 * Callers:
 *     ?RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DA4A0 (-RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x1801DA2F0 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 209) = a4;
  *(_QWORD *)a2 = CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[208] = 0;
  return CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__ResumeCoro_1(a2);
}
