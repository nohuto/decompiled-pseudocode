/*
 * XREFs of ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057404
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@UVector2@Math@Utils@3@1W4EViewportMode@Camera@23@@Z @ 0x180057470 (-AddCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@UVector2@.c)
 *     ?GetViewportMax@Camera@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18005BC10 (-GetViewportMax@Camera@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetViewportMin@Camera@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18005BC28 (-GetViewportMin@Camera@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetViewportMode@Camera@Engine@Spectre@@QEBA?AW4EViewportMode@123@XZ @ 0x18005BC40 (-GetViewportMode@Camera@Engine@Spectre@@QEBA-AW4EViewportMode@123@XZ.c)
 */

__int64 __fastcall Spectre::Engine::Display::AddCamera(__int64 a1, _QWORD *a2)
{
  unsigned int ViewportMode; // eax
  __int64 v3; // rcx
  unsigned int *ViewportMax; // rax
  __m128 v5; // xmm1
  __m128 v6; // xmm3
  __int64 v7; // rcx
  unsigned int *ViewportMin; // rax
  int v9; // r8d
  int v10; // r10d
  int v11; // r11d
  char v13; // [rsp+48h] [rbp+10h] BYREF
  char v14; // [rsp+50h] [rbp+18h] BYREF

  ViewportMode = Spectre::Engine::Camera::GetViewportMode(*a2);
  ViewportMax = (unsigned int *)Spectre::Engine::Camera::GetViewportMax(v3, &v13, ViewportMode);
  v5 = (__m128)*ViewportMax;
  v6 = (__m128)ViewportMax[1];
  ViewportMin = (unsigned int *)Spectre::Engine::Camera::GetViewportMin(v7, &v14);
  return Spectre::Engine::Display::AddCamera(
           v11,
           v10,
           _mm_unpacklo_ps((__m128)*ViewportMin, (__m128)ViewportMin[1]).m128_u32[0],
           _mm_unpacklo_ps(v5, v6).m128_u32[0],
           v9);
}
