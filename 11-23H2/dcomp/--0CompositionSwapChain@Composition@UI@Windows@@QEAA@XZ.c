/*
 * XREFs of ??0CompositionSwapChain@Composition@UI@Windows@@QEAA@XZ @ 0x180122A0C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSwapChain@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180120774 (--$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 *     ??$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAUIDXGISwapChain1@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSwapChain@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAUIDXGISwapChain1@@@Z @ 0x180120834 (--$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEA.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionSwapChain *__fastcall Windows::UI::Composition::CompositionSwapChain::CompositionSwapChain(
        Windows::UI::Composition::CompositionSwapChain *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionSwapChain::`vftable';
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 16) = &Windows::UI::Composition::Scenes::SceneBoundingBox::ApiSceneObject::`vftable';
  return this;
}
