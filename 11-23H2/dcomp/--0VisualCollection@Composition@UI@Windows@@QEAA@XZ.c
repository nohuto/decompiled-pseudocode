/*
 * XREFs of ??0VisualCollection@Composition@UI@Windows@@QEAA@XZ @ 0x18008A0D8
 * Callers:
 *     ??$MakeAndInitialize2@VVisualCollection@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualCollection@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18008A02C (--$MakeAndInitialize2@VVisualCollection@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WR.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::VisualCollection *__fastcall Windows::UI::Composition::VisualCollection::VisualCollection(
        Windows::UI::Composition::VisualCollection *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::VisualCollection::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 16) = &Windows::UI::Composition::VisualCollection::Api::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual *>'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::VisualCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IVisualCollection>'};
  return this;
}
