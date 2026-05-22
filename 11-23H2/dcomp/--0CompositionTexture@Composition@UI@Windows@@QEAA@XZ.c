/*
 * XREFs of ??0CompositionTexture@Composition@UI@Windows@@QEAA@XZ @ 0x1800A1F84
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionTexture@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCCompositionTexture@DirectComposition@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionTexture@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCCompositionTexture@DirectComposition@@@Z @ 0x1800A1D00 (--$MakeAndInitialize2@VCompositionTexture@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVC.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionTexture *__fastcall Windows::UI::Composition::CompositionTexture::CompositionTexture(
        Windows::UI::Composition::CompositionTexture *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionTexture::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 16) = &Windows::UI::Composition::CompositionTexture::Api::`vftable'{for `Windows::UI::Composition::ICompositionTexture'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionTexture::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionSurface>'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::CompositionTexture::Interop::`vftable';
  return this;
}
