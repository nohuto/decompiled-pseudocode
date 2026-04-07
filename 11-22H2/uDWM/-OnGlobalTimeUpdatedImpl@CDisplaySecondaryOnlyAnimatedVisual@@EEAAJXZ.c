/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BE210
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B83A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800BDF48 (-CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // edi
  unsigned int v5; // eax
  __int64 v6; // rax
  bool v7; // zf
  char v8; // al
  int v9; // r9d
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  if ( !*((_QWORD *)this + 55) )
  {
    v4 = CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay(this, a2, a3);
    if ( v4 < 0 )
    {
      v5 = 138;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v5);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      return (unsigned int)v4;
    }
  }
  v6 = *((_QWORD *)this + 56);
  if ( v6 && *(_BYTE *)(v6 + 72) )
  {
    *((_QWORD *)this + 56) = 0LL;
    v7 = (*(_DWORD *)(v6 + 8))-- == 1;
    v8 = CDesktopManager::s_fTimelineDirty;
    v9 = *((_DWORD *)this + 89);
    if ( v7 )
      v8 = 1;
    CDesktopManager::s_fTimelineDirty = v8;
    v10 = CDisplayAnimatedVisual::ScheduleAnimation(
            (CDisplaySecondaryOnlyAnimatedVisual *)((char *)this + 288),
            *((struct CAnimatedTransitionVisual **)this + 55),
            (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
            *((unsigned int *)this + 88),
            v9,
            (unsigned int *)this + 114);
    v4 = v10;
    if ( v10 >= 0 )
      return 0;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)v10);
    v5 = 145;
    goto LABEL_10;
  }
  return (unsigned int)v4;
}
