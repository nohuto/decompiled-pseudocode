/*
 * XREFs of ??1RenderGuard@SpectreRenderer@@QEAA@XZ @ 0x180017A38
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     _SpectreRenderer::Render_::_1_::dtor$0 @ 0x1800E462F (_SpectreRenderer--Render_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SpectreRenderer::RenderGuard::~RenderGuard(SpectreRenderer::RenderGuard *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)SpectreRenderer::s_pInstance + 5) + 1048LL))(
    *((_QWORD *)SpectreRenderer::s_pInstance + 5),
    *(_QWORD *)this,
    0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
}
