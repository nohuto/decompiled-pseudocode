/*
 * XREFs of _SystemCursorServiceBase::InitializeBase_::_1_::dtor$0 @ 0x18005839B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemCursorServiceBase::InitializeBase_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SystemCursors::WindowsCompositionGlobals>::~unique_ptr<SystemCursors::WindowsCompositionGlobals>(a2 + 72);
}
