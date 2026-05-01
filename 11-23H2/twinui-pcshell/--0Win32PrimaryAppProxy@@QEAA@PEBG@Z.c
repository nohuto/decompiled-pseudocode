/*
 * XREFs of ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1805A72E0
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800EF940 (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800F030C (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 * Callees:
 *     ??0Win32PrimaryAppInformation@@QEAA@PEBG@Z @ 0x1805A7220 (--0Win32PrimaryAppInformation@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
Win32PrimaryAppProxy *__fastcall Win32PrimaryAppProxy::Win32PrimaryAppProxy(
        Win32PrimaryAppProxy *this,
        const unsigned __int16 *a2)
{
  *(_QWORD *)this = &Win32PrimaryAppProxy::`vftable';
  Win32PrimaryAppInformation::Win32PrimaryAppInformation((Win32PrimaryAppProxy *)((char *)this + 8), a2);
  return this;
}
