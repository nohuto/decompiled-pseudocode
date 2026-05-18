/*
 * XREFs of ??0State@Engine@Spectre@@QEAA@XZ @ 0x18005966C
 * Callers:
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::State *__fastcall Spectre::Engine::State::State(Spectre::Engine::State *this)
{
  `eh vector constructor iterator'(
    (char *)this,
    16LL,
    12LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  `eh vector constructor iterator'(
    (char *)this + 192,
    16LL,
    16LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  `eh vector constructor iterator'(
    (char *)this + 448,
    16LL,
    16LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_DWORD *)this + 188) = 0;
  `eh vector constructor iterator'(
    (char *)this + 760,
    16LL,
    15LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_DWORD *)this + 294) = 0;
  `eh vector constructor iterator'(
    (char *)this + 1184,
    16LL,
    8LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  *((_QWORD *)this + 164) = 0LL;
  *((_QWORD *)this + 165) = 0LL;
  if ( (char *)this + 1000 <= (char *)this + 1060 )
    memset_0((char *)this + 1000, 0, 4LL * ((char *)this + 1060 >= (char *)this + 1000 ? 0xF : 0));
  if ( (char *)this + 1060 <= (char *)this + 1120 )
    memset_0((char *)this + 1060, 0, 4LL * ((char *)this + 1120 >= (char *)this + 1060 ? 0xF : 0));
  return this;
}
