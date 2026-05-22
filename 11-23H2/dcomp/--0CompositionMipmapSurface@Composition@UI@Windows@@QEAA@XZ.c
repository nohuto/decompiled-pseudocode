/*
 * XREFs of ??0CompositionMipmapSurface@Composition@UI@Windows@@QEAA@XZ @ 0x180156900
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionMipmapSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionMipmapSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@@Z @ 0x18015673C (--$MakeAndInitialize2@VCompositionMipmapSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionMipmapSurface *__fastcall Windows::UI::Composition::CompositionMipmapSurface::CompositionMipmapSurface(
        Windows::UI::Composition::CompositionMipmapSurface *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionMipmapSurface::`vftable'{for `Windows::UI::Composition::ProxyObject'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionMipmapSurface::`vftable'{for `Windows::UI::Composition::SurfaceBindPoint::IOwner'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::CompositionMipmapSurface::`vftable'{for `Windows::UI::Composition::IInvalidatableDeviceObject'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionMipmapSurface::Api::`vftable'{for `Windows::UI::Composition::ICompositionMipmapSurface'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionMipmapSurface::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionSurface>'};
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  return this;
}
