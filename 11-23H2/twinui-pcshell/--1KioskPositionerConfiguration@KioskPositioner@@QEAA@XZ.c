/*
 * XREFs of ??1KioskPositionerConfiguration@KioskPositioner@@QEAA@XZ @ 0x1805A73AC
 * Callers:
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$2 @ 0x1802BB635 (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$2.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$1 @ 0x1802BB713 (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$1.c)
 * Callees:
 *     ??R?$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z @ 0x1805A75E0 (--R-$default_delete@VPrimaryAppProxyBase@@@std@@QEBAXPEAVPrimaryAppProxyBase@@@Z.c)
 */

void __fastcall KioskPositioner::KioskPositionerConfiguration::~KioskPositionerConfiguration(
        KioskPositioner::KioskPositionerConfiguration *this)
{
  if ( *(_QWORD *)this )
    std::default_delete<PrimaryAppProxyBase>::operator()();
}
