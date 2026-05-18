/*
 * XREFs of ?SetScissorRect@Camera@Engine@Spectre@@QEAAXUScissorRect@23@@Z @ 0x18005D3D4
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@5@@Z @ 0x180072F50 (-Display@ImageProcessingManager@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spec.c)
 *     ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0 (-RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Camera::SetScissorRect(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 372) = *a2;
  *(_BYTE *)(a1 + 388) = 1;
}
