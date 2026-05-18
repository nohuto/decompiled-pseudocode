/*
 * XREFs of ?Set@VertexLayoutState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009D910
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??4?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003B558 (--4-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::VertexLayoutState::Set(
        Spectre::Engine::VertexLayoutState *this,
        struct Spectre::Engine::CommandList *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v5; // rdx

  v2 = (_QWORD *)((char *)this + 24);
  v5 = (_QWORD *)((char *)this + 8);
  if ( *((_BYTE *)this + 68) || std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>((_QWORD *)this + 3, v5) )
  {
    std::shared_ptr<Spectre::Engine::SceneNode const>::operator=(v2, v5);
    (*(void (__fastcall **)(struct Spectre::Engine::CommandList *, _QWORD *))(*(_QWORD *)a2 + 152LL))(a2, v2);
  }
  if ( *((_BYTE *)this + 68) || *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    *((_DWORD *)this + 15) = *((_DWORD *)this + 14);
    (*(void (__fastcall **)(struct Spectre::Engine::CommandList *))(*(_QWORD *)a2 + 216LL))(a2);
  }
  *((_BYTE *)this + 68) = 0;
}
