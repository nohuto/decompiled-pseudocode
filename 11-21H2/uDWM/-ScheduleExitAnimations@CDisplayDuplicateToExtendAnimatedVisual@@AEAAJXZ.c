/*
 * XREFs of ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6C98
 * Callers:
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B6E70 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::ScheduleExitAnimations(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  struct IAnimationListener *v1; // rsi
  int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CDisplayDuplicateToExtendAnimatedVisual *)((char *)this + 288);
  v3 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 61),
         (CDisplayDuplicateToExtendAnimatedVisual *)((char *)this + 288),
         *((unsigned int *)this + 88),
         *((_DWORD *)this + 90),
         (unsigned int *)this + 130);
  if ( v3 < 0 )
  {
    v4 = 188LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayAnimatedVisual *)*((unsigned int *)this + 90),
         *((struct CAnimatedTransitionVisual **)this + 57),
         v1,
         *((unsigned int *)this + 88),
         *((_DWORD *)this + 90),
         (unsigned int *)this + 128);
  if ( v3 < 0 )
  {
    v4 = 196LL;
    goto LABEL_3;
  }
  v6 = CDisplayAnimatedVisual::ScheduleAnimation(
         (struct IAnimatedVisual *)*((unsigned int *)this + 90),
         (_QWORD *)this + 58,
         v1,
         *((_DWORD *)this + 88),
         *((_DWORD *)this + 90),
         (unsigned int *)this + 132);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCC,
    (int)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
