/*
 * XREFs of ??$make_unique@VCommandListState@Engine@Spectre@@PEAVRenderDevice@23@AEBVState@23@$0A@@std@@YA?AV?$unique_ptr@VCommandListState@Engine@Spectre@@U?$default_delete@VCommandListState@Engine@Spectre@@@std@@@0@$$QEAPEAVRenderDevice@Engine@Spectre@@AEBVState@34@@Z @ 0x180038F80
 * Callers:
 *     ?Create@CommandList@Engine@Spectre@@UEAA_NAEBVState@23@@Z @ 0x1800391E0 (-Create@CommandList@Engine@Spectre@@UEAA_NAEBVState@23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<Spectre::Engine::CommandListState,Spectre::Engine::RenderDevice *,Spectre::Engine::State const &,0>(
        _QWORD *a1,
        struct Spectre::Engine::RenderDevice **a2,
        const struct Spectre::Engine::State *a3)
{
  __int64 v6; // rdi
  Spectre::Engine::CommandListState *v7; // rax

  v6 = 0LL;
  v7 = (Spectre::Engine::CommandListState *)operator new(0x3960uLL);
  if ( v7 )
    v6 = Spectre::Engine::CommandListState::CommandListState(v7, *a2, a3);
  *a1 = v6;
  return a1;
}
