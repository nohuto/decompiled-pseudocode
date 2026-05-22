/*
 * XREFs of _InputForwardProcessor::Create_::_1_::dtor$1 @ 0x1801A8CB7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputForwardProcessor::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 72));
}
