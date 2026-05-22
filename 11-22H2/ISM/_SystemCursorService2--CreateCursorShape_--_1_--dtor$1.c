/*
 * XREFs of _SystemCursorService2::CreateCursorShape_::_1_::dtor$1 @ 0x180113C51
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SystemCursorService2::CreateCursorShape_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(a2 + 32);
}
