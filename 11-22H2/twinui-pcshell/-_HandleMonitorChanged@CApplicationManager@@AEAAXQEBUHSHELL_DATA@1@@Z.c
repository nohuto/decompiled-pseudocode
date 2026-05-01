/*
 * XREFs of ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800C7770
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003FFA0 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x1800529E0 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18005BD08 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005BE40 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_HandleMonitorChanged(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // r12
  PSRWLOCK v5; // rbx
  PVOID Ptr; // rdi
  unsigned int v7; // r13d
  _DWORD *v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // r14
  int v11; // eax
  HWND v12; // rbx
  HWND v13; // rsi
  __int64 *AddressOf; // rdi
  __int64 *v15; // rcx
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, _QWORD, GUID *, GUID *, struct ISyncIAMEventHandler **, __int64); // rbx
  char *v18; // r8
  __int64 v19; // rdi
  int (__fastcall *v20)(__int64, _QWORD, GUID *, GUID *, struct IObjectArray **, __int64); // rbx
  char *v21; // r8
  __int64 v22; // [rsp+28h] [rbp-48h]
  struct ISyncIAMEventHandler *v23; // [rsp+40h] [rbp-30h] BYREF
  int v24; // [rsp+48h] [rbp-28h]
  _DWORD v25[2]; // [rsp+50h] [rbp-20h] BYREF
  char v26; // [rsp+58h] [rbp-18h] BYREF
  struct ISyncIAMEventHandler *v27; // [rsp+B8h] [rbp+48h] BYREF
  struct IObjectArray *v28; // [rsp+C0h] [rbp+50h] BYREF
  struct IObjectArray *v29; // [rsp+C8h] [rbp+58h] BYREF

  v4 = *((_QWORD *)a2 + 1);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(CApplicationManagerUtility::g_pIAMGlobals[14].Ptr);
    v7 = (unsigned int)v5[15].Ptr;
    v8 = 0LL;
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      v9[3] = 1;
      *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v10 + 2) = 0LL;
      if ( v10 + 4 != (_DWORD *)&v26 )
      {
        *((_QWORD *)v10 + 2) = Ptr;
        Ptr = 0LL;
      }
      *((_QWORD *)v10 + 3) = v4;
      *(_QWORD *)v10 = off_1807A17B0;
      v8 = v10;
    }
    v22 = 0LL;
    SHTaskPoolQueueTask(3LL, 2LL, v7);
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v11 = *((_DWORD *)a2 + 4);
  if ( v11 == 1 )
  {
    v12 = (HWND)*((_QWORD *)a2 + 5);
    if ( !v12 )
      v12 = (HWND)*((_QWORD *)a2 + 1);
    v13 = (HWND)*((_QWORD *)a2 + 1);
    v27 = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v27);
    *AddressOf = 0LL;
    if ( GetShellWindow() != v12
      && !(unsigned int)GetPropW(v12, L"MultimonitorActivationException")
      && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94)) != v12 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *, __int64))(**((_QWORD **)this + 70) + 88LL))(
        *((_QWORD *)this + 70),
        v12,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        AddressOf,
        v22);
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND, struct ISyncIAMEventHandler *))(**((_QWORD **)this + 67) + 32LL))(
           *((_QWORD *)this + 67),
           v13,
           v27) )
    {
      if ( v27 )
        CApplicationManager::_TryPresentDesktopExperience(this, v13, 2, v27);
    }
    v15 = (__int64 *)&v27;
LABEL_21:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
    return;
  }
  if ( v11 == 2 )
  {
    if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
      v23 = (struct ISyncIAMEventHandler *)*((_QWORD *)a2 + 1);
      v24 = 2;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                  (__int64)this,
                  (__int64)&v23,
                  &v28,
                  0LL) >= 0 )
      {
        v27 = 0LL;
        v16 = *((_QWORD *)this + 70);
        v17 = *(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct ISyncIAMEventHandler **, __int64))(*(_QWORD *)v16 + 88LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
        if ( v17(
               v16,
               *((_QWORD *)a2 + 1),
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &v27,
               v22) >= 0 )
        {
          v25[0] = *((_DWORD *)this + 240);
          v25[1] = 0;
          ((void (__fastcall *)(struct IObjectArray *, struct ISyncIAMEventHandler *, _DWORD *, __int64))v28->lpVtbl[11].Release)(
            v28,
            v27,
            v25,
            4LL);
          if ( ((unsigned __int8 (__fastcall *)(struct IObjectArray *))v28->lpVtbl[10].Release)(v28) )
          {
            v23 = 0LL;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
            if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v23) >= 0 )
            {
              v29 = 0LL;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
              if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v27, &v29) >= 0 )
              {
                v18 = (char *)this + 248;
                if ( !this )
                  v18 = 0LL;
                (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v23 + 24LL))(
                  v23,
                  v29,
                  v18,
                  0LL,
                  *((_DWORD *)a2 + 6),
                  2,
                  0xFFFF);
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
    }
  }
  else if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
  {
    v29 = 0LL;
    v19 = *((_QWORD *)this + 70);
    v20 = *(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IObjectArray **, __int64))(*(_QWORD *)v19 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
    if ( v20(
           v19,
           *((_QWORD *)a2 + 1),
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v29,
           v22) >= 0 )
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, (struct IImmersiveMonitor *)v29, &v28) >= 0 )
      {
        v27 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
        if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v27) >= 0 )
        {
          v21 = (char *)this + 248;
          if ( !this )
            v21 = 0LL;
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v27 + 24LL))(
            v27,
            v28,
            v21,
            0LL,
            *((_DWORD *)a2 + 6),
            2,
            0xFFFF);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
    }
    v15 = (__int64 *)&v29;
    goto LABEL_21;
  }
}
