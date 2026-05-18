/*
 * XREFs of ?SetProjectionType@Camera@Engine@Spectre@@QEAAXW4EProjectionType@123@@Z @ 0x18001AFFC
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0 (-RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 * Callees:
 *     ?SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z @ 0x18005D24C (-SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z.c)
 */

void __fastcall Spectre::Engine::Camera::SetProjectionType(Spectre::Engine::Camera *a1, int a2)
{
  if ( a2 != *((_DWORD *)a1 + 79) )
  {
    *((_DWORD *)a1 + 79) = a2;
    Spectre::Engine::Camera::SetMatrixStagesChanged(a1, 2u);
  }
}
