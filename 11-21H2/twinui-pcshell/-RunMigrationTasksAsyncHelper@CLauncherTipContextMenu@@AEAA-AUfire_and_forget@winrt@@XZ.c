/*
 * XREFs of ?RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DA4A0
 * Callers:
 *     ?RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ @ 0x1801DA200 (-RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_InitCoro$2 @ 0x1801DA238 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_InitCoro$2.c)
 */

_BYTE *__fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper(__int64 a1, _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+118h] [rbp+10h] BYREF

  v4 = (char *)operator new(0xD9uLL);
  v6 = 0;
  CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
