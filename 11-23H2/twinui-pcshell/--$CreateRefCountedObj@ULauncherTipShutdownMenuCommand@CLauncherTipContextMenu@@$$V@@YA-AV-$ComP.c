/*
 * XREFs of ??$CreateRefCountedObj@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@XZ @ 0x1806C9724
 * Callers:
 *     ?_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DF168 (-_EnumerateAndBuildShutdownMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall CreateRefCountedObj<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand,>(__int64 *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    *v2 = &CRefCountedObject<CLauncherTipContextMenu::LauncherTipShutdownMenuCommand>::`vftable';
    *((_DWORD *)v2 + 10) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = (__int64)v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
