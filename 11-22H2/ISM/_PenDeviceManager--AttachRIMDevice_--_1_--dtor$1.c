/*
 * XREFs of _PenDeviceManager::AttachRIMDevice_::_1_::dtor$1 @ 0x1801B2CBC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenDeviceManager::AttachRIMDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 104));
}
