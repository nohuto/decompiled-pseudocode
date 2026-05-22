/*
 * XREFs of ??0DelegatedInkTrailVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18011B054
 * Callers:
 *     ??$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVCompositionSwapChain@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVCompositionSwapChain@456@@Z @ 0x18011AED4 (--$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@2.c)
 *     ??$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@$$T@Details@WRL2@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA$$T@Z @ 0x18011AF94 (--$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 * Callees:
 *     ??0Visual@Composition@UI@Windows@@QEAA@XZ @ 0x18005D570 (--0Visual@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::DelegatedInkTrailVisual *__fastcall Windows::UI::Composition::DelegatedInkTrailVisual::DelegatedInkTrailVisual(
        Windows::UI::Composition::DelegatedInkTrailVisual *this)
{
  Windows::UI::Composition::Visual::Visual((unsigned __int64)this);
  *(_QWORD *)this = &Windows::UI::Composition::DelegatedInkTrailVisual::`vftable';
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 37) = &Windows::UI::Composition::DelegatedInkTrailVisual::Api::`vftable';
  return this;
}
