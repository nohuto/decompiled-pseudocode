/*
 * XREFs of ??1BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18008D5C0
 * Callers:
 *     ??_EBamoActivationWatcherPrincipal@@MEAAPEAXI@Z @ 0x18008D700 (--_EBamoActivationWatcherPrincipal@@MEAAPEAXI@Z.c)
 *     ??_EBamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18008D750 (--_EBamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::~BamoActivationWatcherPrincipalImpl(
        BamoImpl::BamoActivationWatcherPrincipalImpl *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  Microsoft::BamoImpl::BamoImplObject *v5; // rcx

  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 6);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 5);
  v5 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 2);
  if ( v5 )
    Microsoft::BamoImpl::BamoImplObject::Release(v5, v2, v3, v4);
}
