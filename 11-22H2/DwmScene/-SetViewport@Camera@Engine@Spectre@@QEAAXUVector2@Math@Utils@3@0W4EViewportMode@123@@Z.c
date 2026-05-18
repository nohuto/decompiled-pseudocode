/*
 * XREFs of ?SetViewport@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@0W4EViewportMode@123@@Z @ 0x18005D4E4
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ?SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z @ 0x18005D24C (-SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z.c)
 */

void __fastcall Spectre::Engine::Camera::SetViewport(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  char v4; // al
  _DWORD *v5; // rdx

  v4 = _mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 344), (__m128)a2));
  v5 = (_DWORD *)(a1 + 352);
  if ( (v4 & 3) != 3
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)v5, (__m128)a3)) & 3) != 3
    || a4 != *(_DWORD *)(a1 + 360) )
  {
    *(_QWORD *)(a1 + 344) = a2;
    *v5 = a3;
    *(_DWORD *)(a1 + 356) = HIDWORD(a3);
    *(_DWORD *)(a1 + 360) = a4;
    Spectre::Engine::Camera::SetMatrixStagesChanged((Spectre::Engine::Camera *)a1, 4);
  }
}
