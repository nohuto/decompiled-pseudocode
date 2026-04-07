/*
 * XREFs of ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B7898
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B77D0 (-OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::ScheduleEntranceAnimations(CDisplayExtendAnimatedVisual *this)
{
  struct IAnimationListener *v1; // rsi
  int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CDisplayExtendAnimatedVisual *)((char *)this + 288);
  v3 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 55),
         (CDisplayExtendAnimatedVisual *)((char *)this + 288),
         *((unsigned int *)this + 93),
         *((_DWORD *)this + 94),
         (unsigned int *)this + 123);
  if ( v3 < 0 )
  {
    v4 = 276LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = CDisplayAnimatedVisual::ScheduleAnimation(
         (struct IAnimatedVisual *)*((unsigned int *)this + 94),
         (_QWORD *)this + 56,
         v1,
         *((_DWORD *)this + 93),
         *((_DWORD *)this + 94),
         (unsigned int *)this + 126);
  if ( v3 < 0 )
  {
    v4 = 284LL;
    goto LABEL_3;
  }
  v6 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayAnimatedVisual *)*((unsigned int *)this + 92),
         *((struct CAnimatedTransitionVisual **)this + 59),
         v1,
         *((unsigned int *)this + 91),
         *((_DWORD *)this + 92),
         (unsigned int *)this + 124);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x124,
    (int)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
