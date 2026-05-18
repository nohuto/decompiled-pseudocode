/*
 * XREFs of ?Reset@ShaderState@Engine@Spectre@@UEAAXXZ @ 0x18009DAB0
 * Callers:
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShaderState::Reset(Spectre::Engine::ShaderState *this)
{
  *((_BYTE *)this + 56) = 1;
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 1, (_QWORD *)this + 5);
}
