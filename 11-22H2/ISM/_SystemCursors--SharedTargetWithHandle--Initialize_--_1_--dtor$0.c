/*
 * XREFs of _SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor$0 @ 0x180183CF3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
