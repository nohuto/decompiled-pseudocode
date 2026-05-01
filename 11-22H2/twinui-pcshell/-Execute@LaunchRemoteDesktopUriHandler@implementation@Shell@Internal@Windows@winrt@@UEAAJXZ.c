/*
 * XREFs of ?Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x180701220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18013B7F0 (--0Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013B820 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??1?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ @ 0x18013B8B0 (--1-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@XZ.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ??$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180627530 (--$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIServi.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_LaunchRemoteDesktopUriHandlerTest@@@tip@@QEAA?AV?$test_watcher@U_tip_LaunchRemoteDesktopUriHandlerTest@@@2@XZ @ 0x180701A7C (-start_and_watch_errors@-$tip_test@U_tip_LaunchRemoteDesktopUriHandlerTest@@@tip@@QEAA-AV-$test_.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler::Execute(
        winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler *this)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp-79h] BYREF
  int v14; // [rsp+38h] [rbp-71h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h] BYREF
  __int64 v16; // [rsp+48h] [rbp-61h] BYREF
  __int64 v17; // [rsp+50h] [rbp-59h] BYREF
  __int128 v18; // [rsp+58h] [rbp-51h] BYREF
  __int64 v19; // [rsp+68h] [rbp-41h] BYREF
  __int64 v20; // [rsp+70h] [rbp-39h] BYREF
  int v21[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v22; // [rsp+80h] [rbp-29h] BYREF
  __int64 v23; // [rsp+88h] [rbp-21h]
  __int64 v24; // [rsp+90h] [rbp-19h]
  __int64 v25[3]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v26[48]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v27; // [rsp+E0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  char v29; // [rsp+118h] [rbp+6Fh] BYREF
  char v30; // [rsp+120h] [rbp+77h] BYREF
  char v31; // [rsp+128h] [rbp+7Fh] BYREF

  v18 = 0LL;
  tip::tip_test<_tip_LaunchRemoteDesktopUriHandlerTest>::start_and_watch_errors(&v18, v26);
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v18);
  wil::CoCreateInstance<IServiceProvider,wil::err_exception_policy>((__int64 *)v21, &CLSID_ImmersiveShell);
  v13 = 0LL;
  v1 = **(_QWORD **)v21;
  v13 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, GUID *, __int64 *))(v1 + 24))(
         *(_QWORD *)v21,
         &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
         &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
         &v13);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 18LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_28;
  }
  v29 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 112LL))(v13, &v29);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 22LL;
    goto LABEL_13;
  }
  if ( v29 )
  {
    v30 = 0;
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 56LL))(v13, &v30);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 31LL;
      goto LABEL_13;
    }
    if ( v30 )
    {
      tip::details::test_common_data<1>::complete(v27 + 8);
      v3 = -2147467263;
    }
    else
    {
      v31 = 0;
      v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 96LL))(v13, &v31);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 39LL;
        goto LABEL_13;
      }
      if ( v31 )
      {
        v16 = 0LL;
        v5 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, __int64 *))(**(_QWORD **)v21 + 24LL))(
               *(_QWORD *)v21,
               &SID_VirtualDesktopManager,
               &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
               &v16);
        v3 = v5;
        if ( v5 >= 0 )
        {
          v17 = 0LL;
          v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 56LL))(v16, &v17);
          v3 = v6;
          if ( v6 >= 0 )
          {
            details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
              (__int64)&v18,
              v17);
            details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
              (__int64)&v22,
              (__int64)&v18,
              0);
            details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
              (__int64)v25,
              (__int64)&v18,
              SDWORD2(v18));
            while ( 1 )
            {
              if ( (_DWORD)v22 == LODWORD(v25[0]) && v24 == v25[2] )
              {
                std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(v25);
                std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(&v22);
                Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v18);
                winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v17);
                winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v16);
                goto LABEL_27;
              }
              v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v23;
              v20 = v23;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
              v14 = 0;
              v15 = 0LL;
              v8 = (**v7)(v7, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v15);
              v3 = v8;
              if ( v8 < 0 )
                break;
              v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 56LL))(v15, &v14);
              v3 = v8;
              if ( v8 < 0 )
              {
                v12 = 55LL;
                goto LABEL_38;
              }
              if ( v14 )
              {
                v19 = 0LL;
                v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
                        v16,
                        &GUID_53f5ca0b_158f_4124_900c_057158060b27,
                        &v19);
                v3 = v10;
                if ( v10 < 0 )
                {
                  v11 = 59LL;
                  goto LABEL_33;
                }
                v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 160LL))(v19, v15, 1LL);
                v3 = v10;
                if ( v10 >= 0 )
                {
                  tip::details::test_common_data<1>::complete(v27 + 8);
                  v3 = 0;
                }
                else
                {
                  v11 = 61LL;
LABEL_33:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v11,
                    (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
                    (const char *)(unsigned int)v10);
                }
                winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v19);
                goto LABEL_39;
              }
              winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v15);
              Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v20);
              LODWORD(v22) = v22 + 1;
              details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject((unsigned int *)&v22);
            }
            v12 = 54LL;
LABEL_38:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v12,
              (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
              (const char *)(unsigned int)v8);
LABEL_39:
            winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v15);
            Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v20);
            std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(v25);
            std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::~tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(&v22);
            Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v18);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x31,
              (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
              (const char *)(unsigned int)v6);
          }
          winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v17);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2E,
            (int)"pcshell\\twinui\\cloudpc\\lib\\launchremotedesktopurihandler.cpp",
            (const char *)(unsigned int)v5);
        }
        winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v16);
      }
      else
      {
LABEL_27:
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13);
        tip::details::test_common_data<1>::complete(v27 + 8);
      }
    }
  }
  else
  {
    tip::details::test_common_data<1>::complete(v27 + 8);
    v3 = 50;
  }
LABEL_28:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)v21);
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v26);
  return v3;
}
