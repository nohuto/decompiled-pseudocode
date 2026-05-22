/*
 * XREFs of _SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor$3 @ 0x180156CB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 120));
}
