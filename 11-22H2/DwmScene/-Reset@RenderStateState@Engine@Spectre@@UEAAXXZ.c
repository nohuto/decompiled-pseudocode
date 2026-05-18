/*
 * XREFs of ?Reset@RenderStateState@Engine@Spectre@@UEAAXXZ @ 0x18009EB00
 * Callers:
 *     ??0RenderStateState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009EA28 (--0RenderStateState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::RenderStateState::Reset(Spectre::Engine::RenderStateState *this)
{
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 3, (_QWORD *)this + 1);
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 11) = 1065353216;
  *((_DWORD *)this + 12) = 1065353216;
  *((_DWORD *)this + 13) = 1065353216;
  *((_DWORD *)this + 14) = 1065353216;
  *((_WORD *)this + 30) = 256;
}
