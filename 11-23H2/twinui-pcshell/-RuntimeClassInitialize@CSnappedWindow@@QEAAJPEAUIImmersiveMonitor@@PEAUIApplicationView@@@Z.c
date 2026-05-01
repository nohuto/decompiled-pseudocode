/*
 * XREFs of ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x180686D58
 * Callers:
 *     ??$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindow@@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Z @ 0x180686950 (--$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Det.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18007769C (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x180107680 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1802E964C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1802E964C.c)
 *     ?CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802EBA66 (-CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnappedWindow::RuntimeClassInitialize(
        CSnappedWindow *this,
        struct IImmersiveMonitor *a2,
        struct IApplicationView *a3)
{
  __int64 (__fastcall ****v6)(ApplicationViewHelpers *, GUID *, __int64); // r15
  unsigned int v7; // r14d
  int (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  struct IApplicationView *v9; // rdx
  bool v10; // bl
  struct IApplicationView *v11; // rdx
  HWND WindowForView; // rax
  struct IApplicationView *v13; // rdx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v20[4]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v6 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))((char *)this + 32);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 4, (__int64)a3);
  Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((__int64 *)this + 3, (__int64)a2);
  v7 = 0;
  v19 = 0LL;
  v8 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a3 + 264LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  if ( v8(a3, &v19) < 0 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19) != 6 )
  {
    *((_BYTE *)this + 16) = ApplicationViewHelpers::CanResizeView(*v6, v9);
    v10 = 0;
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(*v6, v11);
    if ( WindowForView )
      v10 = (GetWindowLongPtrW(WindowForView, -16) & 0x20000) != 0;
    *((_BYTE *)this + 17) = v10;
    *((_BYTE *)this + 18) = ApplicationViewHelpers::CanMaximizeView((ApplicationViewHelpers *)*v6, v13);
  }
  v21 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v21);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = (unsigned int)v14;
    v17 = 74LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
      (const char *)v16);
    v7 = v15;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(CSnappedWindow *, _DWORD *))(*(_QWORD *)this + 48LL))(this, v20);
  if ( v20[0] >= v20[2] || v20[1] >= v20[3] )
  {
    v15 = -2147418113;
    v16 = 2147549183LL;
    v17 = 77LL;
    goto LABEL_12;
  }
  *((_DWORD *)this + 10) = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(v20, a2);
LABEL_13:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  return v7;
}
