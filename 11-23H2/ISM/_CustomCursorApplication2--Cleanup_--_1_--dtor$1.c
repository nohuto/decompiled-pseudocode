/*
 * XREFs of _CustomCursorApplication2::Cleanup_::_1_::dtor$1 @ 0x180104D3F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CustomCursorApplication2::Cleanup_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(a2 + 32);
}
