/*
 * XREFs of ??0AnimationController@Composition@UI@Windows@@QEAA@XZ @ 0x18008155C
 * Callers:
 *     ??$MakeAndInitialize2@VAnimationController@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAnimationController@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800814B8 (--$MakeAndInitialize2@VAnimationController@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Det.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::AnimationController *__fastcall Windows::UI::Composition::AnimationController::AnimationController(
        Windows::UI::Composition::AnimationController *this)
{
  Windows::UI::Composition::AnimationController *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_BYTE *)this + 152) &= 0xFCu;
  *(_QWORD *)this = &Windows::UI::Composition::AnimationController::`vftable'{for `Windows::UI::Composition::ProxyObject'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::AnimationController::`vftable'{for `DirectComposition::CRebuildableObject'};
  *((_QWORD *)this + 21) = &Windows::UI::Composition::AnimationController::Api::`vftable';
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  return result;
}
