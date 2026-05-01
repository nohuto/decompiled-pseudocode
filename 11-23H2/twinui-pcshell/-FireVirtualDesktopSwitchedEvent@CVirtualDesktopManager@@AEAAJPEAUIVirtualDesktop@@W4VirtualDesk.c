/*
 * XREFs of ?FireVirtualDesktopSwitchedEvent@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806014B8
 * Callers:
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180606A5C (-SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualD.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAA_NXZ @ 0x180118494 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvemen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x180601C38 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::FireVirtualDesktopSwitchedEvent(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  int (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rax
  HWND DesktopWindow; // rax
  HWND v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)CVirtualDesktopManager::GetSwitcherType(a1) )
    return 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl) )
  {
    v6 = *a2;
    v12[0] = 0LL;
    if ( (*v6)(a2, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, v12) >= 0 )
    {
      v14 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v12[0] + 56LL))(v12[0], &v14) >= 0 && !v14 && !a3 )
      {
        DesktopWindow = GetDesktopWindow();
        NotifyWinEvent(0x800Cu, DesktopWindow, 0, 0);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v12);
  }
  else if ( !a3 )
  {
    v8 = GetDesktopWindow();
    NotifyWinEvent(0x800Cu, v8, 0, 0);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 128) + 96LL))(
         *(_QWORD *)(a1 + 128),
         a2,
         a3);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x610,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
