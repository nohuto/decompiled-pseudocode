/*
 * XREFs of ??1BamoMPCManagerPrincipal@@MEAA@XZ @ 0x1800C08F4
 * Callers:
 *     _PenDeviceManager::PenDeviceManager_::_1_::dtor$0 @ 0x1800808E5 (_PenDeviceManager--PenDeviceManager_--_1_--dtor$0.c)
 *     _HapticsDevice::HapticsDevice_::_1_::dtor$0 @ 0x1801B8839 (_HapticsDevice--HapticsDevice_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
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
