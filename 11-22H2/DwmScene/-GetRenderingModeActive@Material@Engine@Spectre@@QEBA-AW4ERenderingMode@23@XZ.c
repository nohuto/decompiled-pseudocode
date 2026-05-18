/*
 * XREFs of ?GetRenderingModeActive@Material@Engine@Spectre@@QEBA?AW4ERenderingMode@23@XZ @ 0x1800443CC
 * Callers:
 *     ?OnMeshUpdate@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_KAEBVFrameData@23@@Z @ 0x18009B520 (-OnMeshUpdate@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_KAEBVFrameData@23@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Material::GetRenderingModeActive(__int64 a1)
{
  return Spectre::Engine::Material::s_renderingModeOverride[*(int *)(a1 + 188)];
}
