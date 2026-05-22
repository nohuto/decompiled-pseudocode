/*
 * XREFs of _SystemCursors::HardwareCursorVisual::EnableHardwareCursor_::_1_::dtor$0 @ 0x180115F59
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemCursors::HardwareCursorVisual::EnableHardwareCursor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
