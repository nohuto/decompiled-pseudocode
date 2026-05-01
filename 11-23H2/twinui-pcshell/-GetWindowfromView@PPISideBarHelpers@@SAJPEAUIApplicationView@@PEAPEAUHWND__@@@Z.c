/*
 * XREFs of ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x180564D10
 * Callers:
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802E0DE2 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x180564DE0 (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1805BB6D0 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1805D6EA4 (-GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPISideBarHelpers::GetWindowfromView(
        __int64 (__fastcall ***a1)(struct IApplicationView *, GUID *, __int64 *),
        HWND *a2)
{
  __int64 (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v4 = **a1;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
  v5 = v4((struct IApplicationView *)a1, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v10 + 24LL))(v10, a2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 27LL;
  }
  else
  {
    v7 = 26LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"desktop\\internal\\shell\\inc\\private\\PPISideBarHelpers2.h",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
  return v6;
}
