/*
 * XREFs of ??1PrimaryAppProxyBase@@UEAA@XZ @ 0x1801C3710
 * Callers:
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$19 @ 0x1802BB791 (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$19.c)
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$0 @ 0x1805A730B (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall PrimaryAppProxyBase::~PrimaryAppProxyBase(PrimaryAppProxyBase *this)
{
  *(_QWORD *)this = &PrimaryAppProxyBase::`vftable';
}
