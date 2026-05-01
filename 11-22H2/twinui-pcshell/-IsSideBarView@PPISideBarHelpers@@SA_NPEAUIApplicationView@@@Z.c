/*
 * XREFs of ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x180564DE0
 * Callers:
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802E0DE2 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ @ 0x1805BD808 (-IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1805C3E30 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?_IsViewDefaultVTCApp@PPIWin32VtcLayoutOperation@@MEAA_NPEAUIApplicationView@@@Z @ 0x1805CF0C0 (-_IsViewDefaultVTCApp@PPIWin32VtcLayoutOperation@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1805D6EA4 (-GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1805649C8 (-FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x180564D10 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall PPISideBarHelpers::IsSideBarView(
        __int64 (__fastcall ***a1)(struct IApplicationView *, GUID *, __int64 *))
{
  unsigned int ActivationFactory; // eax
  unsigned int v2; // eax
  const char *v4; // [rsp+28h] [rbp-48h]
  const char *v5; // [rsp+28h] [rbp-48h]
  _BYTE v6[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  HWND v8; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( (int)PPISideBarHelpers::GetWindowfromView(a1, &v8) >= 0 )
  {
    v6[0] = 0;
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Vtc.Win32VtcView",
      0x22u,
      0x21u);
    ActivationFactory = RoGetActivationFactory(v10, &GUID_24d7c183_14a3_5525_b34b_e90a5af9e8e7, &v7);
    wil::details::in1diag3::FailFast_IfFailedMsg(
      retaddr,
      (void *)0x2C,
      (int)"desktop\\internal\\shell\\inc\\private\\PPISideBarHelpers2.h",
      (const char *)ActivationFactory,
      (__int64)"Do not use PPIWin32VtcLayoutOperation on platforms without win32 vtc",
      v4);
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v7 + 56LL))(v7, (unsigned int)v8, v6);
    wil::details::in1diag3::FailFast_IfFailedMsg(
      retaddr,
      (void *)0x2D,
      (int)"desktop\\internal\\shell\\inc\\private\\PPISideBarHelpers2.h",
      (const char *)v2,
      (__int64)"Do not use PPIWin32VtcLayoutOperation on platforms without win32 vtc",
      v5);
    if ( v6[0] )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
      return 1;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  }
  return 0;
}
