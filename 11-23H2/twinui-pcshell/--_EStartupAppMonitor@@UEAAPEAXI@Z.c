/*
 * XREFs of ??_EStartupAppMonitor@@UEAAPEAXI@Z @ 0x18063E964
 * Callers:
 *     ??_EStartupAppMonitor@@WCI@EAAPEAXI@Z @ 0x1802AAA00 (--_EStartupAppMonitor@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1StartupAppMonitor@@UEAA@XZ @ 0x18063E0A8 (--1StartupAppMonitor@@UEAA@XZ.c)
 */

StartupAppMonitor *__fastcall StartupAppMonitor::`vector deleting destructor'(StartupAppMonitor *this, void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  StartupAppMonitor::~StartupAppMonitor(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
