/*
 * XREFs of ??_GCLauncherTipContextMenu@@MEAAPEAXI@Z @ 0x180178E80
 * Callers:
 *     ??_ECLauncherTipContextMenu@@OBI@EAAPEAXI@Z @ 0x18020FFF0 (--_ECLauncherTipContextMenu@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CLauncherTipContextMenu@@MEAA@XZ @ 0x180178EBC (--1CLauncherTipContextMenu@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
