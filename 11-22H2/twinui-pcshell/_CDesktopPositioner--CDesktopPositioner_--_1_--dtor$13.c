/*
 * XREFs of _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$13 @ 0x1802BC77A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopPositioner::CDesktopPositioner_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 360LL));
}
