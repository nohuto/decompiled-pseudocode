/*
 * XREFs of _Spectre::Shutdown::Engine::Shutdown_::_1_::dtor$0 @ 0x1800E46FF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Shutdown::Engine::Shutdown_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(a2 + 32);
}
