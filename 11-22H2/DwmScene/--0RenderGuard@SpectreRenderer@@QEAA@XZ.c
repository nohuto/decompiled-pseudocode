/*
 * XREFs of ??0RenderGuard@SpectreRenderer@@QEAA@XZ @ 0x180017818
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SpectreRenderer::RenderGuard *__fastcall SpectreRenderer::RenderGuard::RenderGuard(SpectreRenderer::RenderGuard *this)
{
  SpectreRenderer *v2; // rbx
  __int64 v3; // rsi
  void (__fastcall *v4)(__int64, _QWORD, SpectreRenderer::RenderGuard *); // rdi

  *(_QWORD *)this = 0LL;
  v2 = SpectreRenderer::s_pInstance;
  v3 = *((_QWORD *)SpectreRenderer::s_pInstance + 5);
  v4 = *(void (__fastcall **)(__int64, _QWORD, SpectreRenderer::RenderGuard *))(*(_QWORD *)v3 + 1048LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
  v4(v3, *((_QWORD *)v2 + 6), this);
  return this;
}
