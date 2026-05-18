/*
 * XREFs of ??0SamplerState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z @ 0x18009E2A0
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??4?$array@V?$shared_ptr@VSampler@Engine@Spectre@@@std@@$0BA@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009E070 (--4-$array@V-$shared_ptr@VSampler@Engine@Spectre@@@std@@$0BA@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::SamplerState::SamplerState(__int64 a1, int a2, __int64 a3)
{
  unsigned int i; // ebx

  *(_QWORD *)a1 = &Spectre::Engine::SamplerState::`vftable';
  `eh vector constructor iterator'(
    (char *)(a1 + 8),
    256LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::Sampler>,16>::array<std::shared_ptr<Spectre::Engine::Sampler>,16>);
  `eh vector constructor iterator'(
    (char *)(a1 + 1544),
    256LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::Sampler>,16>::array<std::shared_ptr<Spectre::Engine::Sampler>,16>);
  `eh vector constructor iterator'(
    (char *)(a1 + 3080),
    256LL,
    6LL,
    (void (*)(void *))std::array<std::shared_ptr<Spectre::Engine::Sampler>,16>::array<std::shared_ptr<Spectre::Engine::Sampler>,16>);
  *(_DWORD *)(a1 + 4616) = a2;
  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    if ( _bittest(&a2, i) )
    {
      std::array<std::shared_ptr<Spectre::Engine::Sampler>,16>::operator=(
        (__int64 *)(((unsigned __int64)i << 8) + a1 + 3080),
        a3 + 448);
      a2 = *(_DWORD *)(a1 + 4616);
    }
  }
  return a1;
}
