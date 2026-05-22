/*
 * XREFs of _MouseProcessor::Create_::_1_::dtor$0 @ 0x180054E82
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MouseProcessor::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 64));
}
