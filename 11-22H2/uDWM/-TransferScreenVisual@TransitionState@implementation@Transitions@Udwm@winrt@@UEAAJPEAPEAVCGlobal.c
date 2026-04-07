/*
 * XREFs of ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x180102F40
 * Callers:
 *     <none>
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18000D0CC (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180052D5C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7544 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800BEDBC (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180100794 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 *     wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___ @ 0x180100EBC (wil--details--lambda_call__lambda_e5362848fe0381a2024b7815ced62145___--_lambda_call__lambda_e536.c)
 *     ??4?$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataVisual@@@Z @ 0x180101054 (--4-$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataV.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180101EE4 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisual(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CGlobalTimeTrackVisual **a2,
        struct CAnimatedTransitionVisual **a3,
        char a4)
{
  int RootRenderDataVisual; // eax
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // r8
  int v11; // eax
  int v12; // r15d
  int v13; // eax
  int v14; // r12d
  CWindowList *v15; // rcx
  HWND ShellWindowForDesktop; // rax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int v18; // eax
  CBaseObject *v19; // rdi
  CAnimatedTransitionVisual *v20; // rbx
  int v21; // eax
  int v22; // esi
  unsigned __int64 v23; // rsi
  int v24; // eax
  int v25; // eax
  int v26; // r15d
  volatile signed __int32 *v27; // r15
  volatile signed __int32 *v28; // rsi
  int inserted; // eax
  int v30; // r12d
  volatile signed __int32 **v32; // rdx
  CBaseObject *v33; // rcx
  int v34; // [rsp+20h] [rbp-49h]
  CBaseObject *v35; // [rsp+30h] [rbp-39h] BYREF
  CAnimatedTransitionVisual *v36; // [rsp+38h] [rbp-31h] BYREF
  CBaseObject *v37; // [rsp+40h] [rbp-29h] BYREF
  CBaseObject *v38; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v40[2]; // [rsp+58h] [rbp-11h] BYREF
  struct CGlobalTimeTrackVisual **v41; // [rsp+60h] [rbp-9h]
  winrt::Udwm::Transitions::implementation::TransitionState *v42; // [rsp+68h] [rbp-1h] BYREF
  char v43; // [rsp+70h] [rbp+7h]
  struct tagRECT v44; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v41 = a2;
  v42 = this;
  v43 = 1;
  v38 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
                           (__int64)this,
                           &v38,
                           (__int64)a3);
  v8 = RootRenderDataVisual;
  if ( RootRenderDataVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
LABEL_24:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v38);
    wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___((__int64)&v42);
    return v8;
  }
  v44.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99);
  v44.right = v9 + v44.left;
  v44.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v10 = *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 100);
  v44.bottom = v10 + v44.top;
  v11 = v9;
  if ( v9 < 0 )
    v11 = 0;
  LODWORD(v37) = v11;
  v12 = 0;
  if ( v9 >= 0 )
    v12 = v9;
  v13 = v10;
  if ( (int)v10 < 0 )
    v13 = 0;
  HIDWORD(v37) = v13;
  v14 = 0;
  if ( (int)v10 >= 0 )
    v14 = v10;
  GetDesktopID(1LL, &v39, v10);
  v35 = 0LL;
  v15 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
  if ( a4 )
  {
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(v15, v39);
    RootVisualForDesktop = (struct CRenderDataVisual *)*((_QWORD *)CWindowList::FindWindowDataByHwnd(
                                                                     *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 54),
                                                                     ShellWindowForDesktop)
                                                       + 55);
  }
  else
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v15, v39);
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(&v35, (volatile signed __int32 *)RootVisualForDesktop);
  v36 = 0LL;
  v18 = CAnimatedTransitionVisual::Create(&v36);
  v8 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v36);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v35);
    goto LABEL_24;
  }
  v19 = v35;
  v20 = v36;
  v21 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v36, v35, 1, &v44);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)v21);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v36);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v35);
    v8 = v22;
    goto LABEL_24;
  }
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v20, &v44);
  *(struct tagRECT *)((char *)v20 + 872) = v44;
  v23 = (unsigned __int64)v20 + 8;
  v24 = *((_DWORD *)v20 + 24);
  if ( (v24 & 0x1000) == 0 )
  {
    *((_DWORD *)v20 + 24) = v24 | 0x1000;
    CVisual::PropagateDirtyChildren((CAnimatedTransitionVisual *)((char *)v20 + 8));
  }
  v40[0] = v12;
  v40[1] = v14;
  v25 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v23 + 104LL))((__int64)v20 + 8, v40);
  v26 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)v25);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v36);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v35);
    v8 = v26;
    goto LABEL_24;
  }
  *((_QWORD *)v20 + 119) = v37;
  CVisual::SetInterpolationMode((unsigned int *)v20 + 2, 1u);
  v27 = (volatile signed __int32 *)(v23 & -(__int64)(v20 != 0LL));
  v28 = (volatile signed __int32 *)v38;
  inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v38 + 32), (unsigned __int64)v27, 0LL, 0, v34);
  v30 = inserted;
  if ( inserted < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)inserted);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v36);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v35);
    v8 = v30;
    goto LABEL_24;
  }
  wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=((CBaseObject **)this + 6, v28);
  v38 = 0LL;
  *v41 = (struct CGlobalTimeTrackVisual *)v28;
  v37 = (CBaseObject *)v27;
  if ( v27 )
  {
    _InterlockedIncrement(v27 + 2);
    v19 = v35;
    v20 = v36;
  }
  v32 = (volatile signed __int32 **)*((_QWORD *)this + 8);
  if ( v32 == *((volatile signed __int32 ***)this + 9) )
  {
    std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
      (const char *)this + 56,
      (__int64)v32,
      (__int64 *)&v37);
    v33 = v37;
  }
  else
  {
    v33 = 0LL;
    *v32 = v27;
    *((_QWORD *)this + 8) += 8LL;
  }
  if ( v33 )
    CBaseObject::Release(v33);
  *a3 = v20;
  if ( v19 )
    CBaseObject::Release(v19);
  return 0LL;
}
