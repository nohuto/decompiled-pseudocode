/*
 * XREFs of ?_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180323ED0
 * Callers:
 *     ?DisplaySettingsChange@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180043F60 (-DisplaySettingsChange@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1805EFA6C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

__int64 __fastcall CFullScreenManager::_EvictAppsOnMonitor(IUnknown **this, struct IImmersiveMonitor *a2)
{
  __int64 *v4; // rbx
  HRESULT Service; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, struct IImmersiveMonitor *, __int64 *); // rsi
  __int64 *v9; // rdi
  int v10; // eax
  __int64 *v11; // rbx
  HRESULT v12; // eax
  HMONITOR v13; // rax
  __int64 v14; // rbx
  HMONITOR v15; // rsi
  int (__fastcall *v16)(__int64, HMONITOR, __int64 *); // rdi
  __int64 **v17; // rax
  __int64 *AddressOf; // rax
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, _QWORD, GUID *, GUID *, __int64 *); // rsi
  __int64 *v21; // rdi
  unsigned int *v22; // rcx
  ApplicationViewHelpers *v23; // rbx
  struct IApplicationView *v24; // rdx
  __int64 v25; // rbx
  ApplicationViewHelpers *v27; // [rsp+30h] [rbp-59h] BYREF
  __int64 v28; // [rsp+38h] [rbp-51h] BYREF
  __int64 v29; // [rsp+40h] [rbp-49h] BYREF
  __int64 v30; // [rsp+48h] [rbp-41h] BYREF
  __int64 v31; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-31h] BYREF
  ApplicationViewHelpers *v33; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v34; // [rsp+68h] [rbp-21h]
  struct IImmersiveApplication *ApplicationFromView; // [rsp+70h] [rbp-19h] BYREF
  __int64 v36; // [rsp+78h] [rbp-11h] BYREF
  int v37; // [rsp+80h] [rbp-9h]
  int v38; // [rsp+88h] [rbp-1h] BYREF
  __int64 v39; // [rsp+90h] [rbp+7h] BYREF
  __int64 *v40; // [rsp+98h] [rbp+Fh]
  RECT rc; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v31 = 0LL;
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v31, &v27);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4);
  Service = IUnknown_QueryService(
              this[2],
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (void **)v4);
  v6 = Service;
  if ( Service >= 0 )
  {
    v7 = v31;
    v30 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v31 + 64LL);
    v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v30, &v27);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
    v10 = v8(v7, 3LL, a2, v9);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v29 = 0LL;
      v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v29, &v27);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
      v12 = IUnknown_QueryService(
              this[2],
              (const GUID *const)&SID_IImmersiveMonitorService,
              &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
              (void **)v11);
      v6 = v12;
      if ( v12 >= 0 )
      {
        v28 = 0LL;
        if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, RECT *))(*(_QWORD *)a2 + 72LL))(a2, &rc) < 0
          || (v13 = MonitorFromRect(&rc, 2u),
              v14 = v29,
              v15 = v13,
              v16 = *(int (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v29 + 48LL),
              v17 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(
                                  (__int64)&v28,
                                  &v27),
              AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(*v17),
              v16(v14, v15, AddressOf) < 0) )
        {
          v19 = v29;
          v20 = *(void (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v29 + 72LL);
          v21 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v28, &v27);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v21);
          v20(v19, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v21);
        }
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
          (__int64)&v36,
          v30);
        v32 = 0;
        v33 = 0LL;
        v34 = &v36;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v32);
        v22 = (unsigned int *)&v38;
        v39 = 0LL;
        v38 = v37;
        v40 = &v36;
        while ( 1 )
        {
          details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(v22);
          if ( v32 == v38 && v34 == v40 )
            break;
          v23 = v33;
          v27 = v33;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
          ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(v23, v24);
          v25 = (__int64)ApplicationFromView;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ApplicationFromView);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 360LL))(v25, v28);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ApplicationFromView);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v27);
          ++v32;
          v22 = &v32;
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v39);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v33);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
        v6 = 0;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C1,
          (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)v12);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BE,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)Service);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  return v6;
}
