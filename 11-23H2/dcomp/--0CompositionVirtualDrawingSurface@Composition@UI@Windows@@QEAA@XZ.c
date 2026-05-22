/*
 * XREFs of ??0CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAA@XZ @ 0x18003A6BC
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionVirtualDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@@Z @ 0x18003A5E8 (--$MakeAndInitialize2@VCompositionVirtualDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompos.c)
 * Callees:
 *     ??0DrawingSurfaceBase@Composition@UI@Windows@@IEAA@XZ @ 0x180061120 (--0DrawingSurfaceBase@Composition@UI@Windows@@IEAA@XZ.c)
 */

Windows::UI::Composition::CompositionVirtualDrawingSurface *__fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::CompositionVirtualDrawingSurface(
        Windows::UI::Composition::CompositionVirtualDrawingSurface *this)
{
  Windows::UI::Composition::DrawingSurfaceBase::DrawingSurfaceBase(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionVirtualDrawingSurface::`vftable'{for `Windows::UI::Composition::BindableSurface'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionDrawingSurface::`vftable'{for `Windows::UI::Composition::IInvalidatableDeviceObject'};
  *((_QWORD *)this + 24) = &Windows::UI::Composition::CompositionVirtualDrawingSurface::Api::`vftable'{for `Windows::UI::Composition::ICompositionVirtualDrawingSurface'};
  *((_QWORD *)this + 25) = &Windows::UI::Composition::CompositionVirtualDrawingSurface::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionDrawingSurface2,Windows::UI::Composition::ICompositionDrawingSurface,Windows::UI::Composition::ICompositionSurface>'};
  *((_QWORD *)this + 26) = &Windows::UI::Composition::CompositionVirtualDrawingSurface::Api::`vftable'{for `Windows::UI::Composition::ICompositionDrawingSurface'};
  *((_QWORD *)this + 27) = &Windows::UI::Composition::CompositionVirtualDrawingSurface::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionSurface>'};
  *((_QWORD *)this + 29) = &Windows::UI::Composition::CompositionVirtualDrawingSurface::Interop::`vftable';
  return this;
}
