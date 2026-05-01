/*
 * XREFs of ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180313640
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x180311E50 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EACA0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800ED4D4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator() @ 0x180311510 (_lambda_3862d1887d3f5208accb0e0621fd5fc4_--operator().c)
 *     _lambda_75a4041602ec37de7ff5767e8a1dec06_::operator() @ 0x180311584 (_lambda_75a4041602ec37de7ff5767e8a1dec06_--operator().c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x180313B34 (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::SetPosition(
        CWin32ApplicationView *this,
        int (__fastcall ***a2)(struct IApplicationViewPosition *, GUID *, __int64 *))
{
  HWND v3; // rsi
  int (__fastcall *v4)(struct IApplicationViewPosition *, GUID *, __int64 *); // rbx
  int v5; // eax
  CWin32ApplicationView *v6; // rcx
  signed int LastErrorFailHr; // ebx
  int (__fastcall *v8)(struct IApplicationViewPosition *, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rdx
  wil::details *v14; // rcx
  __int64 v15; // r8
  const char *v16; // r9
  UINT showCmd; // eax
  CWin32ApplicationView *v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v26; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[44]; // [rsp+78h] [rbp-88h]
  WINDOWPLACEMENT wndpl; // [rsp+A8h] [rbp-58h] BYREF
  struct tagWINDOWPLACEMENT v29; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v30[16]; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( !IsWindowVisible(v3) )
    return 0LL;
  v21 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
  if ( v4((struct IApplicationViewPosition *)a2, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &v21) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, WINDOWPLACEMENT *))(*(_QWORD *)v21 + 72LL))(v21, &wndpl);
    LastErrorFailHr = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D4,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v5);
LABEL_34:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
      return (unsigned int)LastErrorFailHr;
    }
    *(_DWORD *)v27 = 44;
    *(_OWORD *)&v27[4] = *(_OWORD *)&wndpl.length;
    *(_QWORD *)&v27[20] = *(_QWORD *)&wndpl.ptMinPosition.y;
    *(_OWORD *)&v27[28] = *(_OWORD *)&wndpl.ptMaxPosition.y;
    *(_OWORD *)&v29.length = *(_OWORD *)v27;
    *(_OWORD *)&v29.ptMinPosition.y = *(_OWORD *)&v27[16];
    *(_QWORD *)&v29.rcNormalPosition.top = *(_OWORD *)&wndpl.ptMaxPosition.y >> 32;
    v29.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&wndpl.ptMaxPosition.y, 12));
    v29.flags = wndpl.length | 4;
    LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v6, v3, &v29);
    if ( LastErrorFailHr < 0 )
      goto LABEL_34;
  }
  v20 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  if ( v8((struct IApplicationViewPosition *)a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v20) >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 32LL))(v20, &v23);
    LastErrorFailHr = v9;
    if ( v9 < 0 )
    {
      v10 = 482LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_33;
    }
    if ( v23 == 4 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 24LL))(v20, v30);
      LastErrorFailHr = v9;
      if ( v9 < 0 )
      {
        v10 = 488LL;
        goto LABEL_31;
      }
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 40LL))(v20, &v25);
      LastErrorFailHr = v9;
      if ( v9 < 0 )
      {
        v10 = 491LL;
        goto LABEL_31;
      }
      v11 = (v25 & 1) != 0 ? 1 : 16;
      v12 = v25 & 2 | 1;
      v22 = 0LL;
      v26 = &v22;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v24);
      if ( v24 )
        lambda_75a4041602ec37de7ff5767e8a1dec06_::operator()(&v26, (__int64)v24);
      Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v24);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD, _BYTE *, int, int, int))(*(_QWORD *)v22 + 24LL))(
                          v22,
                          v3,
                          0LL,
                          v30,
                          3,
                          v11,
                          v12);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
    }
    else
    {
      if ( v21 )
        goto LABEL_35;
      if ( v23 != 3 )
      {
LABEL_19:
        if ( !v20 )
        {
          wndpl.length = 44;
          memset(&wndpl.flags, 0, 40);
          if ( !GetWindowPlacement(v3, &wndpl) )
          {
            LastErrorFailHr = wil::details::GetLastErrorFailHr(v14, v13, v15, v16);
            goto LABEL_33;
          }
          showCmd = wndpl.showCmd;
          if ( wndpl.showCmd == 3 )
            showCmd = 9;
          wndpl.showCmd = showCmd;
          v9 = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *), RECT *))(*a2)[3])(
                 a2,
                 &wndpl.rcNormalPosition);
          LastErrorFailHr = v9;
          if ( v9 < 0 )
          {
            v10 = 517LL;
            goto LABEL_31;
          }
          wndpl.flags |= 4u;
          LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v18, v3, &wndpl);
          if ( LastErrorFailHr < 0 )
            goto LABEL_33;
        }
        goto LABEL_35;
      }
      v22 = 0LL;
      v26 = &v22;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v24);
      if ( v24 )
        lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator()(&v26, (__int64)v24);
      Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v24);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v22 + 32LL))(v22, v3, 5LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
    }
    if ( LastErrorFailHr < 0 )
    {
LABEL_33:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      goto LABEL_34;
    }
  }
  if ( !v21 )
    goto LABEL_19;
LABEL_35:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
  return 0LL;
}
