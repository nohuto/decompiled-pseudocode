/*
 * XREFs of _Spectre::Engine::ArrayBuffer::UpdateDeviceBuffer_::_1_::dtor$0 @ 0x1800E3CF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ArrayBuffer::UpdateDeviceBuffer_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 48);
}
