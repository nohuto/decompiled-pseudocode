/*
 * XREFs of ?Release@?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@UEAAKXZ @ 0x1805D9C30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1LauncherTipMenuCommand@CLauncherTipContextMenu@@QEAA@XZ @ 0x1805D8548 (--1LauncherTipMenuCommand@CLauncherTipContextMenu@@QEAA@XZ.c)
 */

__int64 __fastcall CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 30);
  if ( !v2 && a1 )
  {
    CLauncherTipContextMenu::LauncherTipMenuCommand::~LauncherTipMenuCommand((CLauncherTipContextMenu::LauncherTipMenuCommand *)(a1 + 2));
    operator delete((void *)a1);
  }
  return v2;
}
