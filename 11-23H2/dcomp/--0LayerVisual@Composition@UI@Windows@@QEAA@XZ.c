/*
 * XREFs of ??0LayerVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18006CF88
 * Callers:
 *     ??$MakeAndInitialize2@VLayerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVLayerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006CEE0 (--$MakeAndInitialize2@VLayerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL.c)
 * Callees:
 *     ??0ContainerVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18006CFEC (--0ContainerVisual@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::LayerVisual *__fastcall Windows::UI::Composition::LayerVisual::LayerVisual(
        Windows::UI::Composition::LayerVisual *this)
{
  Windows::UI::Composition::ContainerVisual::ContainerVisual(this);
  *(_QWORD *)this = &Windows::UI::Composition::LayerVisual::`vftable';
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 39) = &Windows::UI::Composition::LayerVisual::Api::`vftable'{for `Windows::UI::Composition::ILayerVisual'};
  *((_QWORD *)this + 40) = &Windows::UI::Composition::LayerVisual::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ILayerVisual2>'};
  *((_QWORD *)this + 42) = &Windows::UI::Composition::LayerVisual::Partner::`vftable';
  return this;
}
