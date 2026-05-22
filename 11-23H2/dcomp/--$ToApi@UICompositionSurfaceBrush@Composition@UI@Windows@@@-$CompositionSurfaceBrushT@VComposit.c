/*
 * XREFs of ??$ToApi@UICompositionSurfaceBrush@Composition@UI@Windows@@@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@SAXPEAVCompositionSurfaceBrush@123@V?$ComPtrRef@V?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180184DA4
 * Callers:
 *     ?get_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@456@@Z @ 0x1801857C0 (-get_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wind.c)
 *     ?get_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@456@@Z @ 0x180185EB0 (-get_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::ToApi<Windows::UI::Composition::ICompositionSurfaceBrush>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        __int64 *a2)
{
  __int64 result; // rax

  if ( this )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
    *a2 = (__int64)this + 152;
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
