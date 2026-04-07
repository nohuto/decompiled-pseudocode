/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x18005AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18005B030 (-CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  int v2; // edi
  __int64 v3; // rax
  unsigned int v5; // eax
  bool v6; // zf
  char v7; // al
  int v8; // r9d
  CDisplayAnimatedVisual *v9; // rcx
  struct CAnimatedTransitionVisual *v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( !*((_QWORD *)this + 55) )
  {
    v2 = CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay(this);
    if ( v2 < 0 )
    {
      v5 = 138;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v5);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      return (unsigned int)v2;
    }
  }
  v3 = *((_QWORD *)this + 56);
  if ( v3 && *(_BYTE *)(v3 + 72) )
  {
    *((_QWORD *)this + 56) = 0LL;
    v6 = (*(_DWORD *)(v3 + 8))-- == 1;
    v7 = CDesktopManager::s_fTimelineDirty;
    v8 = *((_DWORD *)this + 88);
    if ( v6 )
      v7 = 1;
    v9 = (CDisplayAnimatedVisual *)*((unsigned int *)this + 89);
    v10 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 55);
    CDesktopManager::s_fTimelineDirty = v7;
    v11 = CDisplayAnimatedVisual::ScheduleAnimation(
            v9,
            v10,
            (CDisplaySecondaryOnlyAnimatedVisual *)((char *)this + 288),
            v8,
            (int)v9,
            (unsigned int *)this + 114);
    v2 = v11;
    if ( v11 >= 0 )
      return 0;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)v11);
    v5 = 145;
    goto LABEL_11;
  }
  return (unsigned int)v2;
}
