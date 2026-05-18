/*
 * XREFs of ?Reset@ViewportState@Engine@Spectre@@UEAAXXZ @ 0x18009F370
 * Callers:
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ViewportState::Reset(Spectre::Engine::ViewportState *this)
{
  __int128 v1; // xmm0
  __int64 v2; // xmm1_8

  v1 = *(_OWORD *)((char *)this + 56);
  *((_BYTE *)this + 80) = 1;
  v2 = *((_QWORD *)this + 9);
  *(_OWORD *)((char *)this + 8) = v1;
  *((_QWORD *)this + 3) = v2;
}
