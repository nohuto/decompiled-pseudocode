/*
 * XREFs of ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C
 * Callers:
 *     ?SetDesktopIsPerMonitor@CVirtualDesktopManager@@UEAAJH@Z @ 0x180547F80 (-SetDesktopIsPerMonitor@CVirtualDesktopManager@@UEAAJH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18010EC70 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18010ECA0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ?GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z @ 0x180123680 (-GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FBF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??4?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop@@@Z @ 0x1801736CC (--4-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180543C0C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHMONITOR__@@V-$vector@V-$com_ptr_t@UIAp.c)
 *     ??0?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x1805442DC (--0-$unordered_map@PEAUHMONITOR__@@V-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_pol.c)
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180544F50 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z.c)
 *     ?GetViewsPerMonitor@CVirtualDesktopManager@@AEAAJAEAV?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@@Z @ 0x180545CD8 (-GetViewsPerMonitor@CVirtualDesktopManager@@AEAAJAEAV-$unordered_map@PEAUHMONITOR__@@V-$vector@V.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180547810 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?TransitionViewsInMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@AEBV?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@PEAUIVirtualDesktop@@22PEAPEAU5@@Z @ 0x18054BC7C (-TransitionViewsInMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@AEBV-$unordered_map@PEAUH.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CVirtualDesktopManager::TransitionToPerMonitorMode(
        CVirtualDesktopManager *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int ViewsPerMonitor; // eax
  unsigned int v7; // edi
  int DesktopsInternal; // eax
  HMONITOR v9; // r13
  __int64 v10; // r9
  int CurrentDesktopInternal; // eax
  __int64 v12; // rdx
  HMONITOR *v13; // r14
  HMONITOR *v14; // r12
  int v15; // eax
  struct IUnknown *v16; // rbx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 *v21; // rcx
  int v22; // eax
  struct IUnknown *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  struct IObjectArray *v26; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-71h] BYREF
  struct IVirtualDesktop *v28[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v29; // [rsp+60h] [rbp-59h] BYREF
  int v30; // [rsp+68h] [rbp-51h]
  int v31; // [rsp+70h] [rbp-49h] BYREF
  __int64 v32[3]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v33; // [rsp+90h] [rbp-29h] BYREF
  _QWORD **v34; // [rsp+98h] [rbp-21h]
  void *v35; // [rsp+A8h] [rbp-11h]
  __int128 v36; // [rsp+B0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  struct IVirtualDesktop *v38; // [rsp+120h] [rbp+67h] BYREF
  struct IVirtualDesktop *v39; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v40; // [rsp+130h] [rbp+77h] BYREF
  struct IVirtualDesktop *v41; // [rsp+138h] [rbp+7Fh] BYREF

  v39 = a2;
  if ( !*((_QWORD *)this + 13) )
  {
    v3 = -2147417848;
    v4 = 1405LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v3);
    return v3;
  }
  if ( *((_DWORD *)this + 71) )
  {
    v3 = -2147019873;
    v4 = 1406LL;
    goto LABEL_3;
  }
  std::unordered_map<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>::unordered_map<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>((__int64)&v33);
  ViewsPerMonitor = CVirtualDesktopManager::GetViewsPerMonitor((__int64)this, &v33);
  v7 = ViewsPerMonitor;
  if ( ViewsPerMonitor >= 0 )
  {
    v26 = 0LL;
    DesktopsInternal = CVirtualDesktopManager::GetDesktopsInternal(
                         (CVirtualDesktopManager *)((char *)this + 8),
                         0LL,
                         &v26);
    v7 = DesktopsInternal;
    if ( DesktopsInternal >= 0 )
    {
      v39 = 0LL;
      v9 = MonitorFromPoint(0LL, 1u);
      v41 = 0LL;
      CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                                 (CVirtualDesktopManager *)((char *)this + 8),
                                 v9,
                                 &v41,
                                 v10);
      v7 = CurrentDesktopInternal;
      if ( CurrentDesktopInternal >= 0 )
      {
        v13 = (HMONITOR *)*((_QWORD *)this + 32);
        v14 = (HMONITOR *)*((_QWORD *)this + 33);
        while ( v13 != v14 )
        {
          v40 = 0LL;
          v39 = 0LL;
          v38 = 0LL;
          v15 = CVirtualDesktopManager::CreateDesktopInternal((CVirtualDesktopManager *)((char *)this + 8), *v13, &v38);
          v7 = v15;
          if ( v15 < 0 )
          {
            v20 = 1438LL;
LABEL_26:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v20,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v15);
LABEL_27:
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v39);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v40);
            v21 = (__int64 *)&v38;
            goto LABEL_37;
          }
          v39 = 0LL;
          v16 = (struct IUnknown *)v38;
          v17 = CVirtualDesktopManager::TransitionViewsInMonitor(
                  (int)this,
                  (int)*v13,
                  (int)&v33,
                  (int)v41,
                  (__int64)v38,
                  0LL,
                  &v39);
          v7 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x5A1,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v17);
            goto LABEL_27;
          }
          if ( v39 )
            wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>::operator=(&v40, (__int64)v39);
          v15 = CVirtualDesktopManager::SwitchDesktopInternal((__int64 **)this + 1, *v13, v16, v18);
          v7 = v15;
          if ( v15 < 0 )
          {
            v20 = 1449LL;
            goto LABEL_26;
          }
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v39);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v40);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v38);
          ++v13;
        }
        CurrentDesktopInternal = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 88LL))(
                                   *((_QWORD *)this + 17),
                                   1LL);
        v7 = CurrentDesktopInternal;
        if ( CurrentDesktopInternal < 0 )
        {
          v12 = 1453LL;
          goto LABEL_22;
        }
        v39 = 0LL;
        v22 = CVirtualDesktopManager::GetCurrentDesktopInternal(
                (CVirtualDesktopManager *)((char *)this + 8),
                v9,
                &v39,
                v19);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5B2,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)v22);
        details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
          (__int64)&v29,
          (__int64)v26);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          (__int64)&v27,
          (__int64)&v29,
          0);
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
          (__int64)&v31,
          (__int64)&v29,
          v30);
        while ( v27 != v31 || v28[1] != (struct IVirtualDesktop *)v32[1] )
        {
          v23 = (struct IUnknown *)v28[0];
          v38 = v28[0];
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v38);
          v24 = CVirtualDesktopManager::RemoveDesktopInternal((CVirtualDesktopManager *)((char *)this + 8), v23, v39);
          if ( v24 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x5B5,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v24);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v38);
          ++v27;
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v27);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v32);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v28);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
        v7 = 0;
        v21 = (__int64 *)&v39;
LABEL_37:
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v21);
      }
      else
      {
        v12 = 1420LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)CurrentDesktopInternal);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v41);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x584,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)DesktopsInternal);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v26);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x581,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)ViewsPerMonitor);
  }
  std::_Deallocate<16,0>(v35, (v36 - (_QWORD)v35) & 0xFFFFFFFFFFFFFFF8uLL);
  v35 = 0LL;
  v36 = 0LL;
  std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>>>(
    v25,
    v34);
  std::_Deallocate<16,0>(v34, 0x30uLL);
  return v7;
}
