/*
 * XREFs of _Spectre::CreateDeviceInternal::Engine::CreateDeviceInternal_::_1_::dtor$15 @ 0x1800E416B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::CreateDeviceInternal::Engine::CreateDeviceInternal_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 112);
}
