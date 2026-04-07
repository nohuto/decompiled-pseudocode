/*
 * XREFs of ??0CPanelAnimation@@QEAA@XZ @ 0x1800D97A0
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18000E264 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CSlide@@IEAA@XZ @ 0x1800D97D0 (--0CSlide@@IEAA@XZ.c)
 */

CPanelAnimation *__fastcall CPanelAnimation::CPanelAnimation(CPanelAnimation *this)
{
  CPanelAnimation *v1; // rcx
  CPanelAnimation *result; // rax

  CSlide::CSlide(this);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CPanelAnimation::`vftable'{for `CBaseObject'};
  return result;
}
