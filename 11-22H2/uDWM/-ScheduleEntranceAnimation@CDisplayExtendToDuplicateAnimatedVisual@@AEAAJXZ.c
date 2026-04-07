/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BB718
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BB690 (-OnGlobalTimeUpdatedImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B81B4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B83A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplayExtendToDuplicateAnimatedVisual::ScheduleEntranceAnimation(
        CDisplayExtendToDuplicateAnimatedVisual *this)
{
  struct IAnimationListener *v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL));
  v3 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 55),
         v2,
         *((unsigned int *)this + 88),
         *((_DWORD *)this + 89),
         (unsigned int *)this + 121);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = CDisplayAnimatedVisual::ScheduleAnimation(
           (struct IAnimatedVisual *)*((unsigned int *)this + 89),
           (_QWORD *)this + 56,
           v2,
           *((_DWORD *)this + 88),
           *((_DWORD *)this + 89),
           (unsigned int *)this + 123);
    v7 = v6;
    if ( v6 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
