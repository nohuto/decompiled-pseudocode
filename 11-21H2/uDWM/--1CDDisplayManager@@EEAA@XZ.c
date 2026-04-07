/*
 * XREFs of ??1CDDisplayManager@@EEAA@XZ @ 0x1800AECBC
 * Callers:
 *     ??_GCDDisplayManager@@EEAAPEAXI@Z @ 0x1800AED00 (--_GCDDisplayManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003D81C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 */

void __fastcall CDDisplayManager::~CDDisplayManager(CDDisplayManager *this)
{
  *(_QWORD *)this = &CDDisplayManager::`vftable';
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)this + 2);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
