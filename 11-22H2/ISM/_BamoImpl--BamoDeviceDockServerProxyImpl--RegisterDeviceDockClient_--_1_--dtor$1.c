/*
 * XREFs of _BamoImpl::BamoDeviceDockServerProxyImpl::RegisterDeviceDockClient_::_1_::dtor$1 @ 0x18013DBA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoImpl::BamoDeviceDockServerProxyImpl::RegisterDeviceDockClient_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
