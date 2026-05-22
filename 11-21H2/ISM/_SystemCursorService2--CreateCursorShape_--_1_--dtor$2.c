/*
 * XREFs of _SystemCursorService2::CreateCursorShape_::_1_::dtor$2 @ 0x1800EC4AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemCursorService2::CreateCursorShape_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(a2 + 32);
}
