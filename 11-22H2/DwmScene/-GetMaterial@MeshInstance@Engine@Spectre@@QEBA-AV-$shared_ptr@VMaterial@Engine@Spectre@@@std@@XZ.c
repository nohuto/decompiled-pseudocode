/*
 * XREFs of ?GetMaterial@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x18004B964
 * Callers:
 *     ?PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004C270 (-PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?Update@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004CB70 (-Update@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?OnMeshAttach@StandardShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@Z @ 0x18007E3F0 (-OnMeshAttach@StandardShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@.c)
 *     ?ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$shared_ptr@VTexture@Engine@Spectre@@@6@2@Z @ 0x180095DA0 (-ApplyBloom@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ?GetMaterial@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@_K@Z @ 0x18004B988 (-GetMaterial@MeshInstance@Engine@Spectre@@QEBA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@_K.c)
 */

__int64 __fastcall Spectre::Engine::MeshInstance::GetMaterial(__int64 a1, __int64 a2)
{
  Spectre::Engine::MeshInstance::GetMaterial(a1, a2, 0LL);
  return a2;
}
