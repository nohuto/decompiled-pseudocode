/*
 * XREFs of ??0RenderTargetState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009EE1C
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$array@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009EFDC (--4-$array@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::RenderTargetState *__fastcall Spectre::Engine::RenderTargetState::RenderTargetState(
        Spectre::Engine::RenderTargetState *this,
        const struct Spectre::Engine::State *a2)
{
  *(_QWORD *)this = &Spectre::Engine::RenderTargetState::`vftable';
  `eh vector constructor iterator'(
    (char *)this + 8,
    16LL,
    8LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  `eh vector constructor iterator'(
    (char *)this + 136,
    16LL,
    8LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  `eh vector constructor iterator'(
    (char *)this + 264,
    16LL,
    8LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_BYTE *)this + 440) = 1;
  std::array<std::shared_ptr<Spectre::Engine::FrameBuffer>,8>::operator=((char *)this + 264, (char *)a2 + 1184);
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 53, (_QWORD *)a2 + 164);
  return this;
}
