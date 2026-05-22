/*
 * XREFs of ??0PathKeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x180122B2C
 * Callers:
 *     ??$MakeAndInitialize2@VPathKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVPathKeyFrameAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1801210D0 (--$MakeAndInitialize2@VPathKeyFrameAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@@D.c)
 * Callees:
 *     ??0KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005FA38 (--0KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::PathKeyFrameAnimation *__fastcall Windows::UI::Composition::PathKeyFrameAnimation::PathKeyFrameAnimation(
        Windows::UI::Composition::PathKeyFrameAnimation *this)
{
  Windows::UI::Composition::KeyFrameAnimation::KeyFrameAnimation(this);
  *(_QWORD *)this = &Windows::UI::Composition::PathKeyFrameAnimation::`vftable';
  *((_QWORD *)this + 62) = &Windows::UI::Composition::PathKeyFrameAnimation::Api::`vftable';
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  return this;
}
