/*
 * XREFs of ??0CompositionStrokeDashArray@Composition@UI@Windows@@QEAA@XZ @ 0x180170220
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionStrokeDashArray@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionSpriteShape@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionStrokeDashArray@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionSpriteShape@456@@Z @ 0x18016FBC4 (--$MakeAndInitialize2@VCompositionStrokeDashArray@Composition@UI@Windows@@V1234@PEAVCompositor@2.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionStrokeDashArray *__fastcall Windows::UI::Composition::CompositionStrokeDashArray::CompositionStrokeDashArray(
        Windows::UI::Composition::CompositionStrokeDashArray *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::CompositionStrokeDashArray::`vftable'{for `Windows::UI::Composition::CompositionObject'};
  *((_QWORD *)this + 16) = &Windows::UI::Composition::CompositionStrokeDashArray::`vftable'{for `Windows::UI::Composition::VectorBasedCollection<float>'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionStrokeDashArray::Api::`vftable'{for `Windows::Foundation::Collections::IVector<float>'};
  *((_QWORD *)this + 21) = &Windows::UI::Composition::CompositionStrokeDashArray::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<float>>'};
  return this;
}
