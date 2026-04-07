/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B5EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::OnGlobalTimeUpdatedImpl(CDisplayDuplicateAnimatedVisual *this)
{
  __int64 v1; // rax
  int v2; // edi
  bool v4; // zf
  char v5; // al
  __int64 v6; // r9
  CDisplayAnimatedVisual *v7; // rcx
  struct CAnimatedTransitionVisual *v8; // rdx
  unsigned int v9; // eax

  v1 = *((_QWORD *)this + 59);
  v2 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    *((_QWORD *)this + 59) = 0LL;
    v4 = (*(_DWORD *)(v1 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    v6 = *((unsigned int *)this + 93);
    if ( v4 )
      v5 = 1;
    v7 = (CDisplayAnimatedVisual *)*((unsigned int *)this + 94);
    v8 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 55);
    CDesktopManager::s_fTimelineDirty = v5;
    v2 = CDisplayAnimatedVisual::ScheduleAnimation(
           v7,
           v8,
           (CDisplayDuplicateAnimatedVisual *)((char *)this + 288),
           v6,
           (int)v7,
           (unsigned int *)this + 121);
    if ( v2 < 0 )
    {
      v9 = 177;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v9);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      return (unsigned int)v2;
    }
    v2 = CDisplayAnimatedVisual::ScheduleAnimation(
           (struct IAnimatedVisual *)*((unsigned int *)this + 94),
           (_QWORD *)this + 56,
           (CDisplayDuplicateAnimatedVisual *)((char *)this + 288),
           *((_DWORD *)this + 93),
           *((_DWORD *)this + 94),
           (unsigned int *)this + 123);
    if ( v2 < 0 )
    {
      v9 = 185;
      goto LABEL_9;
    }
  }
  return (unsigned int)v2;
}
