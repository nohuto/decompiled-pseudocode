/*
 * XREFs of ?SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1800FE400
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FBF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805472F0 (-PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CVirtualDesktopManager::SetViewCollectionInternal(
        CVirtualDesktopManager *this,
        struct IApplicationViewCollection *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  struct IApplicationView *v8; // rdx
  VirtualDesktopHelpers *v9; // rcx
  HMONITOR MonitorFromApplicationView; // rax
  int CurrentDesktopInternal; // eax
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v20; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v22; // [rsp+80h] [rbp+20h] BYREF
  struct IVirtualDesktop *v23; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+98h] [rbp+38h] BYREF

  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((char *)this + 96, a2);
  v3 = (__int64 *)*((_QWORD *)this + 12);
  if ( !v3 || *((_DWORD *)this + 69) )
    return 0LL;
  v22 = 0LL;
  v4 = *v3;
  v22 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 24))(v3, &v22);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      &v13,
      v22);
    v15 = 0;
    v16 = 0LL;
    v17 = &v13;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v15);
    v18 = v14;
    v19 = 0LL;
    v20 = &v13;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
    while ( 1 )
    {
      if ( v15 == v18 && v17 == v20 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
        return 0LL;
      }
      v24 = v16;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
      MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v9, v8);
      v23 = 0LL;
      CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(this, MonitorFromApplicationView, &v23);
      v6 = CurrentDesktopInternal;
      if ( CurrentDesktopInternal < 0 )
        break;
      CurrentDesktopInternal = CVirtualDesktopManager::PlaceOrphanedViewsInternal(this, v23);
      v6 = CurrentDesktopInternal;
      if ( CurrentDesktopInternal < 0 )
      {
        v12 = 1216LL;
        goto LABEL_15;
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v23);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
      ++v15;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v15);
    }
    v12 = 1214LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v23);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
  return v6;
}
