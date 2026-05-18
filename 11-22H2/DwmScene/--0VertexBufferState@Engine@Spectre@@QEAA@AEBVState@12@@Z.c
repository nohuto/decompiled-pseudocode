/*
 * XREFs of ??0VertexBufferState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009E5C8
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??4?$array@V?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@$0P@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009E7A4 (--4-$array@V-$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@$0P@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::VertexBufferState *__fastcall Spectre::Engine::VertexBufferState::VertexBufferState(
        Spectre::Engine::VertexBufferState *this,
        const struct Spectre::Engine::State *a2)
{
  *(_QWORD *)this = &Spectre::Engine::VertexBufferState::`vftable';
  `eh vector constructor iterator'(
    (char *)this + 8,
    16LL,
    15LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  `eh vector constructor iterator'(
    (char *)this + 248,
    16LL,
    15LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  `eh vector constructor iterator'(
    (char *)this + 488,
    16LL,
    15LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  *((_BYTE *)this + 1088) = 1;
  std::array<std::shared_ptr<Spectre::Engine::VertexBuffer>,15>::operator=((char *)this + 488, (char *)a2 + 760);
  *((_OWORD *)this + 53) = *(_OWORD *)((char *)a2 + 1000);
  *((_OWORD *)this + 54) = *(_OWORD *)((char *)a2 + 1016);
  *((_OWORD *)this + 55) = *(_OWORD *)((char *)a2 + 1032);
  *((_QWORD *)this + 112) = *((_QWORD *)a2 + 131);
  *((_DWORD *)this + 226) = *((_DWORD *)a2 + 264);
  *(_OWORD *)((char *)this + 1028) = *(_OWORD *)((char *)a2 + 1060);
  *(_OWORD *)((char *)this + 1044) = *(_OWORD *)((char *)a2 + 1076);
  *(_OWORD *)((char *)this + 1060) = *(_OWORD *)((char *)a2 + 1092);
  *(_QWORD *)((char *)this + 1076) = *(_QWORD *)((char *)a2 + 1108);
  *((_DWORD *)this + 271) = *((_DWORD *)a2 + 279);
  return this;
}
