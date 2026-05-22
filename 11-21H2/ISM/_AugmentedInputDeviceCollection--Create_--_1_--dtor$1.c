/*
 * XREFs of _AugmentedInputDeviceCollection::Create_::_1_::dtor$1 @ 0x180055348
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AugmentedInputDeviceCollection::Create_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 120));
}
