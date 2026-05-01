/*
 * XREFs of ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180504750
 * Callers:
 *     ?HandleSwitchToView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@@Z @ 0x18020B090 (-HandleSwitchToView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18004157C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x180502EF0 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1805EFAC8 (-GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::HandleSwitchToView(ScreenManagerHelpers **this, struct IApplicationView *a2)
{
  __int64 *AddressOf; // rax
  struct IApplicationView **v6; // r8
  struct IApplicationView *v7; // rdx
  char IsOperableView; // bp
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v13; // [rsp+40h] [rbp+8h] BYREF
  TabletModePositionerHelpers *v14; // [rsp+50h] [rbp+18h] BYREF

  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)(this - 11)) )
    return 2147947423LL;
  v14 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v14);
  ApplicationViewHelpers::GetRootSwitchableOwnerOrSelf(a2, (struct IApplicationView *)AddressOf, v6);
  IsOperableView = TabletModePositionerHelpers::IsOperableView(
                     (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v14,
                     v7);
  v9 = TabletModePositioner::ForegroundViewChanged(
         this - 11,
         (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v14,
         IsOperableView,
         &v13);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(ScreenManagerHelpers *))(*(_QWORD *)this[20] + 40LL))(this[20])
      && !IsOperableView )
    {
      *((_BYTE *)this + 155) = 1;
    }
    if ( v13
      || (v9 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2), v10 = v9, v9 >= 0) )
    {
      v10 = 0;
      goto LABEL_13;
    }
    v11 = 597LL;
  }
  else
  {
    v11 = 583LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_13:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
  return v10;
}
