/*
 * XREFs of _DockableDeviceCollection::Create_::_1_::dtor$1 @ 0x1800F238F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DockableDeviceCollection::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 32));
}
