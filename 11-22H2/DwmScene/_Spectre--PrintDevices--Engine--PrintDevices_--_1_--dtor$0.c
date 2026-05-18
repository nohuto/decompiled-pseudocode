/*
 * XREFs of _Spectre::PrintDevices::Engine::PrintDevices_::_1_::dtor$0 @ 0x1800E5DD3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::PrintDevices::Engine::PrintDevices_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>(a2 + 96);
}
