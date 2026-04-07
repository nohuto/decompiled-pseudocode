/*
 * XREFs of ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B8120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B4C4C (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplayExtendToDuplicateAnimatedVisual::StartImpl(CDisplayExtendToDuplicateAnimatedVisual *this)
{
  struct CDWMDisplay **v1; // rax
  struct CAnimatedTransitionVisual **v2; // rdi
  __int64 v4; // rcx
  struct CDWMDisplay *v5; // rsi
  int v6; // eax
  unsigned int v7; // esi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (struct CDWMDisplay **)*((_QWORD *)this + 41);
  v2 = (struct CAnimatedTransitionVisual **)((char *)this + 440);
  v4 = *((_QWORD *)this + 55);
  v5 = *v1;
  *v2 = 0LL;
  if ( v4 )
    CBaseObject::Release((CBaseObject *)(v4 + 8));
  v6 = CDisplayAnimatedVisual::CapturePrimaryAndExistingExtended((CDWMDisplaySet **)this, v2, v5, (__int64)this + 448);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayAnimatedVisual *)*((unsigned int *)this + 90),
           *v2,
           (CDisplayExtendToDuplicateAnimatedVisual *)((char *)this + 288),
           *((unsigned int *)this + 88),
           *((_DWORD *)this + 90),
           (unsigned int *)this + 120);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = CDisplayAnimatedVisual::ScheduleAnimation(
              (struct IAnimatedVisual *)*((unsigned int *)this + 90),
              (_QWORD *)this + 56,
              (CDisplayExtendToDuplicateAnimatedVisual *)((char *)this + 288),
              *((_DWORD *)this + 88),
              *((_DWORD *)this + 90),
              (unsigned int *)this + 122);
      v12 = v11;
      if ( v11 >= 0 )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43,
          (int)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (int)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
