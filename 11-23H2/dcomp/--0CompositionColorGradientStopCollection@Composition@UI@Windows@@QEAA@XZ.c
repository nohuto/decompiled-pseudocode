/*
 * XREFs of ??0CompositionColorGradientStopCollection@Composition@UI@Windows@@QEAA@XZ @ 0x18005E07C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionColorGradientStopCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVCompositionGradientBrush@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorGradientStopCollection@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVCompositionGradientBrush@456@@Z @ 0x18005DFD0 (--$MakeAndInitialize2@VCompositionColorGradientStopCollection@Composition@UI@Windows@@V1234@AEAP.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionColorGradientStopCollection *__fastcall Windows::UI::Composition::CompositionColorGradientStopCollection::CompositionColorGradientStopCollection(
        Windows::UI::Composition::CompositionColorGradientStopCollection *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::CompositionColorGradientStopCollection::`vftable'{for `Windows::UI::Composition::CompositionObject'};
  *((_QWORD *)this + 16) = &Windows::UI::Composition::CompositionColorGradientStopCollection::`vftable'{for `Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionColorGradientStop>>'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionColorGradientStopCollection::Api::`vftable';
  *((_QWORD *)this + 21) = &Windows::UI::Composition::CompositionColorGradientStopCollection::Api::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionColorGradientStop *>'};
  *((_QWORD *)this + 22) = &Windows::UI::Composition::CompositionColorGradientStopCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionColorGradientStopCollection>'};
  return this;
}
