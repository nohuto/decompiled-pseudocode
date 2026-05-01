/*
 * XREFs of ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180086DB0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18004240C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005731C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18005897C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800EC6D8 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CApplicationManager::_HandleMonitorChanged(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // r15
  PSRWLOCK v5; // rbx
  PVOID Ptr; // rdi
  unsigned int v7; // r12d
  _DWORD *v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // rsi
  int v11; // eax
  HWND v12; // rsi
  HWND v13; // rbx
  _QWORD *AddressOf; // rdi
  __int64 *v15; // rcx
  int v16; // ebx
  int (__fastcall ***v17)(_QWORD, GUID *, struct ISyncIAMEventHandler **); // rcx
  __int64 v18; // rdi
  int (__fastcall *v19)(__int64, _QWORD, GUID *, GUID *, struct IObjectArray **); // rbx
  __int64 v20; // rdi
  int (__fastcall *v21)(__int64, _QWORD, GUID *, GUID *, struct IObjectArray **); // rbx
  __int64 v22; // [rsp+20h] [rbp-50h]
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
      *(_QWORD *)v10 = off_18061F4A8;
      v8 = v10;
    }
    SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v8, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v11 = *((_DWORD *)a2 + 4);
  if ( v11 == 1 )
  {
    v12 = (HWND)*((_QWORD *)a2 + 1);
    v13 = v12;
    if ( *((_QWORD *)a2 + 5) )
      v13 = (HWND)*((_QWORD *)a2 + 5);
    v27 = 0LL;
    AddressOf = (_QWORD *)Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v27);
    *AddressOf = 0LL;
    if ( GetShellWindow() != v13
      && !(unsigned int)GetPropW(v13, L"MultimonitorActivationException")
      && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94)) != v13 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, _QWORD *))(**((_QWORD **)this + 70) + 88LL))(
        *((_QWORD *)this + 70),
        v13,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        AddressOf);
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, HWND, struct ISyncIAMEventHandler *))(**((_QWORD **)this + 67) + 32LL))(
           *((_QWORD *)this + 67),
           v12,
           v27) )
    {
      if ( v27 )
        CApplicationManager::_TryPresentDesktopExperience(this, v12, 2, v27);
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
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
      v23 = (struct ISyncIAMEventHandler *)*((_QWORD *)a2 + 1);
      v24 = 2;
      v27 = 0LL;
      v28 = 0LL;
      v16 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
              (int)this + 632,
              (unsigned int)&v23,
              (unsigned int)&v28,
              (unsigned int)&v29,
              v22);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
      if ( v16 >= 0 )
      {
        v17 = *(int (__fastcall ****)(_QWORD, GUID *, struct ISyncIAMEventHandler **))(*((_QWORD *)this + 79)
                                                                                     + 8LL * (_QWORD)v29);
        if ( (**v17)(v17, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v27) >= 0 )
        {
          v28 = 0LL;
          v18 = *((_QWORD *)this + 70);
          v19 = *(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IObjectArray **))(*(_QWORD *)v18 + 88LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
          if ( v19(
                 v18,
                 *((_QWORD *)a2 + 1),
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v28) >= 0 )
          {
            v25[0] = *((_DWORD *)this + 240);
            v25[1] = 0;
            (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, _DWORD *, __int64))(*(_QWORD *)v27 + 456LL))(
              v27,
              v28,
              v25,
              4LL);
            if ( (*(unsigned __int8 (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v27 + 416LL))(v27) )
            {
              v23 = 0LL;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
              if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v23) >= 0 )
              {
                v29 = 0LL;
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
                if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, (struct IImmersiveMonitor *)v28, &v29) >= 0 )
                  (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v23 + 24LL))(
                    v23,
                    v29,
                    (char *)this + 248,
                    0LL,
                    *((_DWORD *)a2 + 6),
                    2,
                    0xFFFF);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
    }
  }
  else if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
  {
    v29 = 0LL;
    v20 = *((_QWORD *)this + 70);
    v21 = *(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IObjectArray **))(*(_QWORD *)v20 + 88LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
    if ( v21(
           v20,
           *((_QWORD *)a2 + 1),
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v29) >= 0 )
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, (struct IImmersiveMonitor *)v29, &v28) >= 0 )
      {
        v27 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
        if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v27) >= 0 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v27 + 24LL))(
            v27,
            v28,
            (char *)this + 248,
            0LL,
            *((_DWORD *)a2 + 6),
            2,
            0xFFFF);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
    }
    v15 = (__int64 *)&v29;
    goto LABEL_21;
  }
}
