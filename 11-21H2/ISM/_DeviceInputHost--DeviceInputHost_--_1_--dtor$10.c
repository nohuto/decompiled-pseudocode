/*
 * XREFs of _DeviceInputHost::DeviceInputHost_::_1_::dtor$10 @ 0x1800800F7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeviceInputHost::DeviceInputHost_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 96));
}
