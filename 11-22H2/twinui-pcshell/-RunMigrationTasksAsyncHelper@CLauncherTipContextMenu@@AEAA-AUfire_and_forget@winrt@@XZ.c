/*
 * XREFs of ?RunMigrationTasksAsyncHelper@CLauncherTipContextMenu@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1802582B8
 * Callers:
 *     ?RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ @ 0x180112440 (-RunMigrationTasks@CLauncherTipContextMenu@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_InitCoro$2 @ 0x180258048 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_InitCoro$2.c)
 */

_BYTE *__fastcall CLauncherTipContextMenu::RunMigrationTasksAsyncHelper(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+68h] [rbp+10h] BYREF

  v4 = operator new(0x2AuLL);
  v6 = 0;
  CLauncherTipContextMenu::RunMigrationTasksAsyncHelper__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
