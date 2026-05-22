/*
 * XREFs of ??0ElasticEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180122AB0
 * Callers:
 *     ??$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVElasticEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x180120DF8 (--$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4.c)
 *     ??$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVElasticEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18012E040 (--$MakeAndInitialize2@VElasticEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AE.c)
 * Callees:
 *     ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98 (--0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::ElasticEasingFunction *__fastcall Windows::UI::Composition::ElasticEasingFunction::ElasticEasingFunction(
        Windows::UI::Composition::ElasticEasingFunction *this)
{
  Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(this);
  *(_QWORD *)this = &Windows::UI::Composition::ElasticEasingFunction::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::ElasticEasingFunction::Api::`vftable';
  return this;
}
