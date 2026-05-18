/*
 * XREFs of ?Begin@RenderDeviceQuery@Engine@Spectre@@QEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A1D90
 * Callers:
 *     ?Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A2948 (-Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderDeviceQuery::Begin(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  void (__fastcall *v4)(__int64, _QWORD *); // r8
  __int64 v5; // r9
  std::_Ref_count_base *v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 144), a2);
  v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v7, a2);
  v4(v5, v3);
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
