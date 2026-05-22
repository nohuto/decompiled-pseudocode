/*
 * XREFs of _InjectionRawInputProvider::OnAttachDevice_::_1_::dtor$8 @ 0x1800CEE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InjectionRawInputProvider::OnAttachDevice_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 96));
}
