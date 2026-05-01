/*
 * XREFs of ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EFDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EFF14 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F0138 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1805B1C54 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::GetPositionerForView(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall *v8)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 *AddressOf; // rax
  int v10; // ebx
  unsigned int v11; // esi
  __int64 (__fastcall *v12)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  void *v13; // rcx
  int PositionerForMonitor; // eax
  struct IApplicationView *v16; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  void *v28; // [rsp+68h] [rbp+38h] BYREF
  void *v29; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v26[0] = 0LL;
  v8 = (*a2)[10];
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v26);
  v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64 *))v8)(
          a2,
          AddressOf);
  if ( v10 >= 0 )
  {
    v11 = 11;
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
    v29 = 0LL;
    v28 = 0LL;
    v12 = (*a2)[33];
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
    if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), void **))v12)(
           a2,
           &v28) >= 0 )
    {
LABEL_3:
      v13 = v28;
      if ( v28 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v28 + 8LL))(v28);
        v13 = v28;
      }
      v29 = v13;
      v10 = 0;
LABEL_6:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43B,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v10,
          v26[0]);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v29 + 24LL))(v29);
        v10 = 0;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
      if ( v10 < 0 )
      {
        v24 = (unsigned int)v10;
        v25 = 370LL;
      }
      else
      {
        PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(v11, v26[0], a3, a4);
        v10 = PositionerForMonitor;
        if ( PositionerForMonitor >= 0 )
        {
          v10 = 0;
          goto LABEL_11;
        }
        v24 = (unsigned int)PositionerForMonitor;
        v25 = 372LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)v24,
        v26[0]);
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
    v28 = 0LL;
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v16);
    if ( WindowForView )
    {
      PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
      if ( PropW )
      {
        v20 = PositionerPriority_CreateInstance(PropW, v19, &v28);
        if ( v20 >= 0 )
          goto LABEL_19;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x521,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v20,
          v26[0]);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
    v22 = PositionerPriority_CreateInstance(*((unsigned int *)this + 14), v21, &v28);
    v10 = v22;
    if ( v22 < 0 )
    {
      v23 = 1105LL;
      goto LABEL_18;
    }
LABEL_19:
    v22 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), void *))(*a2)[34])(
            a2,
            v28);
    v10 = v22;
    if ( v22 >= 0 )
      goto LABEL_3;
    v23 = 1109LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v22,
      v26[0]);
    goto LABEL_6;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v26);
  return (unsigned int)v10;
}
