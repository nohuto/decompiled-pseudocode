/*
 * XREFs of ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1805BB6D0
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805BB658 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1805BCCE0 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x180564D10 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     _lambda_23023fe66ba1e99252325d41c7c7d54a_::operator() @ 0x1805B897C (_lambda_23023fe66ba1e99252325d41c7c7d54a_--operator().c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1805B8DE8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805BCE54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1805BD9B0 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1805C141C (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x1805C5EB4 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::ForegroundViewChanged(
        ScreenManagerHelpers **this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        char a3,
        bool *a4)
{
  unsigned int v8; // r14d
  struct IApplicationView **v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int inited; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  HWND v18; // [rsp+30h] [rbp-10h] BYREF
  HWND v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v21; // [rsp+60h] [rbp+20h] BYREF
  HWND v22; // [rsp+78h] [rbp+38h] BYREF

  if ( a4 )
    *a4 = 0;
  if ( (*(unsigned int (__fastcall **)(ScreenManagerHelpers *))(*(_QWORD *)this[31] + 184LL))(this[31]) )
  {
    if ( a3 )
      return 0LL;
LABEL_16:
    v22 = 0LL;
    if ( !IsSurfaceHubWithWin32VtcEnabled() || (int)PPISideBarHelpers::GetWindowfromView(a2, &v22) < 0 )
      goto LABEL_29;
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               (TabletModePositioner *)this,
               &CLSID_PPIWin32VtcLayoutOperation,
               &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
               &v21);
    if ( inited < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7D2,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
    v18 = 0LL;
    v19 = 0LL;
    if ( (*(int (__fastcall **)(void *, HWND *, HWND *))(*(_QWORD *)v21 + 96LL))(v21, &v18, &v19) >= 0 )
    {
      if ( v18 != v22 )
      {
        if ( v19 != v22 )
          goto LABEL_28;
        v15 = (*(__int64 (__fastcall **)(ScreenManagerHelpers *, HWND, __int64))(*(_QWORD *)this[57] + 40LL))(
                this[57],
                v19,
                -1LL);
        v16 = retaddr;
        if ( v15 >= 0 )
          goto LABEL_28;
        v17 = 2015LL;
        goto LABEL_27;
      }
      v15 = (*(__int64 (__fastcall **)(ScreenManagerHelpers *, HWND, __int64))(*(_QWORD *)this[57] + 40LL))(
              this[57],
              v18,
              -1LL);
      v16 = retaddr;
      if ( v15 < 0 )
      {
        v17 = 2011LL;
LABEL_27:
        wil::details::in1diag3::_Log_Hr(
          v16,
          (void *)v17,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v15);
      }
    }
LABEL_28:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
LABEL_29:
    ((void (__fastcall *)(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), __int64))(*a2)[12])(
      a2,
      1LL);
    return 0LL;
  }
  if ( !a3 )
    goto LABEL_16;
  v8 = 1;
  if ( (unsigned __int8)TabletModePositioner::IsSwitcherVisible(this, 2LL) )
    v8 = 9;
  v22 = (HWND)this;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
  if ( (int)ScreenManagerHelpers::IsRelatedWin32ViewPresentInLayout(
              this[31],
              (struct IAppLayout *)a2,
              (struct IApplicationView *)&v21,
              v9) < 0
    || lambda_23023fe66ba1e99252325d41c7c7d54a_::operator()((TabletModePositioner **)&v22, (__int64)a2) )
  {
    v10 = TabletModePositioner::SwitchToAppHelper(this, a2, v8, 0LL, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1989LL;
      goto LABEL_13;
    }
  }
  else
  {
    v10 = TabletModePositioner::AppToAppSwitchHelper((TabletModePositioner *)this, (__int64)v21, 5u, (__int64)a2, 0, 1);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1985LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
      return v11;
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
  return 0LL;
}
