/*
 * XREFs of ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BAB28
 * Callers:
 *     ?StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BB210 (-StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B7DB4 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B81B4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B83A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::CaptureAndScheduleExitAnimations(CDisplayExtendAnimatedVisual *this)
{
  struct CAnimatedTransitionVisual **v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // esi
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (struct CAnimatedTransitionVisual **)((char *)this + 440);
  v3 = *((_QWORD *)this + 55);
  *v1 = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = CDisplayAnimatedVisual::CapturePrimaryAndExistingExtended((CDWMDisplaySet **)this, v1, 0LL, (__int64)this + 448);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayExtendAnimatedVisual *)((char *)this + 288),
           *v1,
           (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
           *((unsigned int *)this + 93),
           *((_DWORD *)this + 95),
           (unsigned int *)this + 122);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = CDisplayAnimatedVisual::ScheduleAnimation(
             (struct IAnimatedVisual *)*((unsigned int *)this + 95),
             (_QWORD *)this + 56,
             (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
             *((_DWORD *)this + 93),
             *((_DWORD *)this + 95),
             (unsigned int *)this + 125);
      v10 = v9;
      if ( v9 >= 0 )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9A,
          (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x92,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
