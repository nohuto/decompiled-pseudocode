/*
 * XREFs of ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1805BCCE0
 * Callers:
 *     ?HandleSwitchToView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@@Z @ 0x1802A6FD0 (-HandleSwitchToView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18007093C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1805BB6D0 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z @ 0x18074624C (-GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::HandleSwitchToView(ScreenManagerHelpers **this, struct IApplicationView *a2)
{
  struct IApplicationView **v5; // r8
  struct IApplicationView *v6; // rdx
  char IsOperableView; // bp
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v12; // [rsp+40h] [rbp+8h] BYREF
  TabletModePositionerHelpers *v13; // [rsp+50h] [rbp+18h] BYREF

  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)(this - 11)) )
    return 2147947423LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v13);
  ApplicationViewHelpers::GetRootSwitchableOwnerOrSelf(a2, (struct IApplicationView *)&v13, v5);
  IsOperableView = TabletModePositionerHelpers::IsOperableView(
                     (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v13,
                     v6);
  v8 = TabletModePositioner::ForegroundViewChanged(
         this - 11,
         (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v13,
         IsOperableView,
         &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(ScreenManagerHelpers *))(*(_QWORD *)this[20] + 40LL))(this[20])
      && !IsOperableView )
    {
      *((_BYTE *)this + 155) = 1;
    }
    if ( v12
      || (v8 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2), v9 = v8, v8 >= 0) )
    {
      v9 = 0;
      goto LABEL_13;
    }
    v10 = 597LL;
  }
  else
  {
    v10 = 583LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_13:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v13);
  return v9;
}
