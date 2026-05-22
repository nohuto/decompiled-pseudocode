/*
 * XREFs of _SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor$2 @ 0x180183D0B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
