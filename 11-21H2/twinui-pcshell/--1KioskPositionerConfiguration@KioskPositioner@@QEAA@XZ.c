/*
 * XREFs of ??1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ @ 0x1804EF47C
 * Callers:
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$2 @ 0x180221EEF (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$2.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$1 @ 0x180221FA3 (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$1.c)
 * Callees:
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x1804EF710 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 */

void __fastcall KioskPositioner::KioskPositionerConfiguration::~KioskPositionerConfiguration(
        KioskPositioner::KioskPositionerConfiguration *this)
{
  if ( *(_QWORD *)this )
    std::default_delete<PrimaryAppProxyBase>::operator()();
}
