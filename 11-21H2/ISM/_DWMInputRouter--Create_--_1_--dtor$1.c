/*
 * XREFs of _DWMInputRouter::Create_::_1_::dtor$1 @ 0x18019A3D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DWMInputRouter::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 88));
}
