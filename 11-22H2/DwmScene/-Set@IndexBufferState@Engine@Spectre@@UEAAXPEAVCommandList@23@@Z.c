/*
 * XREFs of ?Set@IndexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009ED70
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::IndexBufferState::Set(
        Spectre::Engine::IndexBufferState *this,
        struct Spectre::Engine::CommandList *a2)
{
  if ( *((_BYTE *)this + 68)
    || std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>((_QWORD *)this + 3, (_QWORD *)this + 1)
    || *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 3, (_QWORD *)this + 1);
    *((_DWORD *)this + 15) = *((_DWORD *)this + 14);
    (*(void (__fastcall **)(struct Spectre::Engine::CommandList *, char *))(*(_QWORD *)a2 + 160LL))(
      a2,
      (char *)this + 24);
  }
  *((_BYTE *)this + 68) = 0;
}
