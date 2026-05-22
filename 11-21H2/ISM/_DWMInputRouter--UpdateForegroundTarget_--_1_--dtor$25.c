/*
 * XREFs of _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$25 @ 0x1800577A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DWMInputRouter::UpdateForegroundTarget_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 200));
}
