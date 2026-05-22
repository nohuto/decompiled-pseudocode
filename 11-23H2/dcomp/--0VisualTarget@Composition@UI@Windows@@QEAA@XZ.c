/*
 * XREFs of ??0VisualTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18005DD68
 * Callers:
 *     ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18000B520 (--$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Det.c)
 *     ??0InteropVisualTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18005DD30 (--0InteropVisualTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180122228 (--$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WR.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::VisualTarget *__fastcall Windows::UI::Composition::VisualTarget::VisualTarget(
        Windows::UI::Composition::VisualTarget *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::VisualTarget::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::VisualTarget::Partner::`vftable'{for `Windows::UI::Composition::IVisualTargetPartner'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::VisualTarget::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Private::ICompositionTargetPartner>'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::VisualTarget::SystemOnly::`vftable';
  return this;
}
