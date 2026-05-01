/*
 * XREFs of _VirtualDesktopCollection::Initialize_::_1_::dtor$2 @ 0x1802B774A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopCollection::Initialize_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 248));
}
