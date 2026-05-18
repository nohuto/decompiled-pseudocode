/*
 * XREFs of _Spectre::Engine::ShaderFamily::GetMaterialInstances_::_1_::dtor$0 @ 0x1800E5BCF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShaderFamily::GetMaterialInstances_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>(a2 + 40);
}
