/*
 * XREFs of ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180101EE4
 * Callers:
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x180102F40 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x180103300 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x180103810 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x18010157C (-Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
        __int64 a1,
        struct CGlobalTimeTrackVisual **a2,
        __int64 a3)
{
  volatile signed __int32 *v5; // rax
  CBaseObject *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  volatile signed __int32 *RenderTargetRootVisualForDesktop; // rax
  CBaseObject *v11; // rbx
  int inserted; // eax
  unsigned int v13; // esi
  int v14; // eax
  struct CGlobalTimeTrackVisual *v15; // rax
  CBaseObject *v16; // rcx
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CBaseObject *v19; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  GetDesktopID(1LL, &v20, a3);
  v5 = *(volatile signed __int32 **)(a1 + 40);
  v6 = *a2;
  if ( !v5 )
  {
    *a2 = 0LL;
    if ( v6 )
      CBaseObject::Release(v6);
    v7 = CGlobalTimeTrackVisual::Create(a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    RenderTargetRootVisualForDesktop = (volatile signed __int32 *)CWindowList::GetRenderTargetRootVisualForDesktop(
                                                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 54),
                                                                    v20);
    v11 = (CBaseObject *)RenderTargetRootVisualForDesktop;
    v19 = (CBaseObject *)RenderTargetRootVisualForDesktop;
    if ( RenderTargetRootVisualForDesktop )
    {
      _InterlockedIncrement(RenderTargetRootVisualForDesktop + 2);
      v11 = v19;
    }
    inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v11 + 32), (unsigned __int64)*a2, 0LL, 0, v17);
    v13 = inserted;
    if ( inserted >= 0 )
    {
      v14 = CVisual::MoveToFront(*a2, 1);
      v13 = v14;
      if ( v14 >= 0 )
      {
        v15 = *a2;
        v16 = *(CBaseObject **)(a1 + 40);
        *(_QWORD *)(a1 + 40) = *a2;
        if ( v15 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
          v11 = v19;
        }
        if ( v16 )
          CBaseObject::Release(v16);
        if ( !v11 )
          return 0LL;
        v6 = v11;
        goto LABEL_22;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v14);
      if ( v11 )
        CBaseObject::Release(v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)inserted);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v19);
    }
    return v13;
  }
  *a2 = (struct CGlobalTimeTrackVisual *)v5;
  _InterlockedIncrement(v5 + 2);
  if ( v6 )
LABEL_22:
    CBaseObject::Release(v6);
  return 0LL;
}
