/*
 * XREFs of ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1805DA2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z @ 0x1801078DC (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x1805DA5F4 (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x1805DAAC0 (-ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1805E7BE8 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?ComputeGutterTouchTargeting@ImmersiveApplicationLayout@@YAHHW4DEVICE_SCALE_FACTOR@@@Z @ 0x18074602C (-ComputeGutterTouchTargeting@ImmersiveApplicationLayout@@YAHHW4DEVICE_SCALE_FACTOR@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall JointDivider::AppLayoutChanged(JointDivider *this, struct IAppLayout *a2)
{
  enum DEVICE_SCALE_FACTOR v4; // ecx
  HFONT GlyphFont; // rbx
  void *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v10)(struct IAppLayout *, _QWORD, __int64, GUID *, int *); // rbx
  int v11; // eax
  enum DEVICE_SCALE_FACTOR v12; // r8d
  unsigned __int16 v13; // ax
  HRESULT v14; // eax
  void *v15; // rbx
  __int64 (__fastcall *v16)(void *, _BYTE *, struct IApplicationView **); // rdi
  int v17; // eax
  __int64 v18; // rdx
  HWND v19; // rcx
  struct IApplicationView *v20; // [rsp+40h] [rbp-19h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-11h] BYREF
  int v22[2]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v23[8]; // [rsp+58h] [rbp-1h] BYREF
  int X[4]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp+17h] BYREF
  enum DEVICE_SCALE_FACTOR v26; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  (*(void (__fastcall **)(struct IAppLayout *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v25);
  v4 = v26;
  if ( v26 != *((_DWORD *)this + 14) )
  {
    *((_DWORD *)this + 14) = v26;
    *((_QWORD *)this + 6) = 0LL;
    GlyphFont = JointDivider_LoadGlyphFont(v4);
    v6 = (void *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v6 )
      DeleteObject(v6);
    *((_QWORD *)this + 6) = GlyphFont;
  }
  Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)this + 5, (__int64)a2);
  if ( (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 2LL) == 1 )
  {
    v7 = JointDivider::EnsureWindow((JointDivider *)((char *)this - 24));
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    *(_QWORD *)v22 = 0LL;
    v10 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v22);
    v11 = v10(a2, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v22);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v11);
LABEL_22:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v22);
      return v8;
    }
    *(_OWORD *)X = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v22 + 56LL))(*(_QWORD *)v22, 0LL, X);
    if ( SetWindowPos(*((HWND *)this + 3), 0LL, X[0], X[1], X[2] - X[0], X[3] - X[1], 0x54u) )
    {
      v13 = ImmersiveApplicationLayout::ComputeGutterTouchTargeting(
              (ImmersiveApplicationLayout *)(unsigned int)(X[2] - X[0]),
              *((_DWORD *)this + 14),
              v12);
      RegisterTouchHitTestingWindow(*((_QWORD *)this + 3), (v13 << 16) | 3u);
    }
    if ( !IsPPIEdition() )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      v14 = IUnknown_QueryService(
              *((IUnknown **)this - 1),
              (const GUID *const)&SID_ShellTargetingTracker,
              &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
              &ppvOut);
      v8 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x71,
          (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
          (const char *)(unsigned int)v14);
LABEL_21:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_22;
      }
      v20 = 0LL;
      v15 = ppvOut;
      v16 = *(__int64 (__fastcall **)(void *, _BYTE *, struct IApplicationView **))(*(_QWORD *)ppvOut + 40LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
      v17 = v16(v15, v23, &v20);
      v8 = v17;
      if ( v17 < 0 )
      {
        v18 = 117LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
        goto LABEL_21;
      }
      v17 = JointDivider::ShellTargetChanged(this, v20);
      v8 = v17;
      if ( v17 < 0 )
      {
        v18 = 118LL;
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    InvalidateRect(*((HWND *)this + 3), 0LL, 1);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v22);
  }
  else
  {
    v19 = (HWND)*((_QWORD *)this + 3);
    if ( v19 )
      ShowWindow(v19, 0);
  }
  return 0LL;
}
