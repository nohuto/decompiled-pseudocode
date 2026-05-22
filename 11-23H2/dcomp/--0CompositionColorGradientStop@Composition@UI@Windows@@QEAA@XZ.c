/*
 * XREFs of ??0CompositionColorGradientStop@Composition@UI@Windows@@QEAA@XZ @ 0x180045100
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionColorGradientStop@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEBU_D3DCOLORVALUE@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorGradientStop@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAMAEBU_D3DCOLORVALUE@@@Z @ 0x18004514C (--$MakeAndInitialize2@VCompositionColorGradientStop@Composition@UI@Windows@@V1234@PEAVCompositor.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionColorGradientStop *__fastcall Windows::UI::Composition::CompositionColorGradientStop::CompositionColorGradientStop(
        Windows::UI::Composition::CompositionColorGradientStop *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionColorGradientStop::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::CompositionColorGradientStop::Api::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  return this;
}
