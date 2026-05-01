/*
 * XREFs of ??_GCLauncherTipContextMenu@@MEAAPEAXI@Z @ 0x1801A9E24
 * Callers:
 *     ??_ECLauncherTipContextMenu@@OBI@EAAPEAXI@Z @ 0x1802AC4A0 (--_ECLauncherTipContextMenu@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLauncherTipContextMenu@@MEAA@XZ @ 0x1801A9E60 (--1CLauncherTipContextMenu@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CLauncherTipContextMenu *__fastcall CLauncherTipContextMenu::`scalar deleting destructor'(
        CLauncherTipContextMenu *this,
        char a2)
{
  CLauncherTipContextMenu::~CLauncherTipContextMenu(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1A8uLL);
  return this;
}
