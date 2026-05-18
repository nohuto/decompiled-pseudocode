/*
 * XREFs of ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4
 * Callers:
 *     ??$make_unique@VCommandListState@Engine@Spectre@@PEAVRenderDevice@23@AEBVState@23@$0A@@std@@YA?AV?$unique_ptr@VCommandListState@Engine@Spectre@@U?$default_delete@VCommandListState@Engine@Spectre@@@std@@@0@$$QEAPEAVRenderDevice@Engine@Spectre@@AEBVState@34@@Z @ 0x180038F80 (--$make_unique@VCommandListState@Engine@Spectre@@PEAVRenderDevice@23@AEBVState@23@$0A@@std@@YA-A.c)
 * Callees:
 *     ??0VertexLayoutState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009D7E0 (--0VertexLayoutState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ??0ShaderState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009D9D0 (--0ShaderState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ??0ConstantBufferState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z @ 0x18009DB50 (--0ConstantBufferState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z.c)
 *     ??0TextureState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z @ 0x18009DEF4 (--0TextureState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z.c)
 *     ??0SamplerState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z @ 0x18009E2A0 (--0SamplerState@Engine@Spectre@@QEAA@VShaderTypeGroup@12@AEBVState@12@@Z.c)
 *     ??0VertexBufferState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009E5C8 (--0VertexBufferState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ??0RenderStateState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009EA28 (--0RenderStateState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ??0IndexBufferState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009EC4C (--0IndexBufferState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ??0RenderTargetState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009EE1C (--0RenderTargetState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ??0ViewportState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009F268 (--0ViewportState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     ??0ScissorState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009F460 (--0ScissorState@Engine@Spectre@@QEAA@AEBVState@12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
Spectre::Engine::CommandListState *__fastcall Spectre::Engine::CommandListState::CommandListState(
        Spectre::Engine::CommandListState *this,
        struct Spectre::Engine::RenderDevice *a2,
        const struct Spectre::Engine::State *a3)
{
  int *v6; // rax
  int *v7; // rax
  int *v8; // rax
  const struct Spectre::Engine::State *v9; // rdx
  _QWORD *v10; // r8
  _QWORD *v11; // rcx
  char v14; // [rsp+78h] [rbp+10h] BYREF
  struct Spectre::Engine::State *v15; // [rsp+80h] [rbp+18h]
  char v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = a3;
  Spectre::Engine::ShaderState::ShaderState(this, a3);
  Spectre::Engine::VertexBufferState::VertexBufferState((Spectre::Engine::CommandListState *)((char *)this + 64), a3);
  v6 = (int *)(*(__int64 (__fastcall **)(struct Spectre::Engine::RenderDevice *, char *))(*(_QWORD *)a2 + 192LL))(
                a2,
                &v14);
  Spectre::Engine::ConstantBufferState::ConstantBufferState((__int64)this + 1160, *v6, (__int64)a3);
  v7 = (int *)(*(__int64 (__fastcall **)(struct Spectre::Engine::RenderDevice *, char *))(*(_QWORD *)a2 + 200LL))(
                a2,
                &v16);
  Spectre::Engine::TextureState::TextureState((__int64)this + 4632, *v7, (__int64)a3);
  Spectre::Engine::RenderTargetState::RenderTargetState((Spectre::Engine::CommandListState *)((char *)this + 9256), a3);
  Spectre::Engine::IndexBufferState::IndexBufferState((Spectre::Engine::CommandListState *)((char *)this + 9704), a3);
  Spectre::Engine::VertexLayoutState::VertexLayoutState((Spectre::Engine::CommandListState *)((char *)this + 9776), a3);
  v8 = (int *)(*(__int64 (__fastcall **)(struct Spectre::Engine::RenderDevice *, char *))(*(_QWORD *)a2 + 200LL))(
                a2,
                &v14);
  Spectre::Engine::SamplerState::SamplerState((__int64)this + 9848, *v8, (__int64)v15);
  Spectre::Engine::RenderStateState::RenderStateState((Spectre::Engine::CommandListState *)((char *)this + 14472), v15);
  Spectre::Engine::ViewportState::ViewportState((Spectre::Engine::CommandListState *)((char *)this + 14536), v15);
  Spectre::Engine::ScissorState::ScissorState((Spectre::Engine::CommandListState *)((char *)this + 14624), v9);
  *(_QWORD *)this = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::ShaderState'};
  *((_QWORD *)this + 8) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::VertexBufferState'};
  *((_QWORD *)this + 145) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::ConstantBufferState'};
  *((_QWORD *)this + 579) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::TextureState'};
  *((_QWORD *)this + 1157) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::RenderTargetState'};
  *((_QWORD *)this + 1213) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::IndexBufferState'};
  *((_QWORD *)this + 1222) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::VertexLayoutState'};
  *((_QWORD *)this + 1231) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::SamplerState'};
  *((_QWORD *)this + 1809) = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::RenderStateState'};
  *v10 = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::ViewportState'};
  *v11 = &Spectre::Engine::CommandListState::`vftable'{for `Spectre::Engine::ScissorState'};
  return this;
}
