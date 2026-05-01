/*
 * XREFs of ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x180648A08
 * Callers:
 *     ?IsWindowValidForGroupInclusion@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAXPEA_N@Z @ 0x1806489A0 (-IsWindowValidForGroupInclusion@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@I.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18013B7F0 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013B820 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x1802D4AE2 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x180648938 (-IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ?TryGetRectForWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@AEAURect@Foundation@83@@Z @ 0x180649E34 (-TryGetRectForWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGrou.c)
 *     ?Windows@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064A16C (-Windows@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Int.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
char __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowValidForGroupInclusion(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  HWND v4; // rdi
  struct IApplicationView *v6; // rdx
  __int64 WindowForView; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  signed int v11; // eax
  signed int v12; // eax
  signed int v13; // eax
  char v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rax
  signed int v20; // eax
  __int64 v21; // r14
  signed int v22; // eax
  char v23; // r14
  void *v24; // rcx
  char *v25; // rsi
  char *v26; // r12
  __int64 v27; // rdx
  __int64 *v28; // rcx
  __int64 v29; // rax
  signed int v30; // eax
  signed int v31; // eax
  signed int v32; // eax
  int bottom; // ecx
  int right; // r8d
  LONG top; // eax
  LONG left; // edx
  signed int v37; // eax
  __int64 v38; // [rsp+20h] [rbp-D8h] BYREF
  ApplicationViewHelpers *v39; // [rsp+28h] [rbp-D0h] BYREF
  int v40; // [rsp+30h] [rbp-C8h] BYREF
  int v41; // [rsp+34h] [rbp-C4h] BYREF
  __int64 v42; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+40h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v45[2]; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-90h] BYREF
  int v47; // [rsp+70h] [rbp-88h] BYREF
  int v48; // [rsp+74h] [rbp-84h] BYREF
  __int64 v49; // [rsp+78h] [rbp-80h]
  int v50; // [rsp+80h] [rbp-78h] BYREF
  __int64 v51[2]; // [rsp+88h] [rbp-70h] BYREF
  struct tagRECT v52; // [rsp+98h] [rbp-60h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-50h] BYREF

  v3 = a3;
  v49 = a3;
  v4 = (HWND)a2;
  v39 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, ApplicationViewHelpers **))(**(_QWORD **)(a1 + 136) + 48LL))(
         *(_QWORD *)(a1 + 136),
         a2,
         &v39) < 0
    || (WindowForView = ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v39,
                          v6),
        !(unsigned int)IsWindowArranged(WindowForView))
    && (!IsIconic(v4)
     || !winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowInTaskGroup(
           v9,
           (int)v4,
           v3)) )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
    return 0;
  }
  v42 = 0LL;
  v10 = *(_QWORD *)v39;
  v42 = 0LL;
  v11 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(v10 + 80))(v39, &v42);
  if ( v11 < 0 )
    winrt::throw_hresult(v11);
  v48 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 24LL))(v42, &v48);
  if ( v12 < 0 )
    winrt::throw_hresult(v12);
  v53 = 0LL;
  v13 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int128 *))(*(_QWORD *)v39 + 128LL))(v39, &v53);
  if ( v13 < 0 )
    winrt::throw_hresult(v13);
  v47 = 0;
  v14 = 0;
  v15 = 0LL;
  v46 = 0LL;
  v16 = *(_QWORD *)(a1 + 168);
  if ( v16 && *(_QWORD *)(a1 + 160) )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, ApplicationViewHelpers *, int *))(*(_QWORD *)v16 + 48LL))(v16, v39, &v47);
    if ( v17 < 0 )
      winrt::throw_hresult(v17);
    if ( v47 )
    {
      v14 = 0;
    }
    else
    {
      v14 = 1;
      v38 = 0LL;
      v18 = *(__int64 **)(a1 + 160);
      v19 = *v18;
      v38 = 0LL;
      v20 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v19 + 56))(v18, &v38);
      if ( v20 < 0 )
        winrt::throw_hresult(v20);
      details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
        (__int64)&v52,
        v38);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&pv,
        (__int64)&v52,
        0);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        (__int64)&v50,
        (__int64)&v52,
        v52.right);
      while ( (_DWORD)pv != v50 || v45[1] != v51[1] )
      {
        v21 = v45[0];
        *(_QWORD *)&v43 = v45[0];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v43);
        v40 = 0;
        v22 = (*(__int64 (__fastcall **)(__int64, ApplicationViewHelpers *, int *))(*(_QWORD *)v21 + 24LL))(
                v21,
                v39,
                &v40);
        if ( v22 < 0 )
          winrt::throw_hresult(v22);
        if ( v40 )
        {
          v15 = v21;
          v46 = v21;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v43);
          break;
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v43);
        LODWORD(pv) = (_DWORD)pv + 1;
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject((unsigned int *)&pv);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v51);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v45);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v52.left);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
      if ( !v15 )
      {
LABEL_60:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
        return 0;
      }
      v3 = v49;
    }
  }
  v23 = 0;
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Windows(
    v3,
    &pv);
  v24 = pv;
  v25 = (char *)pv;
  v26 = (char *)pv + 4 * LODWORD(v45[0]);
  while ( v25 != v26 )
  {
    v27 = *(unsigned int *)v25;
    v41 = v27;
    if ( (_DWORD)v27 == (_DWORD)v4 )
      goto LABEL_62;
    v38 = 0LL;
    v28 = *(__int64 **)(a1 + 136);
    v29 = *v28;
    v38 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64, __int64 *))(v29 + 48))(v28, v27, &v38) >= 0 )
    {
      if ( !v23 )
      {
        *(_QWORD *)&v43 = 0LL;
        v30 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v38 + 80LL))(v38, &v43);
        if ( v30 < 0 )
          winrt::throw_hresult(v30);
        v40 = 0;
        v31 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v43 + 24LL))(v43, &v40);
        if ( v31 < 0 )
          winrt::throw_hresult(v31);
        if ( v48 != v40 )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
          if ( !pv )
            goto LABEL_60;
LABEL_59:
          CoTaskMemFree_0(pv);
          pv = 0LL;
          LODWORD(v45[0]) = 0;
          goto LABEL_60;
        }
        v23 = 1;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
      }
      v52 = 0LL;
      if ( IsIconic(v4) )
      {
        v43 = 0LL;
        if ( !(unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::TryGetRectForWindow(
                                 v49,
                                 &v41,
                                 &v43) )
          goto LABEL_48;
        bottom = (int)(float)(*((float *)&v43 + 3) + *((float *)&v43 + 1));
        right = (int)(float)(*((float *)&v43 + 2) + *(float *)&v43);
        top = (int)*((float *)&v43 + 1);
        left = (int)*(float *)&v43;
        v52.left = (int)*(float *)&v43;
        v52.top = (int)*((float *)&v43 + 1);
        v52.right = right;
        v52.bottom = bottom;
      }
      else
      {
        v32 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v38 + 128LL))(v38, &v52);
        if ( v32 < 0 )
          winrt::throw_hresult(v32);
LABEL_48:
        bottom = v52.bottom;
        right = v52.right;
        top = v52.top;
        left = v52.left;
      }
      if ( left < right && top < bottom && Geometry::CRect::Intersects((Geometry::CRect *)&v53, &v52) )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
        if ( !pv )
          goto LABEL_60;
        goto LABEL_59;
      }
      if ( v14 )
      {
        v41 = 0;
        v37 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v15 + 24LL))(v15, v38, &v41);
        if ( v37 < 0 )
          winrt::throw_hresult(v37);
        if ( !v41 )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
          if ( !pv )
            goto LABEL_60;
          goto LABEL_59;
        }
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
    v24 = pv;
LABEL_62:
    v25 += 4;
  }
  if ( v24 )
    CoTaskMemFree_0(v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
  return 1;
}
