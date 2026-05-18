/*
 * XREFs of ?GetDeviceRenderTarget@FrameBuffer@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D0540
 * Callers:
 *     ?ClearRenderTarget@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@QEBM@Z @ 0x1800CFDC0 (-ClearRenderTarget@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VFr_ea_1800CFDC0.c)
 *     ?SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$array@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@6@@Z @ 0x1800D15E0 (-SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$array@V-$shared_ptr@VFram.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180027C68 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engine@Spectre@@V.c)
 */

_QWORD *__fastcall Spectre::Engine::FrameBuffer::GetDeviceRenderTarget(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v4 = std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceFrameBuffer>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
         (_QWORD *)(a1 + 120),
         (__int64)v6,
         &v7);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(*(_QWORD *)v4 + 40LL));
  return a2;
}
