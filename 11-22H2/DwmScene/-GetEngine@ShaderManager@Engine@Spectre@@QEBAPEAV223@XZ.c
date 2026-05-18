/*
 * XREFs of ?GetEngine@ShaderManager@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18004FA78
 * Callers:
 *     ?SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z @ 0x180044718 (-SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z.c)
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 *     ?DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180060590 (-DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 *     ?AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180098B0C (-AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV-$vect.c)
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 * Callees:
 *     <none>
 */

struct Spectre::Engine::Engine *__fastcall Spectre::Engine::ShaderManager::GetEngine(
        Spectre::Engine::ShaderManager *this)
{
  return (struct Spectre::Engine::Engine *)*((_QWORD *)this + 2336);
}
