/*
 * XREFs of ?XMMatrixOrthographicRH@DirectX@@YQ?AUXMMATRIX@1@MMMM@Z @ 0x18001B478
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DC38 (-UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall DirectX::XMMatrixOrthographicRH(float a1)
{
  return 2.0 / a1;
}
