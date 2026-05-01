/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00
 * Callers:
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x18001D160 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18001DF00 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18001DF70 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180020860 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18002368C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_::Invoke @ 0x180027AA0 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-_--Invoke.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x18005EF10 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x18006CD50 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x1802D0FD0 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x1803C1E80 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x1803C5484 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x18001DDE8 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07_____lambda_df8498ad81b9203ecaf5b19db9f78b07___ @ 0x180027F0C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df8498ad81b92.c)
 *     ??$CreateRefCountedObj@UAPP_NOTIFICATION_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@@WRL@Microsoft@@$$QEAUAPP_NOTIFICATION_DATA@@@Z @ 0x180027F9C (--$CreateRefCountedObj@UAPP_NOTIFICATION_DATA@@U1@@@YA-AV-$ComPtr@V-$CRefCountedObject@UAPP_NOTI.c)
 *     ?s_GetNotifierCallbackList@CImmersiveApp@@CAJPEAUIUnknown@@AEBU_GUID@@PEAPEAUIObjectArray@@@Z @ 0x180028068 (-s_GetNotifierCallbackList@CImmersiveApp@@CAJPEAUIUnknown@@AEBU_GUID@@PEAPEAUIObjectArray@@@Z.c)
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18002836C (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 *     ?_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z @ 0x18002868C (-_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *a2,
        unsigned __int64 a3)
{
  void (__fastcall *v6)(char *, GUID *, struct IUnknown **); // rbx
  struct IUnknown *v7; // rbx
  char v8; // al
  const struct _GUID *v9; // rdx
  struct IObjectArray *v10; // rbx
  unsigned __int64 v11; // rbx
  char v12; // di
  unsigned int Ptr; // esi
  __int64 *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  const struct APP_CHANGE_INFO *v17; // rax
  struct IUnknown *v18; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v19; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  char v21; // [rsp+48h] [rbp-28h]
  void *Block[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  struct IObjectArray *v24; // [rsp+68h] [rbp-8h] BYREF
  int v25; // [rsp+A0h] [rbp+30h] BYREF
  struct IObjectArray *v26; // [rsp+B8h] [rbp+48h] BYREF

  v18 = 0LL;
  v25 = 2;
  v6 = *(void (__fastcall **)(char *, GUID *, struct IUnknown **))(*((_QWORD *)this + 6) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v6((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &v18);
  v7 = v18;
  v19 = v18;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  if ( !v7 )
    goto LABEL_19;
  if ( *((_BYTE *)this + 800) )
  {
    if ( (*((_BYTE *)this + 576) & 1) != 0 )
    {
      if ( !*((_QWORD *)this + 58) )
        goto LABEL_3;
      v16 = 0LL;
      if ( !a3 )
        goto LABEL_3;
      v17 = a2;
      while ( *(_DWORD *)v17 != 8 )
      {
        ++v16;
        v17 = (const struct APP_CHANGE_INFO *)((char *)v17 + 16);
        if ( v16 >= a3 )
          goto LABEL_3;
      }
    }
    CImmersiveApp::_ClearForegroundBoostHintedProcess((HANDLE *)this);
    *((_BYTE *)this + 800) = 0;
  }
LABEL_3:
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 392LL))((char *)this + 112);
    Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged(
      (CImmersiveApp *)((char *)this + 128),
      v8 != 0);
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
    if ( (int)CImmersiveApp::s_GetNotifierCallbackList(v7, v9, &v26) >= 0
      && ((int (__fastcall *)(struct IObjectArray *, int *))v26->lpVtbl->GetCount)(v26, &v25) >= 0
      && v25
      && (int)CImmersiveApp::_AddNotificationsAndResolve(this, a2, a3, (struct APP_CHANGE_INFO **)&v18, &v20) >= 0 )
    {
      v10 = v26;
      Block[0] = v18;
      Block[1] = (void *)v20;
      v23 = ((unsigned __int64)this + 88) & -(__int64)(this != 0LL);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      v24 = v10;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
      CreateRefCountedObj<APP_NOTIFICATION_DATA,APP_NOTIFICATION_DATA>(&v20, Block);
      v11 = v20;
      if ( v20 )
      {
        v12 = *((_BYTE *)this + 751);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
        v21 = v12;
        Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
        v14 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df8498ad81b9203ecaf5b19db9f78b07_____lambda_df8498ad81b9203ecaf5b19db9f78b07___(
                           &v18,
                           &v20);
        v15 = *v14;
        *v14 = 0LL;
        if ( v18 )
        {
          v18 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
        }
        SHTaskPoolQueueTask(3LL, 2LL, Ptr);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( v20 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( v11 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
      operator delete[](Block[0]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
}
