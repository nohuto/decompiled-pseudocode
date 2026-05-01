/*
 * XREFs of ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180529764
 * Callers:
 *     ?OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x180238460 (-OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x180528084 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x180528BD0 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z.c)
 *     ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180529270 (-GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x180529940 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18052A368 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x18052A478 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052A514 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall JointResize::OnArrangedWindowBorderEnter(JointResize *this, HWND a2, int a3)
{
  char v6; // bp
  __int64 (__fastcall ****v7)(ApplicationViewHelpers *, GUID *, __int64); // r14
  __int64 *AddressOf; // rax
  int ViewForWindow; // eax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 (__fastcall ***v12)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  __int64 (__fastcall *v13)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 *v14; // rax
  struct IApplicationView *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  tagCURSORINFO pci; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = 1;
  if ( !*((_BYTE *)this + 256) )
  {
    pci.cbSize = 24;
    memset(&pci.flags, 0, 20);
    if ( (!GetCursorInfo(&pci) || (pci.flags & 1) != 0) && !*((_QWORD *)this + 22) )
    {
      v7 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))((char *)this + 200);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)this + 25);
      ViewForWindow = JointResize::GetViewForWindow(this, a2, (struct IApplicationView **)AddressOf);
      v10 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        v11 = 1467LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)ViewForWindow);
        goto LABEL_17;
      }
      v12 = *v7;
      v13 = (**v7)[10];
      v14 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)this + 24);
      ViewForWindow = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64 *))v13)(
                        v12,
                        v14);
      v10 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        v11 = 1468LL;
        goto LABEL_14;
      }
      ViewForWindow = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 24) + 88LL))(
                        *((_QWORD *)this + 24),
                        (char *)this + 296);
      v10 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        v11 = 1469LL;
        goto LABEL_14;
      }
      *((_QWORD *)this + 33) = ApplicationViewHelpers::GetWindowForView(*v7, v15);
      *((_DWORD *)this + 80) = a3;
      v10 = JointResize::CalculateSecondaryViews(this, v16, v17, v18);
      if ( v10 < 0 )
        goto LABEL_17;
      LOBYTE(v19) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
        v19);
      ViewForWindow = JointResize::CreateGhostDivider((__int64)this, 2u, v20, v21);
      v10 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        v11 = 1477LL;
        goto LABEL_14;
      }
      JointResize::RegisterRawInput(this, 1);
      JointResize::RegisterViewChanges(this, 1);
      v6 = 0;
    }
  }
  v10 = 0;
LABEL_17:
  if ( v6 )
    JointResize::OnArrangedWindowBorderExit(this);
  return (unsigned int)v10;
}
