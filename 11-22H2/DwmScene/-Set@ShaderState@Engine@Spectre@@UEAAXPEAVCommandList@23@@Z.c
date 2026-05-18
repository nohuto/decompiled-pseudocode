/*
 * XREFs of ?Set@ShaderState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009DAD0
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ShaderState::Set(
        Spectre::Engine::ShaderState *this,
        struct Spectre::Engine::CommandList *a2)
{
  __int64 *v2; // rdi
  _QWORD *v5; // rdx

  v2 = (__int64 *)((char *)this + 24);
  v5 = (_QWORD *)((char *)this + 8);
  if ( *((_BYTE *)this + 56) || std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(v2, v5) )
  {
    std::shared_ptr<Spectre::Engine::Light>::operator=(v2, v5);
    (*(void (__fastcall **)(struct Spectre::Engine::CommandList *, __int64 *))(*(_QWORD *)a2 + 120LL))(a2, v2);
  }
  *((_BYTE *)this + 56) = 0;
}
