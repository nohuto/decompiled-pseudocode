/*
 * XREFs of _PenInterface::PenInterface_::_1_::dtor$5 @ 0x1801A695D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenInterface::PenInterface_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 80) + 136LL));
}
