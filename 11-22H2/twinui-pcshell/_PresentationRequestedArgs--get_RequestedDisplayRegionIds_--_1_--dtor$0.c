/*
 * XREFs of _PresentationRequestedArgs::get_RequestedDisplayRegionIds_::_1_::dtor$0 @ 0x1803A5E85
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PresentationRequestedArgs::get_RequestedDisplayRegionIds_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
