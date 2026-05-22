/*
 * XREFs of _Win32kInterop::Create_::_1_::dtor$0 @ 0x1800807C5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 48));
}
