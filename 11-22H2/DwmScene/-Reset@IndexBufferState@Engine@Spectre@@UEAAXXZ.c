/*
 * XREFs of ?Reset@IndexBufferState@Engine@Spectre@@UEAAXXZ @ 0x18009ED40
 * Callers:
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::IndexBufferState::Reset(Spectre::Engine::IndexBufferState *this)
{
  *((_BYTE *)this + 68) = 1;
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 1, (_QWORD *)this + 5);
  *((_DWORD *)this + 14) = *((_DWORD *)this + 16);
}
