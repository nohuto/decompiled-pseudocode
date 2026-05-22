/*
 * XREFs of _DockDeviceCollection::Create_::_1_::dtor$1 @ 0x1800F0F2B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DockDeviceCollection::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 32));
}
