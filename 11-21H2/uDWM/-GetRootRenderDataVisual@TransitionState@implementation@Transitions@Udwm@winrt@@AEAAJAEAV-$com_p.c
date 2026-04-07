/*
 * XREFs of ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800FD5E4
 * Callers:
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800FE5B0 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800FE910 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180014FC4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x1800FCE58 (-Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
        __int64 a1,
        struct CGlobalTimeTrackVisual **a2)
{
  volatile signed __int32 *v4; // rax
  CBaseObject *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  struct CVisual *v10; // rbx
  int inserted; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  struct CGlobalTimeTrackVisual *v14; // rax
  CBaseObject *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CVisual *v17; // [rsp+50h] [rbp+8h]
  unsigned __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  GetDesktopID(1LL, &v18);
  v4 = *(volatile signed __int32 **)(a1 + 40);
  v5 = *a2;
  if ( v4 )
  {
    *a2 = (struct CGlobalTimeTrackVisual *)v4;
    _InterlockedIncrement(v4 + 2);
    if ( !v5 )
      return 0LL;
LABEL_23:
    CBaseObject::Release(v5);
    return 0LL;
  }
  *a2 = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = CGlobalTimeTrackVisual::Create(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x143,
      (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                                       v18);
  v10 = RenderTargetRootVisualForDesktop;
  v17 = RenderTargetRootVisualForDesktop;
  if ( RenderTargetRootVisualForDesktop )
  {
    _InterlockedIncrement((volatile signed __int32 *)RenderTargetRootVisualForDesktop + 2);
    v10 = RenderTargetRootVisualForDesktop;
  }
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v10 + 32), *a2, 0LL, 0, 1);
  v12 = inserted;
  if ( inserted >= 0 )
  {
    inserted = CVisual::MoveToFront(*a2, 1);
    v12 = inserted;
    if ( inserted >= 0 )
    {
      v14 = *a2;
      v15 = *(CBaseObject **)(a1 + 40);
      *(_QWORD *)(a1 + 40) = *a2;
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
        v10 = v17;
      }
      if ( v15 )
        CBaseObject::Release(v15);
      if ( !v10 )
        return 0LL;
      v5 = v10;
      goto LABEL_23;
    }
    v13 = 326LL;
  }
  else
  {
    v13 = 325LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
    (const char *)(unsigned int)inserted);
  if ( v10 )
    CBaseObject::Release(v10);
  return v12;
}
