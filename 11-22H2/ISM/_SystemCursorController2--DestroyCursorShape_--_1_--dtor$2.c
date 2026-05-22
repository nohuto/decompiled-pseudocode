/*
 * XREFs of _SystemCursorController2::DestroyCursorShape_::_1_::dtor$2 @ 0x180110B45
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemCursorController2::DestroyCursorShape_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(a2 + 64);
}
