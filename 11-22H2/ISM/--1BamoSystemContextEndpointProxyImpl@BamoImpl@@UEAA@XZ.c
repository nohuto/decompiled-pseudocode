/*
 * XREFs of ??1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ @ 0x18015FE58
 * Callers:
 *     ??_EBamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18015FE90 (--_EBamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_GSystemContextEndpointProxy@@UEAAPEAXI@Z @ 0x18015FED0 (--_GSystemContextEndpointProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::~BamoSystemContextEndpointProxyImpl(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this)
{
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 2);
}
