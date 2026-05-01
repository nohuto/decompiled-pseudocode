/*
 * XREFs of ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x180502EF0
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502E7C (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180504750 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x180180528 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1804A7844 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     _lambda_23023fe66ba1e99252325d41c7c7d54a_::operator() @ 0x1805001B8 (_lambda_23023fe66ba1e99252325d41c7c7d54a_--operator().c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x180500628 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805048C4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180505420 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x180508F54 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x18050DA50 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::ForegroundViewChanged(
        ScreenManagerHelpers **this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        char a3,
        bool *a4)
{
  unsigned int v8; // r14d
  __int64 *AddressOf; // rax
  struct IApplicationView **v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int inited; // eax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  HWND v19; // [rsp+30h] [rbp-10h] BYREF
  HWND v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v22; // [rsp+60h] [rbp+20h] BYREF
  HWND v23; // [rsp+78h] [rbp+38h] BYREF

  if ( a4 )
    *a4 = 0;
  if ( (*(unsigned int (__fastcall **)(ScreenManagerHelpers *))(*(_QWORD *)this[31] + 184LL))(this[31]) )
  {
    if ( a3 )
      return 0LL;
LABEL_16:
    v23 = 0LL;
    if ( !IsSurfaceHubWithWin32VtcEnabled() || (int)PPISideBarHelpers::GetWindowfromView(a2, &v23) < 0 )
      goto LABEL_29;
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               (TabletModePositioner *)this,
               &CLSID_PPIWin32VtcLayoutOperation,
               &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
               &v22);
    if ( inited < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7D2,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
    v19 = 0LL;
    v20 = 0LL;
    if ( (*(int (__fastcall **)(void *, HWND *, HWND *))(*(_QWORD *)v22 + 96LL))(v22, &v19, &v20) >= 0 )
    {
      if ( v19 != v23 )
      {
        if ( v20 != v23 )
          goto LABEL_28;
        v16 = (*(__int64 (__fastcall **)(ScreenManagerHelpers *, HWND, __int64))(*(_QWORD *)this[57] + 40LL))(
                this[57],
                v20,
                -1LL);
        v17 = retaddr;
        if ( v16 >= 0 )
          goto LABEL_28;
        v18 = 2015LL;
        goto LABEL_27;
      }
      v16 = (*(__int64 (__fastcall **)(ScreenManagerHelpers *, HWND, __int64))(*(_QWORD *)this[57] + 40LL))(
              this[57],
              v19,
              -1LL);
      v17 = retaddr;
      if ( v16 < 0 )
      {
        v18 = 2011LL;
LABEL_27:
        wil::details::in1diag3::_Log_Hr(
          v17,
          (void *)v18,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v16);
      }
    }
LABEL_28:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
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
  v23 = (HWND)this;
  v22 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v22);
  if ( (int)ScreenManagerHelpers::IsRelatedWin32ViewPresentInLayout(
              this[31],
              (struct IAppLayout *)a2,
              (struct IApplicationView *)AddressOf,
              v10) < 0
    || lambda_23023fe66ba1e99252325d41c7c7d54a_::operator()((TabletModePositioner **)&v23, (__int64)a2) )
  {
    v11 = TabletModePositioner::SwitchToAppHelper(this, a2, v8, 0LL, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 1989LL;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = TabletModePositioner::AppToAppSwitchHelper((TabletModePositioner *)this, (__int64)v22, 5u, (__int64)a2, 0, 1);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 1985LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
      return v12;
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
  return 0LL;
}
