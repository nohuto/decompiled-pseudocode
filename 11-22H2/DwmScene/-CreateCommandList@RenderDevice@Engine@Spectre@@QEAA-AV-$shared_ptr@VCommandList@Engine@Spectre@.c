/*
 * XREFs of ?CreateCommandList@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBVState@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18002612C
 * Callers:
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$CreateResource@VCommandList@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x1800246D0 (--$CreateResource@VCommandList@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_ptr.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::RenderDevice::CreateCommandList(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::CommandList>(a1, a2);
  v7 = *a2;
  v8 = std::string::string(v10, a4);
  Spectre::Engine::RendererResource::SetName(v7, v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}
