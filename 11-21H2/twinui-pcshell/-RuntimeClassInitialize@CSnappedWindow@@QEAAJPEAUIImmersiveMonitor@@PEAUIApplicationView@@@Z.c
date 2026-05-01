/*
 * XREFs of ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x1805AB698
 * Callers:
 *     ??$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnappedWindow@@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Z @ 0x1805AB1F8 (--$MakeAndInitialize@VCSnappedWindow@@V1@AEAPEAUIImmersiveMonitor@@AEAPEAUIApplicationView@@@Det.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800F1820 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1805A33B4 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1805A33B4.c)
 *     ?CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFA40 (-CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnappedWindow::RuntimeClassInitialize(
        CSnappedWindow *this,
        struct IImmersiveMonitor *a2,
        struct IApplicationView *a3)
{
  ApplicationViewHelpers **v6; // r15
  unsigned int v7; // r14d
  int (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IApplicationView *v10; // rdx
  bool v11; // bl
  struct IApplicationView *v12; // rdx
  HWND WindowForView; // rax
  struct IApplicationView *v14; // rdx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  int v21[4]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v22; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v6 = (ApplicationViewHelpers **)((char *)this + 32);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 4, (__int64)a3);
  Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((__int64 *)this + 3, (__int64)a2);
  v7 = 0;
  v20 = 0LL;
  v8 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a3 + 264LL);
  AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v20);
  if ( v8(a3, AddressOf) < 0 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20) != 6 )
  {
    *((_BYTE *)this + 16) = ApplicationViewHelpers::CanResizeView(*v6, v10);
    v11 = 0;
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))*v6,
                            v12);
    if ( WindowForView )
      v11 = (GetWindowLongPtrW(WindowForView, -16) & 0x20000) != 0;
    *((_BYTE *)this + 17) = v11;
    *((_BYTE *)this + 18) = ApplicationViewHelpers::CanMaximizeView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))*v6,
                              v14);
  }
  v22 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v22);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = (unsigned int)v15;
    v18 = 74LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
      (const char *)v17);
    v7 = v16;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(CSnappedWindow *, int *))(*(_QWORD *)this + 48LL))(this, v21);
  if ( v21[0] >= v21[2] || v21[1] >= v21[3] )
  {
    v16 = -2147418113;
    v17 = 2147549183LL;
    v18 = 77LL;
    goto LABEL_12;
  }
  *((_DWORD *)this + 10) = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(v21, a2);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  return v7;
}
