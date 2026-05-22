/*
 * XREFs of ??0CompositionAnimationGroup@Composition@UI@Windows@@QEAA@XZ @ 0x1801227B8
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionAnimationGroup@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationGroup@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18011FFAC (--$MakeAndInitialize2@VCompositionAnimationGroup@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionAnimationGroup *__fastcall Windows::UI::Composition::CompositionAnimationGroup::CompositionAnimationGroup(
        Windows::UI::Composition::CompositionAnimationGroup *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionAnimationGroup::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 16) = &Windows::UI::Composition::CompositionAnimationGroup::Api::`vftable'{for `Windows::UI::Composition::ICompositionAnimationGroup'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionAnimationGroup::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionAnimation *>>'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::CompositionAnimationGroup::Api::`vftable'{for `Windows::UI::Composition::ICompositionAnimationBaseInternal'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionAnimationGroup::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionAnimation *>>'};
  return this;
}
