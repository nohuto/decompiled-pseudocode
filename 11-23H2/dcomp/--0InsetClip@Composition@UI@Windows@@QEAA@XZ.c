/*
 * XREFs of ??0InsetClip@Composition@UI@Windows@@QEAA@XZ @ 0x18006FC28
 * Callers:
 *     ??$MakeAndInitialize2@VInsetClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVInsetClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222@Z @ 0x18006FB34 (--$MakeAndInitialize2@VInsetClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAE.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::InsetClip *__fastcall Windows::UI::Composition::InsetClip::InsetClip(
        Windows::UI::Composition::InsetClip *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionClip::Api::`vftable'{for `Windows::UI::Composition::ICompositionClip'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::CompositionClip::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionClip2>'};
  *(_QWORD *)this = &Windows::UI::Composition::InsetClip::`vftable';
  *((_QWORD *)this + 21) = &Windows::UI::Composition::InsetClip::Api::`vftable';
  *((_QWORD *)this + 23) = &Windows::UI::Composition::InsetClip::Partner::`vftable';
  return this;
}
