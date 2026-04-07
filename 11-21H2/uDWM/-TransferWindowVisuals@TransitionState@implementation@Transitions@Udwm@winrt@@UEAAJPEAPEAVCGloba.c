/*
 * XREFs of ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800FE910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800125AC (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@PEAVCAnimatedTransitionVisual@@@?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@QEAAPEAPEAVCAnimatedTransitionVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1800FC380 (--$_Emplace_reallocate@PEAVCAnimatedTransitionVisual@@@-$vector@PEAVCAnimatedTransitionVisual@@V.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800FC488 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 *     ??4?$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataVisual@@@Z @ 0x1800FCB64 (--4-$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataV.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800FD5E4 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        volatile signed __int32 **a2,
        __int64 a3)
{
  char v4; // r12
  int RootRenderDataVisual; // eax
  unsigned int v6; // r14d
  volatile signed __int32 *v7; // rbx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *Flink; // r15
  struct _LIST_ENTRY *Blink; // rax
  char v11; // r8
  bool v12; // dl
  int inserted; // eax
  CAnimatedTransitionVisual *v14; // rdi
  __int64 v15; // rax
  _BYTE *v16; // rdx
  CBaseObject *v17; // rdi
  CBaseObject **v18; // rdx
  CBaseObject *v19; // rcx
  __int64 v20; // rdx
  volatile signed __int32 *v21; // rax
  CBaseObject *v23; // [rsp+30h] [rbp-59h] BYREF
  CBaseObject *v24; // [rsp+38h] [rbp-51h] BYREF
  CBaseObject *v25; // [rsp+40h] [rbp-49h]
  CAnimatedTransitionVisual *v26; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-39h] BYREF
  __int64 v28; // [rsp+58h] [rbp-31h]
  CAnimatedTransitionVisual *v29; // [rsp+60h] [rbp-29h] BYREF
  struct _LIST_ENTRY *v30; // [rsp+68h] [rbp-21h]
  volatile signed __int32 **v31; // [rsp+70h] [rbp-19h]
  winrt::Udwm::Transitions::implementation::TransitionState *v32; // [rsp+78h] [rbp-11h]
  char v33; // [rsp+80h] [rbp-9h]
  char v34[8]; // [rsp+88h] [rbp-1h] BYREF
  struct tagRECT v35; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v28 = a3;
  v31 = a2;
  v32 = this;
  v4 = 1;
  v33 = 1;
  v23 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
                           (__int64)this,
                           &v23);
  v6 = RootRenderDataVisual;
  if ( RootRenderDataVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
    v7 = (volatile signed __int32 *)v23;
    goto LABEL_39;
  }
  GetDesktopID(1LL, &v27);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 52));
  v30 = WindowListForDesktop;
  if ( !WindowListForDesktop
    || (Flink = WindowListForDesktop->Flink, WindowListForDesktop->Flink == WindowListForDesktop) )
  {
    v7 = (volatile signed __int32 *)v23;
LABEL_38:
    wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=((CBaseObject **)this + 6, v7);
    v21 = v7;
    v7 = 0LL;
    *v31 = v21;
    v4 = 0;
    v6 = 0;
    goto LABEL_39;
  }
  v7 = (volatile signed __int32 *)v23;
  while ( 1 )
  {
    GetDesktopID(1LL, v34);
    if ( !Flink )
      goto LABEL_29;
    Blink = Flink[27].Blink;
    if ( !Blink )
      goto LABEL_29;
    v11 = (char)Flink[41].Blink;
    if ( (v11 & 1) == 0 )
      goto LABEL_29;
    v12 = 0;
    if ( (v11 & 4) == 0 )
      v12 = (BYTE4(Flink[41].Blink) & 1) == 0;
    if ( !v12 || (HIDWORD(Flink[7].Flink) & 0x20000000) != 0 || !Flink[2].Blink )
      goto LABEL_29;
    v25 = (CBaseObject *)Flink[27].Blink;
    _InterlockedAdd((volatile signed __int32 *)&Blink->Blink, 1u);
    CTopLevelWindow::GetActualWindowRect(v25, &v35, 0, 0, 0);
    v26 = 0LL;
    inserted = CAnimatedTransitionVisual::Create(&v26);
    v6 = inserted;
    v7 = (volatile signed __int32 *)v23;
    v14 = v26;
    if ( inserted < 0 )
      break;
    inserted = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v26, v25, 1, 0LL);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v20 = 133LL;
      goto LABEL_34;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v14, &v35);
    *(struct tagRECT *)((char *)v14 + 872) = v35;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v14 + 8), 4096);
    CVisual::SetInterpolationMode((unsigned int *)v14 + 2, 1u);
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(v7 + 8),
                 (CAnimatedTransitionVisual *)((char *)v14 + 8),
                 0LL,
                 0,
                 1);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v20 = 139LL;
      goto LABEL_34;
    }
    v29 = v14;
    v15 = v28;
    v16 = *(_BYTE **)(v28 + 8);
    if ( v16 == *(_BYTE **)(v28 + 16) )
    {
      std::vector<CAnimatedTransitionVisual *>::_Emplace_reallocate<CAnimatedTransitionVisual *>(v28, v16, &v29);
    }
    else
    {
      *(_QWORD *)v16 = v14;
      *(_QWORD *)(v15 + 8) += 8LL;
    }
    v26 = 0LL;
    if ( v14 )
    {
      v17 = (CAnimatedTransitionVisual *)((char *)v14 + 8);
      v24 = v17;
    }
    else
    {
      v24 = 0LL;
      v17 = 0LL;
    }
    v18 = (CBaseObject **)*((_QWORD *)this + 8);
    if ( v18 == *((CBaseObject ***)this + 9) )
    {
      std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
        (const char *)this + 56,
        (__int64)v18,
        (__int64 *)&v24);
      v19 = v24;
    }
    else
    {
      v19 = 0LL;
      v24 = 0LL;
      *v18 = v17;
      *((_QWORD *)this + 8) += 8LL;
    }
    if ( v19 )
      CBaseObject::Release(v19);
    CBaseObject::Release(v25);
LABEL_29:
    Flink = Flink->Flink;
    if ( Flink == v30 )
      goto LABEL_38;
  }
  v20 = 131LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
    (const char *)(unsigned int)inserted);
  if ( v14 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v14 + 8));
  CBaseObject::Release(v25);
  v4 = v33;
LABEL_39:
  if ( v7 )
    CBaseObject::Release((CBaseObject *)v7);
  if ( v4 )
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(this);
  return v6;
}
