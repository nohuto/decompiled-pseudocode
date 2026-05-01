/*
 * XREFs of ??_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z @ 0x180178884
 * Callers:
 *     ??_EPerMonitorShellPositionerManager@@WBI@EAAPEAXI@Z @ 0x180209DB0 (--_EPerMonitorShellPositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1PerMonitorShellPositionerManager@@UEAA@XZ @ 0x1801788C0 (--1PerMonitorShellPositionerManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

PerMonitorShellPositionerManager *__fastcall PerMonitorShellPositionerManager::`vector deleting destructor'(
        PerMonitorShellPositionerManager *this,
        char a2)
{
  PerMonitorShellPositionerManager::~PerMonitorShellPositionerManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xB8uLL);
  return this;
}
