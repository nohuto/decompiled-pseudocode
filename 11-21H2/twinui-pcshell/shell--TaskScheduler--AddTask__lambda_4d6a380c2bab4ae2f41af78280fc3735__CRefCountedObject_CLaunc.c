/*
 * XREFs of shell::TaskScheduler::AddTask__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1801D6E64
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1805DBD08 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1801D7430 (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall shell::TaskScheduler::AddTask__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx

  v7 = operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7
    && (v8 = shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____(
               v7,
               a4,
               a3)) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int))(**(_QWORD **)(a1 + 16) + 24LL))(
           *(_QWORD *)(a1 + 16),
           v8,
           a1,
           a1,
           0x7FFFFFFF);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v9;
}
