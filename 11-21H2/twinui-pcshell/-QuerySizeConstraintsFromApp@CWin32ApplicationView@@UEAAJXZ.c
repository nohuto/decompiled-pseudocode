/*
 * XREFs of ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x1800E7040
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x1800E74A0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator() @ 0x1800E70DC (_lambda_b8642ff14e560df3dcd31f4e91e1514d_--operator().c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EACA0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800ED4D4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QuerySizeConstraintsFromApp(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64))
{
  __int64 v2; // rdx
  struct IApplicationView *v3; // rdx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64); // rdi
  __int64 WindowForView; // rax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v11; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v11 = &v9;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v10);
  v2 = v10;
  if ( v10 )
    lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator()(&v11);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v10, v2);
  v4 = v9;
  if ( v9 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL);
    WindowForView = ApplicationViewHelpers::GetWindowForView(this, v3);
    v7 = v5(v4, WindowForView);
  }
  else
  {
    v7 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  return v7;
}
