/*
 * XREFs of ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BA790
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::OnGlobalTimeUpdatedImpl(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  struct IAnimationListener *v4; // r8
  bool v5; // zf
  char v6; // al
  __int64 v7; // r9
  CDisplayAnimatedVisual *v8; // rcx
  struct CAnimatedTransitionVisual *v9; // rdx
  int v10; // eax
  unsigned int v11; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 56);
  v2 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    *((_QWORD *)this + 56) = 0LL;
    v4 = (CDisplaySecondaryOnlyToDuplicateAnimatedVisual *)((char *)this + 288);
    v5 = (*(_DWORD *)(v1 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    v7 = *((unsigned int *)this + 88);
    if ( v5 )
      v6 = 1;
    v8 = (CDisplayAnimatedVisual *)*((unsigned int *)this + 89);
    v9 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 55);
    CDesktopManager::s_fTimelineDirty = v6;
    v10 = CDisplayAnimatedVisual::ScheduleAnimation(v8, v9, v4, v7, (int)v8, (unsigned int *)this + 115);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v10);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xA1u);
      CDisplayAnimatedVisual::Stop((__int64 *)this, 0);
      return v11;
    }
  }
  return v2;
}
