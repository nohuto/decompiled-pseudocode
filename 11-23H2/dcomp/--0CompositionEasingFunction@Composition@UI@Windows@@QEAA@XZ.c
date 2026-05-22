/*
 * XREFs of ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079A98
 * Callers:
 *     ??0ExponentialEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x18000C4B0 (--0ExponentialEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0CubicBezierEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079408 (--0CubicBezierEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0PowerEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180079798 (--0PowerEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VStepEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAH@Details@WRL2@Microsoft@@YAJPEAPEAVStepEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAH@Z @ 0x180079828 (--$MakeAndInitialize2@VStepEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAH@.c)
 *     ??0BackEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x1801226B8 (--0BackEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0BounceEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x1801226F0 (--0BounceEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0CircleEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180122780 (--0CircleEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0ElasticEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180122AB0 (--0ElasticEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0SineEasingFunction@Composition@UI@Windows@@QEAA@XZ @ 0x180122C74 (--0SineEasingFunction@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionEasingFunction *__fastcall Windows::UI::Composition::CompositionEasingFunction::CompositionEasingFunction(
        Windows::UI::Composition::CompositionEasingFunction *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionEasingFunction::`vftable';
  *((_QWORD *)this + 16) = &Windows::UI::Composition::CompositionEasingFunction::Api::`vftable';
  return this;
}
