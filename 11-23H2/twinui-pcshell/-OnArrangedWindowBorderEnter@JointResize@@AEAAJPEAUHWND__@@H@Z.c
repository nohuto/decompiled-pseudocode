/*
 * XREFs of ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x1805E374C
 * Callers:
 *     ?OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x1802E6E00 (-OnHitTestPartNotifyEvent@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x1802E6DC2 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x1802E6E54 (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1802E6F64 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1805E1DA8 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x1805E29B0 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z.c)
 *     ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1805E3124 (-GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall JointResize::OnArrangedWindowBorderEnter(JointResize *this, HWND a2, int a3)
{
  char v6; // bp
  __int64 (__fastcall ****v7)(ApplicationViewHelpers *, GUID *, __int64); // r14
  int ViewForWindow; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  __int64 (__fastcall *v12)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 *AddressOf; // rax
  struct IApplicationView *v14; // rdx
  char v15; // dl
  struct tagCURSORINFO pci; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = 1;
  if ( !*((_BYTE *)this + 256) )
  {
    pci.cbSize = 24;
    memset(&pci.flags, 0, 20);
    if ( (!GetCursorInfo(&pci) || (pci.flags & 1) != 0) && !*((_QWORD *)this + 22) )
    {
      v7 = (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64))((char *)this + 192);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 24);
      ViewForWindow = JointResize::GetViewForWindow(this, a2, (struct IApplicationView **)this + 24);
      v9 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        v10 = 1113LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)ViewForWindow);
        goto LABEL_17;
      }
      v11 = *v7;
      v12 = (**v7)[10];
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)this + 23);
      ViewForWindow = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64 *))v12)(
                        v11,
                        AddressOf);
      v9 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        v10 = 1114LL;
        goto LABEL_14;
      }
      ViewForWindow = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 23) + 88LL))(
                        *((_QWORD *)this + 23),
                        (char *)this + 272);
      v9 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        v10 = 1115LL;
        goto LABEL_14;
      }
      *((_QWORD *)this + 33) = ApplicationViewHelpers::GetWindowForView(*v7, v14);
      *((_DWORD *)this + 74) = a3;
      v9 = JointResize::CalculateSecondaryViews(this, v15);
      if ( v9 < 0 )
        goto LABEL_17;
      ViewForWindow = JointResize::CreateGhostDivider((__int64)this, 2u);
      v9 = ViewForWindow;
      if ( ViewForWindow < 0 )
      {
        v10 = 1121LL;
        goto LABEL_14;
      }
      JointResize::RegisterRawInput(this, 1);
      JointResize::RegisterViewChanges(this, 1);
      v6 = 0;
    }
  }
  v9 = 0;
LABEL_17:
  if ( v6 )
    JointResize::OnArrangedWindowBorderExit(this);
  return (unsigned int)v9;
}
