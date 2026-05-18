/*
 * XREFs of _Spectre::DeleteDevice::Engine::DeleteDevice_::_1_::dtor$3 @ 0x1800E469B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::DeleteDevice::Engine::DeleteDevice_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 136);
}
