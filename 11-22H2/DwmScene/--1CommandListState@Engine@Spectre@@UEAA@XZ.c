/*
 * XREFs of ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798
 * Callers:
 *     ??_ECommandListState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009FA40 (--_ECommandListState@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1VertexLayoutState@Engine@Spectre@@UEAA@XZ @ 0x18009D84C (--1VertexLayoutState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ConstantBufferState@Engine@Spectre@@UEAA@XZ @ 0x18009DC40 (--1ConstantBufferState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1TextureState@Engine@Spectre@@UEAA@XZ @ 0x18009DFE8 (--1TextureState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1SamplerState@Engine@Spectre@@UEAA@XZ @ 0x18009E394 (--1SamplerState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1VertexBufferState@Engine@Spectre@@UEAA@XZ @ 0x18009E720 (--1VertexBufferState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1RenderStateState@Engine@Spectre@@UEAA@XZ @ 0x18009EA78 (--1RenderStateState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1IndexBufferState@Engine@Spectre@@UEAA@XZ @ 0x18009ECB4 (--1IndexBufferState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1RenderTargetState@Engine@Spectre@@UEAA@XZ @ 0x18009EF24 (--1RenderTargetState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ViewportState@Engine@Spectre@@UEAA@XZ @ 0x18009F2C0 (--1ViewportState@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ScissorState@Engine@Spectre@@UEAA@XZ @ 0x18009F4A0 (--1ScissorState@Engine@Spectre@@UEAA@XZ.c)
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 */

void __fastcall Spectre::Engine::CommandListState::~CommandListState(Spectre::Engine::CommandListState *this)
{
  Spectre::Engine::TextureState *v1; // r13
  Spectre::Engine::RenderTargetState *v2; // r12
  Spectre::Engine::IndexBufferState *v3; // rbp
  Spectre::Engine::VertexLayoutState *v4; // r15
  Spectre::Engine::SamplerState *v5; // r14
  Spectre::Engine::RenderStateState *v6; // rsi
  Spectre::Engine::ViewportState *v7; // rdi
  Spectre::Engine::ScissorState *v8; // rbx

  *(_QWORD *)this = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::ShaderState'};
  v1 = (Spectre::Engine::CommandListState *)((char *)this + 4632);
  *((_QWORD *)this + 579) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::TextureState'};
  v2 = (Spectre::Engine::CommandListState *)((char *)this + 9256);
  *((_QWORD *)this + 1157) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::RenderTargetState'};
  v3 = (Spectre::Engine::CommandListState *)((char *)this + 9704);
  *((_QWORD *)this + 1213) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::IndexBufferState'};
  v4 = (Spectre::Engine::CommandListState *)((char *)this + 9776);
  *((_QWORD *)this + 1222) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::VertexLayoutState'};
  v5 = (Spectre::Engine::CommandListState *)((char *)this + 9848);
  *((_QWORD *)this + 1231) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::SamplerState'};
  v6 = (Spectre::Engine::CommandListState *)((char *)this + 14472);
  *((_QWORD *)this + 1809) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::RenderStateState'};
  *((_QWORD *)this + 8) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::VertexBufferState'};
  v7 = (Spectre::Engine::CommandListState *)((char *)this + 14536);
  *((_QWORD *)this + 1817) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::ViewportState'};
  *((_QWORD *)this + 145) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::ConstantBufferState'};
  v8 = (Spectre::Engine::CommandListState *)((char *)this + 14624);
  *((_QWORD *)this + 1828) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::ScissorState'};
  Spectre::Engine::CommandListState::Reset(this);
  Spectre::Engine::ScissorState::~ScissorState(v8);
  Spectre::Engine::ViewportState::~ViewportState(v7);
  Spectre::Engine::RenderStateState::~RenderStateState(v6);
  Spectre::Engine::SamplerState::~SamplerState(v5);
  Spectre::Engine::VertexLayoutState::~VertexLayoutState(v4);
  Spectre::Engine::IndexBufferState::~IndexBufferState(v3);
  Spectre::Engine::RenderTargetState::~RenderTargetState(v2);
  Spectre::Engine::TextureState::~TextureState(v1);
  Spectre::Engine::ConstantBufferState::~ConstantBufferState((Spectre::Engine::CommandListState *)((char *)this + 1160));
  Spectre::Engine::VertexBufferState::~VertexBufferState((Spectre::Engine::CommandListState *)((char *)this + 64));
  Spectre::Engine::ShaderState::~ShaderState(this);
}
