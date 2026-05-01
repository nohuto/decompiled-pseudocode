/*
 * XREFs of ??1PrimaryAppProxyBase@@UEAA@XZ @ 0x1801856F0
 * Callers:
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$20 @ 0x18022200F (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$20.c)
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$0 @ 0x1804EF3B8 (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall PrimaryAppProxyBase::~PrimaryAppProxyBase(PrimaryAppProxyBase *this)
{
  *(_QWORD *)this = &PrimaryAppProxyBase::`vftable';
}
