/*
 * XREFs of ?GetExtension@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@XZ @ 0x1800609B4
 * Callers:
 *     ?AttachShaderFamily@Material@Engine@Spectre@@AEAAXV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180044188 (-AttachShaderFamily@Material@Engine@Spectre@@AEAAXV-$shared_ptr@VShaderFamily@Engine@Spectre@@@s.c)
 *     ?OnTextureAsyncLoaded@Material@Engine@Spectre@@QEAAXV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@_K@Z @ 0x180044474 (-OnTextureAsyncLoaded@Material@Engine@Spectre@@QEAAXV-$shared_ptr@VTexture@Engine@Spectre@@@std@.c)
 *     ??RMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@5@@Z @ 0x18004AF60 (--RMaterialLoadedFnc@MeshInstance@Engine@Spectre@@UEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Ut.c)
 *     ?PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004C270 (-PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShaderFamily::GetExtension(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 456));
  return v2;
}
