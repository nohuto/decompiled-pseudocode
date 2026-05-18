/*
 * XREFs of ?Create@DeviceVertexLayout@Engine@Spectre@@QEAAXAEAVRenderDevice@23@VVertexLayoutDesc@VertexLayoutBase@23@AEBVShaderProgram@23@@Z @ 0x18008C120
 * Callers:
 *     ?AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008BE40 (-AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@.c)
 * Callees:
 *     ??4?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008693C (--4-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementDesc@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::DeviceVertexLayout::Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a1 + 96) = *(_DWORD *)a3;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a3 + 8);
  std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::operator=(
    (_QWORD *)(a1 + 112),
    (_QWORD *)(a3 + 16));
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 40);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a4);
  std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Tidy(a3 + 16);
}
