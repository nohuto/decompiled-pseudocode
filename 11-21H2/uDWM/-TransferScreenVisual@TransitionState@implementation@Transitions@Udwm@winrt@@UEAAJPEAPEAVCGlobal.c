/*
 * XREFs of ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800FE5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180004E98 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800125AC (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001A200 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1800BACFC (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800FC488 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 *     ??4?$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataVisual@@@Z @ 0x1800FCB64 (--4-$com_ptr_t@VCRenderDataVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderDataV.c)
 *     ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800FD5E4 (-GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV-$com_p.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransferScreenVisual(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CGlobalTimeTrackVisual **a2,
        struct CAnimatedTransitionVisual **a3,
        char a4)
{
  char v6; // r12
  int RootRenderDataVisual; // eax
  unsigned int v8; // r14d
  volatile signed __int32 *v9; // rbx
  int v10; // edx
  int v11; // r8d
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  CWindowList *v16; // rcx
  HWND ShellWindowForDesktop; // rax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  CBaseObject *v20; // rsi
  CAnimatedTransitionVisual *v21; // rdi
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  CBaseObject *v24; // rcx
  CBaseObject *v26; // [rsp+30h] [rbp-49h] BYREF
  CBaseObject *v27; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v28[2]; // [rsp+40h] [rbp-39h] BYREF
  int v29; // [rsp+48h] [rbp-31h]
  CAnimatedTransitionVisual *v30; // [rsp+50h] [rbp-29h] BYREF
  CBaseObject *v31; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-19h] BYREF
  struct CGlobalTimeTrackVisual **v33; // [rsp+68h] [rbp-11h]
  struct CAnimatedTransitionVisual **v34; // [rsp+70h] [rbp-9h]
  winrt::Udwm::Transitions::implementation::TransitionState *v35; // [rsp+78h] [rbp-1h]
  char v36; // [rsp+80h] [rbp+7h]
  struct tagRECT v37; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v34 = a3;
  v33 = a2;
  v35 = this;
  v6 = 1;
  v36 = 1;
  v26 = 0LL;
  RootRenderDataVisual = winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
                           (__int64)this,
                           &v26);
  v8 = RootRenderDataVisual;
  if ( RootRenderDataVisual < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
      (const char *)(unsigned int)RootRenderDataVisual);
    v9 = (volatile signed __int32 *)v26;
    goto LABEL_33;
  }
  v37.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 93);
  v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  v37.right = v10 + v37.left;
  v37.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 94);
  v11 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
  v37.bottom = v11 + v37.top;
  v12 = v10;
  if ( v10 < 0 )
    v12 = 0;
  LODWORD(v27) = v12;
  v13 = 0;
  if ( v10 >= 0 )
    v13 = v10;
  v28[0] = v13;
  v14 = v11;
  if ( v11 < 0 )
    v14 = 0;
  HIDWORD(v27) = v14;
  v15 = 0;
  if ( v11 >= 0 )
    v15 = v11;
  v29 = v15;
  GetDesktopID(1LL, &v32);
  v31 = 0LL;
  v16 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
  if ( a4 )
  {
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(v16);
    RootVisualForDesktop = (struct CRenderDataVisual *)*((_QWORD *)CWindowList::FindWindowDataByHwnd(
                                                                     *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 52),
                                                                     ShellWindowForDesktop)
                                                       + 55);
  }
  else
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v16, v32);
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(&v31, (volatile signed __int32 *)RootVisualForDesktop);
  v30 = 0LL;
  inserted = CAnimatedTransitionVisual::Create(&v30);
  v8 = inserted;
  v9 = (volatile signed __int32 *)v26;
  v20 = v31;
  v21 = v30;
  if ( inserted >= 0 )
  {
    inserted = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v30, v31, 1, &v37);
    v8 = inserted;
    if ( inserted >= 0 )
    {
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v21, &v37);
      *(struct tagRECT *)((char *)v21 + 872) = v37;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v21 + 8), 4096);
      v28[1] = v29;
      inserted = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*((_QWORD *)v21 + 1) + 96LL))((__int64)v21 + 8, v28);
      v8 = inserted;
      if ( inserted >= 0 )
      {
        *((_QWORD *)v21 + 119) = v27;
        CVisual::SetInterpolationMode((unsigned int *)v21 + 2, 1u);
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(v9 + 8),
                     (CAnimatedTransitionVisual *)((char *)v21 + 8),
                     0LL,
                     0,
                     1);
        v8 = inserted;
        if ( inserted >= 0 )
        {
          wil::com_ptr_t<CRenderDataVisual,wil::err_returncode_policy>::operator=((CBaseObject **)this + 6, v9);
          v26 = 0LL;
          *v33 = (struct CGlobalTimeTrackVisual *)v9;
          v27 = (CAnimatedTransitionVisual *)((char *)v21 + 8);
          _InterlockedAdd((volatile signed __int32 *)v21 + 4, 1u);
          v23 = (_QWORD *)*((_QWORD *)this + 8);
          if ( v23 == *((_QWORD **)this + 9) )
          {
            std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>(
              (const char *)this + 56,
              (__int64)v23,
              (__int64 *)&v27);
            v24 = v27;
          }
          else
          {
            v24 = 0LL;
            *v23 = (char *)v21 + 8;
            *((_QWORD *)this + 8) += 8LL;
          }
          if ( v24 )
            CBaseObject::Release(v24);
          v21 = 0LL;
          *v34 = v30;
          v6 = 0;
          v8 = 0;
          v9 = (volatile signed __int32 *)v26;
          v20 = v31;
          goto LABEL_29;
        }
        v22 = 214LL;
      }
      else
      {
        v22 = 211LL;
      }
    }
    else
    {
      v22 = 208LL;
    }
  }
  else
  {
    v22 = 207LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
    (const char *)(unsigned int)inserted);
LABEL_29:
  if ( v21 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v21 + 8));
  if ( v20 )
    CBaseObject::Release(v20);
LABEL_33:
  if ( v9 )
    CBaseObject::Release((CBaseObject *)v9);
  if ( v6 )
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(this);
  return v8;
}
