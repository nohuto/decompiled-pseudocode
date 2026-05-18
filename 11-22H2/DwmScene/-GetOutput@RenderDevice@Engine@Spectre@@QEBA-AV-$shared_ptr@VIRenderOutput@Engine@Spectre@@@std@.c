/*
 * XREFs of ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618
 * Callers:
 *     ?ClearBackBuffer@RenderDevice@Engine@Spectre@@UEAAXUColor@Math@Utils@3@I@Z @ 0x180026000 (-ClearBackBuffer@RenderDevice@Engine@Spectre@@UEAAXUColor@Math@Utils@3@I@Z.c)
 *     ?UpdateRenderTarget@RenderDevice@Engine@Spectre@@UEAAXPEAXMMMM@Z @ 0x180027360 (-UpdateRenderTarget@RenderDevice@Engine@Spectre@@UEAAXPEAXMMMM@Z.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     _anonymous_namespace_::GetFirstRenderOutput @ 0x18003431C (_anonymous_namespace_--GetFirstRenderOutput.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z @ 0x1800C7260 (-SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?at@?$vector@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEBAAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@2@_K@Z @ 0x180027878 (-at@-$vector@V-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V-$allocator@V-$sha_ea_180027878.c)
 *     ?VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2F0 (-VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ.c)
 */

_QWORD *__fastcall Spectre::Engine::RenderDevice::GetOutput(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v6; // rax

  Spectre::Engine::Lockable::VerifyExclusiveLock((Spectre::Engine::Lockable *)(a1 + 24));
  v6 = (_QWORD *)std::vector<std::shared_ptr<Spectre::Engine::IRenderOutput>>::at(a1 + 248, a3);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v6);
  return a2;
}
