/*
 * XREFs of ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A588
 * Callers:
 *     ?IsWindowValidForGroupInclusion@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAXPEA_N@Z @ 0x18058A520 (-IsWindowValidForGroupInclusion@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@I.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18010EC70 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18010ECA0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??4?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop@@@Z @ 0x1801736CC (--4-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x18036F50C (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180588EDC (--1-$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@.c)
 *     ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A4B8 (-IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ?TryGetRectForWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_NAEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@AEAURect@Foundation@83@@Z @ 0x18058B7E4 (-TryGetRectForWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGrou.c)
 *     ?Windows@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@XZ @ 0x18058BB1C (-Windows@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Int.c)
 */

// Hidden C++ exception states: #wind=16
char __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowValidForGroupInclusion(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbx
  HWND v4; // rsi
  char v6; // r14
  __int64 v7; // rcx
  struct IApplicationView *v8; // rdx
  const char *v9; // r9
  char result; // al
  __int64 WindowForView; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  signed int v14; // eax
  signed int v15; // eax
  signed int v16; // eax
  char v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  signed int v23; // eax
  __int64 v24; // rbx
  signed int v25; // eax
  unsigned int *v26; // rbx
  unsigned int *v27; // r12
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rax
  signed int v31; // eax
  signed int v32; // eax
  signed int v33; // eax
  int bottom; // ecx
  int right; // r8d
  LONG top; // eax
  LONG left; // edx
  signed int v38; // eax
  __int64 v39; // [rsp+20h] [rbp-D8h] BYREF
  ApplicationViewHelpers *v40; // [rsp+28h] [rbp-D0h] BYREF
  int v41; // [rsp+30h] [rbp-C8h] BYREF
  int v42; // [rsp+34h] [rbp-C4h] BYREF
  __int64 v43; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-A8h] BYREF
  int v46; // [rsp+58h] [rbp-A0h] BYREF
  int v47; // [rsp+5Ch] [rbp-9Ch] BYREF
  unsigned int *v48; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v49; // [rsp+68h] [rbp-90h]
  __int64 v50; // [rsp+70h] [rbp-88h]
  int v51; // [rsp+78h] [rbp-80h] BYREF
  __int64 v52[2]; // [rsp+80h] [rbp-78h] BYREF
  struct tagRECT v53; // [rsp+90h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-58h]
  __int128 v55; // [rsp+A8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v3 = a3;
  v50 = a3;
  v4 = (HWND)a2;
  v6 = 0;
  v40 = 0LL;
  v7 = a1[17];
  try
  {
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7) < 0
      || (WindowForView = ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v40,
                            v8),
          !(unsigned int)IsWindowArranged(WindowForView))
      && (!IsIconic(v4)
       || !winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowInTaskGroup(
             v12,
             (int)v4,
             v3)) )
    {
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v40);
      return 0;
    }
    v43 = 0LL;
    v13 = *(_QWORD *)v40;
    v43 = 0LL;
    v14 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(v13 + 80))(v40, &v43);
    if ( v14 < 0 )
      winrt::throw_hresult(v14);
    v47 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 24LL))(v43, &v47);
    if ( v15 < 0 )
      winrt::throw_hresult(v15);
    v55 = 0LL;
    v16 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int128 *))(*(_QWORD *)v40 + 128LL))(v40, &v55);
    if ( v16 < 0 )
      winrt::throw_hresult(v16);
    v46 = 0;
    v17 = 0;
    v18 = 0LL;
    v45 = 0LL;
    v19 = a1[21];
    if ( v19 && a1[20] )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, ApplicationViewHelpers *, int *))(*(_QWORD *)v19 + 48LL))(
              v19,
              v40,
              &v46);
      if ( v20 < 0 )
        winrt::throw_hresult(v20);
      if ( v46 )
      {
        v17 = 0;
      }
      else
      {
        v17 = 1;
        v39 = 0LL;
        v21 = (__int64 *)a1[20];
        v22 = *v21;
        v39 = 0LL;
        v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v22 + 56))(v21, 0LL, &v39);
        if ( v23 < 0 )
          winrt::throw_hresult(v23);
        details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
          (__int64)&v48,
          v39);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          (__int64)&v53,
          (__int64)&v48,
          0);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          (__int64)&v51,
          (__int64)&v48,
          v49);
        while ( 1 )
        {
          if ( v53.left == v51 && v54 == v52[1] )
            goto LABEL_21;
          v24 = *(_QWORD *)&v53.right;
          *(_QWORD *)&v44 = *(_QWORD *)&v53.right;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v44);
          v41 = 0;
          v25 = (*(__int64 (__fastcall **)(__int64, ApplicationViewHelpers *, int *))(*(_QWORD *)v24 + 24LL))(
                  v24,
                  v40,
                  &v41);
          if ( v25 < 0 )
            winrt::throw_hresult(v25);
          if ( v41 )
            break;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v44);
          ++v53.left;
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject((unsigned int *)&v53);
        }
        wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>::operator=(&v45, v24);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v44);
        v18 = v45;
LABEL_21:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v52);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v53.right);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v48);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v39);
        if ( !v18 )
        {
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v45);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v43);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v40);
          return 0;
        }
        v3 = v50;
      }
    }
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Windows(
      v3,
      &v48);
    v26 = v48;
    v27 = &v48[v49];
    while ( 1 )
    {
      if ( v26 == v27 )
      {
        winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>((__int64)&v48);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v45);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v43);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v40);
        return 1;
      }
      v28 = *v26;
      v42 = v28;
      if ( (_DWORD)v28 != (_DWORD)v4 )
        break;
LABEL_50:
      ++v26;
    }
    v39 = 0LL;
    v29 = (__int64 *)a1[17];
    v30 = *v29;
    v39 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, __int64 *))(v30 + 48))(v29, v28, &v39) < 0 )
    {
LABEL_49:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v39);
      goto LABEL_50;
    }
    if ( !v6 )
    {
      *(_QWORD *)&v44 = 0LL;
      v31 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v39 + 80LL))(v39, &v44);
      if ( v31 < 0 )
        winrt::throw_hresult(v31);
      v41 = 0;
      v32 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v44 + 24LL))(v44, &v41);
      if ( v32 < 0 )
        winrt::throw_hresult(v32);
      if ( v47 != v41 )
      {
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v44);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v39);
        winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>((__int64)&v48);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v45);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v43);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v40);
        return 0;
      }
      v6 = 1;
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v44);
    }
    v53 = 0LL;
    if ( IsIconic(v4) )
    {
      v44 = 0LL;
      if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::TryGetRectForWindow(
                              v50,
                              &v42,
                              &v44) )
      {
        bottom = (int)(float)(*((float *)&v44 + 3) + *((float *)&v44 + 1));
        right = (int)(float)(*((float *)&v44 + 2) + *(float *)&v44);
        top = (int)*((float *)&v44 + 1);
        left = (int)*(float *)&v44;
        v53.left = (int)*(float *)&v44;
        v53.top = (int)*((float *)&v44 + 1);
        v53.right = right;
        v53.bottom = bottom;
        goto LABEL_42;
      }
    }
    else
    {
      v33 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v39 + 128LL))(v39, &v53);
      if ( v33 < 0 )
        winrt::throw_hresult(v33);
    }
    bottom = v53.bottom;
    right = v53.right;
    top = v53.top;
    left = v53.left;
LABEL_42:
    if ( left < right && top < bottom && Geometry::CRect::Intersects((Geometry::CRect *)&v55, &v53) )
      goto LABEL_45;
    if ( v17 )
    {
      v42 = 0;
      v38 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v18 + 24LL))(v18, v39, &v42);
      if ( v38 < 0 )
        winrt::throw_hresult(v38);
      if ( !v42 )
      {
LABEL_45:
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v39);
        winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>((__int64)&v48);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v45);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v43);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v40);
        return 0;
      }
    }
    goto LABEL_49;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x18C,
      (int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
      v9);
    return 0;
  }
  return result;
}
