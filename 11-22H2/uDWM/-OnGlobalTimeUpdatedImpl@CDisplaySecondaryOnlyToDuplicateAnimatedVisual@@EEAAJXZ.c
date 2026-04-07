/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE830
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B83A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  bool v4; // zf
  char v5; // al
  int v6; // r11d
  __int64 v7; // r9
  struct CAnimatedTransitionVisual *v8; // rdx
  int v9; // eax
  unsigned int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 56);
  v2 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    *((_QWORD *)this + 56) = 0LL;
    v4 = (*(_DWORD *)(v1 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    v6 = *((_DWORD *)this + 89);
    if ( v4 )
      v5 = 1;
    v7 = *((unsigned int *)this + 88);
    v8 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 55);
    CDesktopManager::s_fTimelineDirty = v5;
    v9 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplaySecondaryOnlyToDuplicateAnimatedVisual *)((char *)this + 288),
           v8,
           (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
           v7,
           v6,
           (unsigned int *)this + 115);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v9);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xA1u);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      return v10;
    }
  }
  return v2;
}
