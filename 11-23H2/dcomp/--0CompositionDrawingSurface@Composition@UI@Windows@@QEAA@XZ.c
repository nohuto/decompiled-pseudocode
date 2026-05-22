/*
 * XREFs of ??0CompositionDrawingSurface@Composition@UI@Windows@@QEAA@XZ @ 0x180061378
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEBUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@AEA_NAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEBUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@AEA_N6@Z @ 0x1800613E8 (--$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 *     ??$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@_N_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@$$QEA_N6@Z @ 0x1801938D0 (--$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAV_ea_1801938D0.c)
 * Callees:
 *     ??0DrawingSurfaceBase@Composition@UI@Windows@@IEAA@XZ @ 0x180061120 (--0DrawingSurfaceBase@Composition@UI@Windows@@IEAA@XZ.c)
 */

Windows::UI::Composition::CompositionDrawingSurface *__fastcall Windows::UI::Composition::CompositionDrawingSurface::CompositionDrawingSurface(
        Windows::UI::Composition::CompositionDrawingSurface *this)
{
  Windows::UI::Composition::DrawingSurfaceBase::DrawingSurfaceBase(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionDrawingSurface::`vftable'{for `Windows::UI::Composition::BindableSurface'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionDrawingSurface::`vftable'{for `Windows::UI::Composition::IInvalidatableDeviceObject'};
  *((_QWORD *)this + 24) = &Windows::UI::Composition::CompositionDrawingSurface::Api::`vftable';
  *((_QWORD *)this + 25) = &Windows::UI::Composition::CompositionDrawingSurface::Api::`vftable'{for `Windows::UI::Composition::ICompositionDrawingSurface'};
  *((_QWORD *)this + 26) = &Windows::UI::Composition::CompositionDrawingSurface::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionSurface>'};
  *((_QWORD *)this + 28) = &Windows::UI::Composition::CompositionDrawingSurface::Interop::`vftable';
  return this;
}
