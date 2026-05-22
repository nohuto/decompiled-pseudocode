/*
 * XREFs of _DeviceInputHost::Create_::_1_::dtor$1 @ 0x18009729E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeviceInputHost::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 56));
}
