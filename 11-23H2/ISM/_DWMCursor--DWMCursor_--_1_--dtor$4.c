/*
 * XREFs of _DWMCursor::DWMCursor_::_1_::dtor$4 @ 0x18006FBBB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::DWMCursor_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 72LL));
}
