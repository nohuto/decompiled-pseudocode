/*
 * XREFs of _Spectre::GetHardwareVersion::Engine::GetHardwareVersion_::_1_::dtor$1 @ 0x1800E5C29
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::GetHardwareVersion::Engine::GetHardwareVersion_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>(a2 + 88);
}
