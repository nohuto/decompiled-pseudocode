/*
 * XREFs of ?GetViewsPerMonitor@CVirtualDesktopManager@@AEAAJAEAV?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@@Z @ 0x180545CD8
 * Callers:
 *     ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414 (-TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@.c)
 *     ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C (-TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x18004FE34 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016978C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801895D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180232220 (-_Tidy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocat.c)
 *     ?_Buy_raw@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804A2B98 (-_Buy_raw@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V-$allocator@.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180543A38 (--$_Emplace_reallocate@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??$_Find@PEAUHMONITOR__@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@1@AEBQEAUHMONITOR__@@_K@Z @ 0x180543B88 (--$_Find@PEAUHMONITOR__@@@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$vector@V-$com_ptr_t@UIAppli.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180543D84 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$vector@V-$com_.c)
 *     ??$emplace@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@@Z @ 0x180543FEC (--$emplace@U-$pair@QEAUHMONITOR__@@V-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_pol.c)
 *     ??0?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x18054430C (--0-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CVirtualDesktopManager::GetViewsPerMonitor(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  struct IApplicationView *v8; // rdx
  VirtualDesktopHelpers *v9; // rcx
  __int64 v10; // rcx
  __int64 appended; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int64 **v14; // rdi
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-79h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-71h] BYREF
  __int64 v20; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-61h]
  __int64 v22; // [rsp+40h] [rbp-59h] BYREF
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-49h]
  unsigned int v25; // [rsp+58h] [rbp-41h] BYREF
  __int64 v26; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v27; // [rsp+68h] [rbp-31h]
  __int64 *v28; // [rsp+70h] [rbp-29h] BYREF
  __int64 *v29; // [rsp+78h] [rbp-21h]
  HMONITOR v30; // [rsp+88h] [rbp-11h] BYREF
  __int128 v31; // [rsp+90h] [rbp-9h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+7h]
  __int64 *v33[2]; // [rsp+B0h] [rbp+17h] BYREF
  _BYTE v34[16]; // [rsp+C0h] [rbp+27h] BYREF
  _BYTE v35[32]; // [rsp+D0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  HMONITOR MonitorFromApplicationView; // [rsp+100h] [rbp+67h] BYREF
  __int64 v38; // [rsp+110h] [rbp+77h] BYREF
  __int64 v39; // [rsp+118h] [rbp+7Fh] BYREF

  v39 = 0LL;
  v3 = *(__int64 **)(a1 + 104);
  v4 = *v3;
  v39 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 24))(v3, &v39);
  v6 = v5;
  if ( v5 >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v23,
      v39);
    v19 = 0;
    v20 = 0LL;
    v21 = &v23;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v19);
    v25 = v24;
    v26 = 0LL;
    v27 = &v23;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
    while ( v19 != v25 || v21 != v27 )
    {
      v7 = v20;
      v22 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
      MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v9, v8);
      if ( MonitorFromApplicationView )
      {
        appended = std::_Fnv1a_append_bytes(v10, (const unsigned __int8 *const)&MonitorFromApplicationView, 8uLL);
        if ( std::_Hash<std::_Umap_traits<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>>,0>>::_Find<HMONITOR__ *>(
               a2,
               &MonitorFromApplicationView,
               appended) == a2[1] )
        {
          wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
            &v18,
            v7);
          v33[0] = &v18;
          v33[1] = (__int64 *)&v19;
          std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
            &v28,
            v33);
          `eh vector destructor iterator'(
            (char *)&v18,
            8LL,
            1LL,
            (void (*)(void *))wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>);
          v30 = MonitorFromApplicationView;
          v31 = 0LL;
          v32 = 0LL;
          v12 = v28;
          if ( v28 != v29 )
          {
            std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::_Buy_raw(&v31, v29 - v28);
            v13 = (__int64 *)v31;
            do
              wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
                v13++,
                *v12++);
            while ( v12 != v29 );
            std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v13, v13);
            *((_QWORD *)&v31 + 1) = v13;
          }
          std::_Hash<std::_Umap_traits<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>>,0>>::emplace<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>>(
            a2,
            (__int64)v34,
            (unsigned __int8 *)&v30);
          std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((__int64)&v31);
          std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((__int64)&v28);
        }
        else
        {
          v14 = *(__int64 ***)std::_Hash<std::_Umap_traits<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>>,0>>::_Try_emplace<HMONITOR__ * const &,>(
                                a2,
                                (__int64)v35,
                                (unsigned __int8 *)&MonitorFromApplicationView);
          wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
            &v38,
            v7);
          v15 = v14[4];
          if ( v15 == v14[5] )
          {
            std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
              v14 + 3,
              v15,
              &v38);
          }
          else
          {
            v16 = v38;
            v38 = 0LL;
            *v15 = v16;
            ++v14[4];
          }
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v38);
        }
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v22);
      ++v19;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v19);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x602,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v39);
  return v6;
}
