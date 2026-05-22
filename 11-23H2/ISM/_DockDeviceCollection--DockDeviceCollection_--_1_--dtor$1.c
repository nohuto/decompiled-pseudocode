/*
 * XREFs of _DockDeviceCollection::DockDeviceCollection_::_1_::dtor$1 @ 0x1800E1D03
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DockDeviceCollection::DockDeviceCollection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 2760LL));
}
