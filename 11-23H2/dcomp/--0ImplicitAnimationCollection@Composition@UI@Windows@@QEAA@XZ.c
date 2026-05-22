/*
 * XREFs of ??0ImplicitAnimationCollection@Composition@UI@Windows@@QEAA@XZ @ 0x180036A50
 * Callers:
 *     ??$MakeAndInitialize2@VImplicitAnimationCollection@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVImplicitAnimationCollection@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800367B8 (--$MakeAndInitialize2@VImplicitAnimationCollection@Composition@UI@Windows@@V1234@PEAVCompositor@.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::ImplicitAnimationCollection *__fastcall Windows::UI::Composition::ImplicitAnimationCollection::ImplicitAnimationCollection(
        Windows::UI::Composition::ImplicitAnimationCollection *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::ImplicitAnimationCollection::`vftable';
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 16) = &Windows::UI::Composition::ImplicitAnimationCollection::Api::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::ImplicitAnimationCollection::Api::`vftable'{for `Windows::Foundation::Collections::IMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *>'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::ImplicitAnimationCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *> *>>'};
  return this;
}
