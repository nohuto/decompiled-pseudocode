/*
 * XREFs of ??1BamoMPCManagerPrincipal@@MEAA@XZ @ 0x180097C18
 * Callers:
 *     _MPCManager::MPCManager_::_1_::dtor$0 @ 0x180055512 (_MPCManager--MPCManager_--_1_--dtor$0.c)
 *     _PenDeviceManager::PenDeviceManager_::_1_::dtor$0 @ 0x180185C28 (_PenDeviceManager--PenDeviceManager_--_1_--dtor$0.c)
 *     _HapticsDevice::HapticsDevice_::_1_::dtor$0 @ 0x18018C6B1 (_HapticsDevice--HapticsDevice_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoMPCManagerPrincipal::~BamoMPCManagerPrincipal(BamoMPCManagerPrincipal *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  Microsoft::BamoImpl::BamoImplObject *v5; // rcx

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 7);
  v5 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v5 )
    Microsoft::BamoImpl::BamoImplObject::Release(v5, v2, v3, v4);
}
