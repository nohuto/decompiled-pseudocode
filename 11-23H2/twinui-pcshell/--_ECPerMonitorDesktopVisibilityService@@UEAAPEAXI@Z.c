/*
 * XREFs of ??_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z @ 0x1801AEE88
 * Callers:
 *     ??_ECPerMonitorDesktopVisibilityService@@WCI@EAAPEAXI@Z @ 0x1802A50C0 (--_ECPerMonitorDesktopVisibilityService@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x1801AEEC4 (--1CPerMonitorDesktopVisibilityService@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CPerMonitorDesktopVisibilityService *__fastcall CPerMonitorDesktopVisibilityService::`vector deleting destructor'(
        CPerMonitorDesktopVisibilityService *this,
        char a2)
{
  CPerMonitorDesktopVisibilityService::~CPerMonitorDesktopVisibilityService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xF0uLL);
  return this;
}
