/*
 * XREFs of ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1803CEDA0
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x1803CD670 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator() @ 0x1803CCF30 (_lambda_3862d1887d3f5208accb0e0621fd5fc4_--operator().c)
 *     _lambda_75a4041602ec37de7ff5767e8a1dec06_::operator() @ 0x1803CCFA4 (_lambda_75a4041602ec37de7ff5767e8a1dec06_--operator().c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x1803CF284 (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::SetPosition(
        CWin32ApplicationView *this,
        int (__fastcall ***a2)(struct IApplicationViewPosition *, GUID *, __int64 *))
{
  HWND v3; // rsi
  int (__fastcall *v4)(struct IApplicationViewPosition *, GUID *, __int64 *); // rbx
  int v5; // eax
  signed int LastErrorFailHr; // ebx
  int (__fastcall *v7)(struct IApplicationViewPosition *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // edi
  int v11; // ebx
  wil::details *v12; // rcx
  UINT showCmd; // eax
  CWin32ApplicationView *v14; // rcx
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v22; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v23[44]; // [rsp+78h] [rbp-88h]
  WINDOWPLACEMENT wndpl; // [rsp+A8h] [rbp-58h] BYREF
  struct tagWINDOWPLACEMENT v25; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v26[16]; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( !IsWindowVisible(v3) )
    return 0LL;
  v17 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  if ( v4((struct IApplicationViewPosition *)a2, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &v17) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, WINDOWPLACEMENT *))(*(_QWORD *)v17 + 72LL))(v17, &wndpl);
    LastErrorFailHr = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C2,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v5);
LABEL_34:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
      return (unsigned int)LastErrorFailHr;
    }
    *(_DWORD *)v23 = 44;
    *(_OWORD *)&v23[4] = *(_OWORD *)&wndpl.length;
    *(_QWORD *)&v23[20] = *(_QWORD *)&wndpl.ptMinPosition.y;
    *(_OWORD *)&v23[28] = *(_OWORD *)&wndpl.ptMaxPosition.y;
    *(_OWORD *)&v25.length = *(_OWORD *)v23;
    *(_OWORD *)&v25.ptMinPosition.y = *(_OWORD *)&v23[16];
    *(_QWORD *)&v25.rcNormalPosition.top = *(_OWORD *)&wndpl.ptMaxPosition.y >> 32;
    v25.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&wndpl.ptMaxPosition.y, 12));
    v25.flags = wndpl.length | 4;
    LastErrorFailHr = CWin32ApplicationView::SetWindowPosition((CWin32ApplicationView *)(wndpl.length | 4), v3, &v25);
    if ( LastErrorFailHr < 0 )
      goto LABEL_34;
  }
  v16 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  if ( v7((struct IApplicationViewPosition *)a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v16) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 32LL))(v16, &v19);
    LastErrorFailHr = v8;
    if ( v8 < 0 )
    {
      v9 = 464LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_33;
    }
    if ( v19 == 4 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 24LL))(v16, v26);
      LastErrorFailHr = v8;
      if ( v8 < 0 )
      {
        v9 = 470LL;
        goto LABEL_31;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 40LL))(v16, &v21);
      LastErrorFailHr = v8;
      if ( v8 < 0 )
      {
        v9 = 473LL;
        goto LABEL_31;
      }
      v10 = (v21 & 1) != 0 ? 1 : 16;
      v11 = v21 & 2 | 1;
      v18 = 0LL;
      v22 = &v18;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v20);
      if ( v20 )
        lambda_75a4041602ec37de7ff5767e8a1dec06_::operator()(&v22, (__int64)v20);
      Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v20);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD, _BYTE *, int, int, int))(*(_QWORD *)v18 + 24LL))(
                          v18,
                          v3,
                          0LL,
                          v26,
                          3,
                          v10,
                          v11);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
    }
    else
    {
      if ( v17 )
        goto LABEL_35;
      if ( v19 != 3 )
      {
LABEL_19:
        if ( !v16 )
        {
          wndpl.length = 44;
          memset(&wndpl.flags, 0, 40);
          if ( !GetWindowPlacement(v3, &wndpl) )
          {
            LastErrorFailHr = wil::details::GetLastErrorFailHr(v12);
            goto LABEL_33;
          }
          showCmd = wndpl.showCmd;
          if ( wndpl.showCmd == 3 )
            showCmd = 9;
          wndpl.showCmd = showCmd;
          v8 = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *), RECT *))(*a2)[3])(
                 a2,
                 &wndpl.rcNormalPosition);
          LastErrorFailHr = v8;
          if ( v8 < 0 )
          {
            v9 = 499LL;
            goto LABEL_31;
          }
          wndpl.flags |= 4u;
          LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v14, v3, &wndpl);
          if ( LastErrorFailHr < 0 )
            goto LABEL_33;
        }
        goto LABEL_35;
      }
      v18 = 0LL;
      v22 = &v18;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v20);
      if ( v20 )
        lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator()(&v22, (__int64)v20);
      Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v20);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v18 + 32LL))(v18, v3, 5LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    }
    if ( LastErrorFailHr < 0 )
    {
LABEL_33:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
      goto LABEL_34;
    }
  }
  if ( !v17 )
    goto LABEL_19;
LABEL_35:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return 0LL;
}
