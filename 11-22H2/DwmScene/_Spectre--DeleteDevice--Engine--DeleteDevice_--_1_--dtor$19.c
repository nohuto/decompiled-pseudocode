/*
 * XREFs of _Spectre::DeleteDevice::Engine::DeleteDevice_::_1_::dtor$19 @ 0x1800E5B1B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::DeleteDevice::Engine::DeleteDevice_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 152);
}
