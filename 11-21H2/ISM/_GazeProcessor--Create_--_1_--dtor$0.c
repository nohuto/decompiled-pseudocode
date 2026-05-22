/*
 * XREFs of _GazeProcessor::Create_::_1_::dtor$0 @ 0x1801BAFEB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GazeProcessor::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 64));
}
