/*
 * XREFs of ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x180103810
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003EBFC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006D852 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7544 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@PEAVCAnimatedTransitionVisual@@@?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@QEAAPEAPEAVCAnimatedTransitionVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18010068C (--$_Emplace_reallocate@PEAVCAnimatedTransitionVisual@@@-$vector@PEAVCAnimatedTransitionVisual@@V.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180100794 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 *     wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___ @ 0x180100EBC (wil--details--lambda_call__lambda_e5362848fe0381a2024b7815ced62145___--_lambda_call__lambda_e536.c)
 *     ??4?$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataVisual@@@Z @ 0x180101054 (--4-$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataV.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180101EE4 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals(
        __int64 a1,
        volatile signed __int32 **a2,
        __int64 a3)
{
  int RootRenderDataVisual; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v8; // r8
  struct _LIST_ENTRY *Flink; // r14
  volatile signed __int32 *v10; // rsi
  char v11; // dl
  bool v12; // cl
  struct CVisual *v13; // rdi
  int v14; // eax
  CAnimatedTransitionVisual *v15; // rbx
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int inserted; // eax
  int v20; // r12d
  __int64 v21; // r13
  _BYTE *v22; // rdx
  CBaseObject *v23; // rbx
  CBaseObject **v24; // rdx
  CBaseObject *v25; // rcx
  int v27; // [rsp+20h] [rbp-69h]
  CAnimatedTransitionVisual *v28; // [rsp+30h] [rbp-59h] BYREF
  CBaseObject *v29; // [rsp+38h] [rbp-51h] BYREF
  CBaseObject *v30; // [rsp+40h] [rbp-49h] BYREF
  CBaseObject *Blink; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-39h] BYREF
  __int64 v33; // [rsp+58h] [rbp-31h]
  CAnimatedTransitionVisual *v34; // [rsp+60h] [rbp-29h] BYREF
  struct _LIST_ENTRY *v35; // [rsp+68h] [rbp-21h]
  volatile signed __int32 **v36; // [rsp+70h] [rbp-19h]
  __int64 v37; // [rsp+78h] [rbp-11h] BYREF
  char v38; // [rsp+80h] [rbp-9h]
  char v39[8]; // [rsp+88h] [rbp-1h] BYREF
  struct tagRECT v40; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v33 = a3;
  v36 = a2;
  v37 = a1;
  v38 = 1;
  v29 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
                           a1,
                           &v29,
                           a3);
  v6 = RootRenderDataVisual;
  if ( RootRenderDataVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
    goto LABEL_39;
  }
  GetDesktopID(1LL, &v32, v5);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v32);
  v35 = WindowListForDesktop;
  if ( !WindowListForDesktop
    || (Flink = WindowListForDesktop->Flink, WindowListForDesktop->Flink == WindowListForDesktop) )
  {
    v10 = (volatile signed __int32 *)v29;
LABEL_41:
    wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=((CBaseObject **)(a1 + 48), v10);
    *v36 = v10;
    return 0LL;
  }
  v10 = (volatile signed __int32 *)v29;
  while ( 1 )
  {
    GetDesktopID(1LL, v39, v8);
    if ( !Flink )
      goto LABEL_32;
    if ( !Flink[27].Blink )
      goto LABEL_32;
    v11 = (char)Flink[42].Flink;
    if ( (v11 & 1) == 0 )
      goto LABEL_32;
    v12 = 0;
    if ( (v11 & 4) == 0 )
      v12 = (BYTE4(Flink[42].Flink) & 1) == 0;
    if ( !v12 || (HIDWORD(Flink[7].Flink) & 0x20000000) != 0 || !Flink[2].Blink )
      goto LABEL_32;
    Blink = (CBaseObject *)Flink[27].Blink;
    _InterlockedIncrement((volatile signed __int32 *)Blink + 2);
    v13 = Blink;
    CTopLevelWindow::GetActualWindowRect(Blink, &v40, 0, 0, 0);
    v28 = 0LL;
    v14 = CAnimatedTransitionVisual::Create(&v28);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v28);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&Blink);
      goto LABEL_39;
    }
    v15 = v28;
    v16 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v28, v13, 1, 0LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v28);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&Blink);
      v6 = v17;
      goto LABEL_39;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v15, &v40);
    *(struct tagRECT *)((char *)v15 + 872) = v40;
    v18 = *((_DWORD *)v15 + 24);
    if ( (v18 & 0x1000) == 0 )
    {
      *((_DWORD *)v15 + 24) = v18 | 0x1000;
      CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v15 + 8));
    }
    CVisual::SetInterpolationMode((unsigned int *)v15 + 2, 1u);
    v10 = (volatile signed __int32 *)v29;
    inserted = VisualCollection::InsertRelative(
                 (CBaseObject *)((char *)v29 + 32),
                 (unsigned __int64)v15 + 8,
                 0LL,
                 0,
                 v27);
    v20 = inserted;
    if ( inserted < 0 )
      break;
    v34 = v15;
    v21 = v33;
    v22 = *(_BYTE **)(v33 + 8);
    if ( v22 == *(_BYTE **)(v33 + 16) )
    {
      std::vector<CAnimatedTransitionVisual *>::_Emplace_reallocate<CAnimatedTransitionVisual *>(v33, v22, &v34);
    }
    else
    {
      *(_QWORD *)v22 = v15;
      *(_QWORD *)(v21 + 8) += 8LL;
    }
    v28 = 0LL;
    if ( v15 )
    {
      v23 = (CAnimatedTransitionVisual *)((char *)v15 + 8);
      v30 = v23;
    }
    else
    {
      v30 = 0LL;
      v23 = 0LL;
    }
    v24 = *(CBaseObject ***)(a1 + 64);
    if ( v24 == *(CBaseObject ***)(a1 + 72) )
    {
      std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
        (const char *)(a1 + 56),
        (__int64)v24,
        (__int64 *)&v30);
      v25 = v30;
    }
    else
    {
      v25 = 0LL;
      v30 = 0LL;
      *v24 = v23;
      *(_QWORD *)(a1 + 64) += 8LL;
    }
    if ( v25 )
      CBaseObject::Release(v25);
    if ( v13 )
      CBaseObject::Release(v13);
LABEL_32:
    Flink = Flink->Flink;
    if ( Flink == v35 )
      goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8B,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
    (const char *)(unsigned int)inserted);
  CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v15 + 8));
  if ( v13 )
    CBaseObject::Release(v13);
  v6 = v20;
LABEL_39:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v29);
  wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___((__int64)&v37);
  return v6;
}
