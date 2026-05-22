/*
 * XREFs of ??0DropShadow@Composition@UI@Windows@@QEAA@XZ @ 0x180088184
 * Callers:
 *     ??$MakeAndInitialize2@VDropShadow@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDropShadow@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800880E0 (--$MakeAndInitialize2@VDropShadow@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::DropShadow *__fastcall Windows::UI::Composition::DropShadow::DropShadow(
        Windows::UI::Composition::DropShadow *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 17) = &Windows::UI::Composition::Internal::VisualReference::Api::`vftable';
  *(_QWORD *)this = &Windows::UI::Composition::DropShadow::`vftable';
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 19) = &Windows::UI::Composition::DropShadow::Api::`vftable'{for `Windows::UI::Composition::IDropShadow'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::DropShadow::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::IDropShadow2>'};
  return this;
}
