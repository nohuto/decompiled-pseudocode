/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor$8 @ 0x18006C607
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 120LL));
}
