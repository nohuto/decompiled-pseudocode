/*
 * XREFs of shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1801D7430
 * Callers:
 *     shell::TaskScheduler::AddTask__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1801D6E64 (shell--TaskScheduler--AddTask__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLaunc.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@AEBV01@@Z @ 0x1805D8274 (--0LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *(_QWORD *)(a1 + 40) = 1LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &off_180646150;
  *(_QWORD *)(a1 + 8) = off_180646130;
  *(_QWORD *)(a1 + 16) = off_1806460F0;
  *(_QWORD *)(a1 + 24) = off_1806460D0;
  *(_QWORD *)(a1 + 32) = off_180646110;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 72));
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::LauncherTipContextMenuExecuteCommand(
    (LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)(a1 + 80),
    (const struct LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)(a2 + 8));
  *(_BYTE *)(a1 + 400) = *(_BYTE *)(a2 + 328);
  *(_QWORD *)(a1 + 408) = *a3;
  return a1;
}
