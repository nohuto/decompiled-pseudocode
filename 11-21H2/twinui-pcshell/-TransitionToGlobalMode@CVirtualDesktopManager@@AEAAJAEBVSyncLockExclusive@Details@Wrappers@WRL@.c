/*
 * XREFs of ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414
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

// Hidden C++ exception states: #wind=13
__int64 __fastcall CVirtualDesktopManager::TransitionToGlobalMode(
        CVirtualDesktopManager *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int ViewsPerMonitor; // eax
  unsigned int v7; // esi
  int DesktopsInternal; // eax
  __int64 v9; // rbx
  struct IVirtualDesktop *v10; // r15
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  HMONITOR *v14; // r12
  struct IUnknown *i; // rdi
  int v16; // eax
  struct IUnknown *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  struct IObjectArray *v20; // [rsp+40h] [rbp-79h] BYREF
  HMONITOR v21; // [rsp+48h] [rbp-71h] BYREF
  int v22; // [rsp+50h] [rbp-69h]
  unsigned int v23; // [rsp+58h] [rbp-61h] BYREF
  struct IVirtualDesktop *v24[2]; // [rsp+60h] [rbp-59h] BYREF
  HMONITOR *v25; // [rsp+70h] [rbp-49h]
  int v26; // [rsp+78h] [rbp-41h] BYREF
  __int64 v27[2]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v28; // [rsp+90h] [rbp-29h] BYREF
  _QWORD **v29; // [rsp+98h] [rbp-21h]
  void *v30; // [rsp+A8h] [rbp-11h]
  __int128 v31; // [rsp+B0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  struct IVirtualDesktop *v33; // [rsp+120h] [rbp+67h] BYREF
  struct IVirtualDesktop *v34; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v35; // [rsp+130h] [rbp+77h] BYREF
  struct IVirtualDesktop *v36; // [rsp+138h] [rbp+7Fh] BYREF

  v34 = a2;
  if ( !*((_QWORD *)this + 13) )
  {
    v3 = -2147417848;
    v4 = 1472LL;
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
    v4 = 1473LL;
    goto LABEL_3;
  }
  std::unordered_map<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>::unordered_map<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>((__int64)&v28);
  ViewsPerMonitor = CVirtualDesktopManager::GetViewsPerMonitor((__int64)this, &v28);
  v7 = ViewsPerMonitor;
  if ( ViewsPerMonitor >= 0 )
  {
    v20 = 0LL;
    DesktopsInternal = CVirtualDesktopManager::GetDesktopsInternal(
                         (CVirtualDesktopManager *)((char *)this + 8),
                         0LL,
                         &v20);
    v7 = DesktopsInternal;
    if ( DesktopsInternal < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C7,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)DesktopsInternal);
LABEL_35:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v20);
      goto LABEL_36;
    }
    v34 = 0LL;
    v21 = MonitorFromPoint(0LL, 1u);
    v9 = 0LL;
    v35 = 0LL;
    v10 = 0LL;
    v34 = 0LL;
    v36 = 0LL;
    v11 = CVirtualDesktopManager::CreateDesktopInternal((CVirtualDesktopManager *)((char *)this + 8), v21, &v36);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v14 = (HMONITOR *)*((_QWORD *)this + 32);
      v25 = (HMONITOR *)*((_QWORD *)this + 33);
      for ( i = (struct IUnknown *)v36; v14 != v25; ++v14 )
      {
        v33 = 0LL;
        if ( (int)CVirtualDesktopManager::GetCurrentDesktopInternal(
                    (CVirtualDesktopManager *)((char *)this + 8),
                    *v14,
                    &v33,
                    v12) >= 0 )
        {
          v34 = 0LL;
          if ( v10 )
            (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v10 + 16LL))(v10);
          v16 = CVirtualDesktopManager::TransitionViewsInMonitor(
                  (int)this,
                  (int)*v14,
                  (int)&v28,
                  (int)v33,
                  (__int64)i,
                  v9,
                  &v34);
          v7 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x5E4,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v16);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v33);
            goto LABEL_34;
          }
          v10 = v34;
          if ( !v9 && v34 )
          {
            wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>::operator=(&v35, (__int64)v34);
            v9 = v35;
          }
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v33);
      }
      v11 = CVirtualDesktopManager::SwitchDesktopInternal((__int64 **)this + 1, v21, i, v12);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 88LL))(*((_QWORD *)this + 17), 0LL);
        v7 = v11;
        if ( v11 >= 0 )
        {
          details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
            (__int64)&v21,
            (__int64)v20);
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
            (__int64)&v23,
            (__int64)&v21,
            0);
          details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
            (__int64)&v26,
            (__int64)&v21,
            v22);
          while ( v23 != v26 || v24[1] != (struct IVirtualDesktop *)v27[1] )
          {
            v17 = (struct IUnknown *)v24[0];
            v33 = v24[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v33);
            v18 = CVirtualDesktopManager::RemoveDesktopInternal(
                    (CVirtualDesktopManager *)((char *)this + 8),
                    v17,
                    (struct IVirtualDesktop *)i);
            if ( v18 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x5F7,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                (const char *)(unsigned int)v18);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
            ++v23;
            details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(&v23);
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v27);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v24);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
          v7 = 0;
          goto LABEL_34;
        }
        v13 = 1521LL;
      }
      else
      {
        v13 = 1518LL;
      }
    }
    else
    {
      v13 = 1499LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_34:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v34);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v35);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v36);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C4,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)ViewsPerMonitor);
LABEL_36:
  std::_Deallocate<16,0>(v30, (v31 - (_QWORD)v30) & 0xFFFFFFFFFFFFFFF8uLL);
  v30 = 0LL;
  v31 = 0LL;
  std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>,void *>>>(
    v19,
    v29);
  std::_Deallocate<16,0>(v29, 0x30uLL);
  return v7;
}
