/*
 * XREFs of ?Reset@TextureState@Engine@Spectre@@UEAAXXZ @ 0x18009E110
 * Callers:
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$array@V?$shared_ptr@VSampler@Engine@Spectre@@@std@@$0BA@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009E070 (--4-$array@V-$shared_ptr@VSampler@Engine@Spectre@@@std@@$0BA@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::TextureState::Reset(Spectre::Engine::TextureState *this)
{
  unsigned int i; // ebx
  int v3; // eax

  *((_BYTE *)this + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    v3 = *((_DWORD *)this + 1154);
    if ( _bittest(&v3, i) )
      std::array<std::shared_ptr<Spectre::Engine::Sampler>,16>::operator=(
        (__int64 *)this + 32 * (unsigned __int64)i + 1,
        (__int64)this + 256 * (unsigned __int64)i + 3080);
  }
}
