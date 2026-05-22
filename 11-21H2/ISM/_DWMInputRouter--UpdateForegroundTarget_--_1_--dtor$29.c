/*
 * XREFs of _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$29 @ 0x180057820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::UpdateForegroundTarget_::_1_::dtor_29(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 128));
}
