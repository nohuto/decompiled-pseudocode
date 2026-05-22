/*
 * XREFs of ??0PowerEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079798
 * Callers:
 *     ??$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVPowerEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x1800796D8 (--$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4Co.c)
 *     ??$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVPowerEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAM@Z @ 0x18012E1F8 (--$MakeAndInitialize2@VPowerEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW.c)
 * Callees:
 *     ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98 (--0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::PowerEasingFunction *__fastcall Windows::UI::Composition::PowerEasingFunction::PowerEasingFunction(
        Windows::UI::Composition::PowerEasingFunction *this)
{
  Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(this);
  *(_QWORD *)this = &Windows::UI::Composition::PowerEasingFunction::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::PowerEasingFunction::Api::`vftable';
  return this;
}
