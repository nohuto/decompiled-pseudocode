/*
 * XREFs of ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800C4F58
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18002B36C (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C4E20 (-OnApplicationViewChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800C4E48 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x180179C2C (-RecoverPriorities@ShellPositionerManager@@AEAAJXZ.c)
 *     ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804EAB00 (-ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHEL.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1804EAD30 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1804EB140 (-GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804EB570 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1804EC7A0 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180096D28 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804F9FB8 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::GetPositionerPriorityForView(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IShellPositionerPriority **a3)
{
  __int64 (__fastcall *v6)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 *AddressOf; // rax
  struct IShellPositionerPriority *v8; // rcx
  unsigned int v9; // ebx
  void **v11; // rbx
  struct IApplicationView *v12; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v15; // rdx
  __int64 v16; // rdx
  int v17; // eax
  int Instance; // eax
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IShellPositionerPriority *v21; // [rsp+38h] [rbp+10h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v21 = 0LL;
  v6 = (*a2)[33];
  AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf((__int64 *)&v21);
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64 *))v6)(
         a2,
         AddressOf) >= 0 )
    goto LABEL_4;
  v11 = (void **)Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf((__int64 *)&v21);
  *v11 = 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v12);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      Instance = PositionerPriority_CreateInstance(PropW, v15, v11);
      if ( Instance >= 0 )
        goto LABEL_13;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F5,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  v17 = PositionerPriority_CreateInstance(*((_DWORD *)this + 36), v16, &v21);
  v9 = v17;
  if ( v17 < 0 )
  {
    v19 = 1061LL;
    goto LABEL_18;
  }
LABEL_13:
  v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), struct IShellPositionerPriority *))(*a2)[34])(
          a2,
          v21);
  v9 = v17;
  if ( v17 < 0 )
  {
    v19 = 1065LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_9;
  }
LABEL_4:
  if ( a3 )
  {
    v8 = v21;
    if ( v21 )
    {
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v21 + 8LL))(v21);
      v8 = v21;
    }
    *a3 = v8;
  }
  v9 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  return v9;
}
