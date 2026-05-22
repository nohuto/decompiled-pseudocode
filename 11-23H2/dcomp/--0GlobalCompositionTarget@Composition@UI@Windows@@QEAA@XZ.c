/*
 * XREFs of ??0GlobalCompositionTarget@Composition@UI@Windows@@QEAA@XZ @ 0x180158B94
 * Callers:
 *     ??$MakeAndInitialize2@VGlobalCompositionTarget@Composition@UI@Windows@@VCompositionTarget@234@AEAPEAVCompositor@234@AEAPEAUICompositionTargetHostPartner@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionTarget@Composition@UI@Windows@@AEAPEAVCompositor@456@AEAPEAUICompositionTargetHostPartner@456@@Z @ 0x180158AD8 (--$MakeAndInitialize2@VGlobalCompositionTarget@Composition@UI@Windows@@VCompositionTarget@234@AE.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::GlobalCompositionTarget *__fastcall Windows::UI::Composition::GlobalCompositionTarget::GlobalCompositionTarget(
        Windows::UI::Composition::GlobalCompositionTarget *this)
{
  Windows::UI::Composition::GlobalCompositionTarget *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 16) = &Windows::UI::Composition::CompositionTarget::Partner::`vftable'{for `Windows::UI::Composition::Private::ICompositionColorSpaceTarget'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionTarget::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Private::ICompositionTargetPartner>'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionTarget::SystemOnly::`vftable'{for `Windows::UI::Composition::ICompositionTarget'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::CompositionTarget::SystemOnly::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionSupportsSystemBackdrop>'};
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::GlobalCompositionTarget::`vftable';
  result = this;
  *((_QWORD *)this + 26) = 0LL;
  return result;
}
