/*
 * XREFs of _CallControlDeviceCollection::Create_::_1_::dtor$1 @ 0x18008081F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallControlDeviceCollection::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 96));
}
