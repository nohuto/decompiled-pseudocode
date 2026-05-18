/*
 * XREFs of ?Set@VertexBufferState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009E900
 * Callers:
 *     ?Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009FC60 (-Set@CommandListState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::VertexBufferState::Set(
        Spectre::Engine::VertexBufferState *this,
        struct Spectre::Engine::CommandList *a2)
{
  _DWORD *v3; // rbx
  __int64 *v5; // rdi
  unsigned int i; // ebp

  v3 = (_DWORD *)((char *)this + 908);
  v5 = (__int64 *)((char *)this + 248);
  for ( i = 0; i < 0xF; ++i )
  {
    if ( *((_BYTE *)this + 1088)
      || std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(v5, v5 - 30)
      || *(v3 - 30) != *(v3 - 45)
      || v3[15] != *v3 )
    {
      std::shared_ptr<Spectre::Engine::Light>::operator=(v5, v5 - 30);
      *(v3 - 30) = *(v3 - 45);
      v3[15] = *v3;
      (*(void (__fastcall **)(struct Spectre::Engine::CommandList *, __int64 *, _QWORD))(*(_QWORD *)a2 + 144LL))(
        a2,
        v5,
        i);
    }
    v5 += 2;
    ++v3;
  }
  *((_BYTE *)this + 1088) = 0;
}
