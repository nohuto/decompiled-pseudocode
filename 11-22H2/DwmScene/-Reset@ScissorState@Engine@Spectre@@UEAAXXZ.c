/*
 * XREFs of ?Reset@ScissorState@Engine@Spectre@@UEAAXXZ @ 0x18009F500
 * Callers:
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ScissorState::Reset(Spectre::Engine::ScissorState *this)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)((char *)this + 40);
  *((_BYTE *)this + 56) = 1;
  *(_OWORD *)((char *)this + 8) = v1;
}
