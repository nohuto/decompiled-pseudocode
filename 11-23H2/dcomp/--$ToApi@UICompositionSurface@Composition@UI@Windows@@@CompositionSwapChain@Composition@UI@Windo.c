/*
 * XREFs of ??$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionSwapChain@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801223CC
 * Callers:
 *     ?CreateCompositionSurfaceForHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAUICompositionSurface@234@@Z @ 0x1801255A8 (-CreateCompositionSurfaceForHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAUICom.c)
 *     ?CreateCompositionSurfaceForSwapChain@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@234@@Z @ 0x18012564C (-CreateCompositionSurfaceForSwapChain@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIUnknown.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSwapChain::ToApi<Windows::UI::Composition::ICompositionSurface>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        __int64 *a2)
{
  __int64 result; // rax

  if ( this )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
    *a2 = (__int64)this + 128;
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
