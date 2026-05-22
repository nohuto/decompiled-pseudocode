/*
 * XREFs of ?GetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAPEAUICompositionSurface@234@XZ @ 0x18015971C
 * Callers:
 *     ?get_Surface@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@345@@Z @ 0x18012BA80 (-get_Surface@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCo.c)
 *     ?put_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSurfaceBrush@456@@Z @ 0x180185870 (-put_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wind.c)
 *     ?put_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSurfaceBrush@456@@Z @ 0x180185F60 (-put_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UE.c)
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ICompositionSurface *__fastcall Windows::UI::Composition::CompositionSurfaceBrush::GetSurface(
        Windows::UI::Composition::CompositionSurfaceBrush *this)
{
  struct Windows::UI::Composition::ICompositionSurface *result; // rax

  result = (struct Windows::UI::Composition::ICompositionSurface *)*((_QWORD *)this + 33);
  if ( !result )
    return (struct Windows::UI::Composition::ICompositionSurface *)*((_QWORD *)this + 29);
  return result;
}
