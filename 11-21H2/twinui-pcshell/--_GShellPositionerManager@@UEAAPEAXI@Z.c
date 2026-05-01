/*
 * XREFs of ??_GShellPositionerManager@@UEAAPEAXI@Z @ 0x180178290
 * Callers:
 *     ??_EShellPositionerManager@@WBI@EAAPEAXI@Z @ 0x180209BB0 (--_EShellPositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ShellPositionerManager@@UEAA@XZ @ 0x1801782CC (--1ShellPositionerManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

ShellPositionerManager *__fastcall ShellPositionerManager::`scalar deleting destructor'(
        ShellPositionerManager *this,
        char a2)
{
  ShellPositionerManager::~ShellPositionerManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xC0uLL);
  return this;
}
