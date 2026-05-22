/*
 * XREFs of _Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost_::_1_::dtor$1 @ 0x1800A0DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 24LL));
}
