/*
 * XREFs of ??1CCompositor@@MEAA@XZ @ 0x1800A9804
 * Callers:
 *     ??_GCCompositor@@MEAAPEAXI@Z @ 0x1800A9860 (--_GCCompositor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0 (--1-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@.c)
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003D81C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     ?Shutdown@CCompositor@@IEAAXXZ @ 0x1800A99C0 (-Shutdown@CCompositor@@IEAAXXZ.c)
 */

void __fastcall CCompositor::~CCompositor(CCompositor *this)
{
  *(_QWORD *)this = &CCompositor::`vftable';
  CCompositor::Shutdown(this);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>((__int64 *)this + 2);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
