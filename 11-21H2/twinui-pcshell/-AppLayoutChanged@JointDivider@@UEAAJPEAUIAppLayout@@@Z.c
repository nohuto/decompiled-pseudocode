/*
 * XREFs of ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1805218D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z @ 0x18011B280 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x180521C4C (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z @ 0x180522110 (-ShellTargetChanged@JointDivider@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18052CE70 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall JointDivider::AppLayoutChanged(JointDivider *this, struct IAppLayout *a2)
{
  enum DEVICE_SCALE_FACTOR v4; // eax
  HFONT GlyphFont; // rbx
  void *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v10)(struct IAppLayout *, _QWORD, __int64, GUID *, int *); // rbx
  int v11; // eax
  unsigned __int16 v12; // r9
  HRESULT v13; // eax
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, _BYTE *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v17; // eax
  __int64 v18; // rdx
  HWND v19; // rcx
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  int v21[2]; // [rsp+48h] [rbp-11h] BYREF
  struct IApplicationView *v22; // [rsp+50h] [rbp-9h] BYREF
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
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    *(_QWORD *)v21 = 0LL;
    v10 = *(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64, GUID *, int *))(*(_QWORD *)a2 + 104LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v21);
    v11 = v10(a2, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v21);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
        (const char *)(unsigned int)v11);
LABEL_24:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v21);
      return v8;
    }
    *(_OWORD *)X = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)v21 + 56LL))(*(_QWORD *)v21, 0LL, X);
    if ( SetWindowPos(*((HWND *)this + 3), 0LL, X[0], X[1], X[2] - X[0], X[3] - X[1], 0x54u) )
    {
      v12 = 184;
      if ( X[2] - X[0] == 16 * *((_DWORD *)this + 14) / 100 )
        v12 = 204;
      RegisterTouchHitTestingWindow(*((_QWORD *)this + 3), (v12 << 16) | 3u);
    }
    if ( !IsPPIEdition() )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      v13 = IUnknown_QueryService(
              *((IUnknown **)this - 1),
              (const GUID *const)&SID_ShellTargetingTracker,
              &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
              &ppvOut);
      v8 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x71,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
          (const char *)(unsigned int)v13);
LABEL_23:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_24;
      }
      v22 = 0LL;
      v14 = ppvOut;
      v15 = *(__int64 (__fastcall **)(void *, _BYTE *, __int64 *))(*(_QWORD *)ppvOut + 40LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v22);
      v17 = v15(v14, v23, AddressOf);
      v8 = v17;
      if ( v17 < 0 )
      {
        v18 = 117LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
        goto LABEL_23;
      }
      v17 = JointDivider::ShellTargetChanged(this, v22);
      v8 = v17;
      if ( v17 < 0 )
      {
        v18 = 118LL;
        goto LABEL_22;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    }
    InvalidateRect(*((HWND *)this + 3), 0LL, 1);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v21);
  }
  else
  {
    v19 = (HWND)*((_QWORD *)this + 3);
    if ( v19 )
      ShowWindow(v19, 0);
  }
  return 0LL;
}
