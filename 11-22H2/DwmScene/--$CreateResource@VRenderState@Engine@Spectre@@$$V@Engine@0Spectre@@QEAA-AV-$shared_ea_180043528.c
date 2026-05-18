/*
 * XREFs of ??$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@XZ @ 0x180043528
 * Callers:
 *     ?SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z @ 0x180044718 (-SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z.c)
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180098B0C (-AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV-$vect.c)
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ??$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180043474 (--$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRenderS.c)
 */

__int64 __fastcall Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(__int64 *a1, __int64 a2)
{
  Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(a1, a2);
  return a2;
}
