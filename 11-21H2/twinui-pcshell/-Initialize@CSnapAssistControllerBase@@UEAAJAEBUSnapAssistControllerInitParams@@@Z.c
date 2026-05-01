/*
 * XREFs of ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x180113A30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800A25DC (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SAFlyout@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??4?$ComPtr@UITabletModeController@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeController@@@Z @ 0x1800FD9E4 (--4-$ComPtr@UITabletModeController@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeController@@@Z.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x1800FE0AC (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x1800FE170 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x1800FE5EC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z @ 0x1800FE704 (--4-$ComPtr@UIPriviledgedPositioner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPriviledgedPositioner@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180113CA4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIWindowManag.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@V_lambda_899c02a8b0071860493a9dce8a869c2e_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@U?$AggregateType@PEAVWindowMigrationEventArgs@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_899c02a8b0071860493a9dce8a869c2e_@@@Z @ 0x180113CFC (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEve.c)
 *     ??4?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewServiceProvider@@@Z @ 0x1801166D4 (--4-$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingView.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x180116738 (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSnapAssistControllerBase::Initialize(
        CSnapAssistControllerBase *this,
        const struct SnapAssistControllerInitParams *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  void *v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // r14d
  void *v13; // rax
  __int64 v14; // rdi
  int v15; // eax
  __int128 v17; // [rsp+20h] [rbp-30h]
  _BYTE v18[24]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h]

  Microsoft::WRL::ComPtr<IMultitaskingViewServiceProvider>::operator=((char *)this + 48, *(_QWORD *)a2);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 7, *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((__int64 *)this + 8, *((_QWORD *)a2 + 2));
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
    (char *)this + 72,
    *((_QWORD *)a2 + 3));
  Microsoft::WRL::ComPtr<IPriviledgedPositioner>::operator=((__int64 *)this + 10, *((_QWORD *)a2 + 4));
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)this + 11, *((_QWORD *)a2 + 5));
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=((__int64 *)this + 12, *((_QWORD *)a2 + 6));
  v4 = *((_QWORD *)a2 + 7);
  if ( *((_QWORD *)this + 13) != v4 )
  {
    v20 = *((_QWORD *)a2 + 7);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    v20 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = v4;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
  }
  Microsoft::WRL::ComPtr<ITabletModeController>::operator=((__int64 *)this + 14, *((_QWORD *)a2 + 8));
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 13) + 24LL))(
         *((_QWORD *)this + 13),
         ((unsigned __int64)this + 16) & -(__int64)(this != (CSnapAssistControllerBase *)8),
         (char *)this + 268);
  v8 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v5);
    return v8;
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SAFlyout>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SAFlyout>::GetImpl'::`2'::impl,
      1u,
      v6,
      v7);
    if ( !*((_QWORD *)a2 + 9) )
      return 0LL;
    *(_QWORD *)&v17 = CSnapAssistControllerBase::OnWindowArrangementEvent;
    DWORD2(v17) = 0;
    *(_QWORD *)v18 = (char *)this - 8;
    *(_OWORD *)&v18[8] = v17;
    v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (__int64)v9;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>(v9);
      *(_OWORD *)(v10 + 16) = *(_OWORD *)v18;
      *(_QWORD *)(v10 + 32) = *(_QWORD *)&v18[16];
      *(_QWORD *)v10 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>,_lambda_bc6a996c5f9ff2cfd33224138910e618_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::`vftable';
    }
    else
    {
      v10 = 0LL;
    }
    v20 = v10;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)a2 + 9) + 48LL))(
            *((_QWORD *)a2 + 9),
            v10,
            (char *)this + 240);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v11);
    }
    else
    {
      *(_QWORD *)&v17 = CSnapAssistControllerBase::OnWindowMigrationEvent;
      DWORD2(v17) = 0;
      *(_QWORD *)v18 = (char *)this - 8;
      *(_OWORD *)&v18[8] = v17;
      v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v13 )
        v14 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>,_lambda_899c02a8b0071860493a9dce8a869c2e_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>,_lambda_899c02a8b0071860493a9dce8a869c2e_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>(
                v13,
                v18);
      else
        v14 = 0LL;
      v21 = v14;
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)a2 + 9) + 112LL))(
              *((_QWORD *)a2 + 9),
              v14,
              (char *)this + 248);
      v12 = v15;
      if ( v15 >= 0 )
      {
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB2,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v15);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return v12;
  }
}
