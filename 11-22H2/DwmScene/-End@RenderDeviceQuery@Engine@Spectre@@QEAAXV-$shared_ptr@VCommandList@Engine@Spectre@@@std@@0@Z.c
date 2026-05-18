/*
 * XREFs of ?End@RenderDeviceQuery@Engine@Spectre@@QEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800A1E04
 * Callers:
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@1AEAVRenderDevice@23@@Z @ 0x1800A2708 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@W4MarkerType@123@V-$shared_ptr@VCommand.c)
 *     ?Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A2948 (-Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@.c)
 *     ?End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A2D20 (-End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ @ 0x1800A2E40 (-EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ.c)
 *     ?Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A3834 (-Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::RenderDeviceQuery::End(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  void (__fastcall *v7)(__int64, _QWORD *); // r9
  __int64 v8; // r11
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 144), a2);
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 160), a3);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v11, a3);
  v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v12,
         a2);
  v7(v8, v6);
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v10 = (std::_Ref_count_base *)a3[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
