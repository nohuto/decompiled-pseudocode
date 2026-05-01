/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180055A84
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801232BC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1802E9654 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800E85AC (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1801374B8 (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x1802ECD94 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        HWND a3,
        int a4)
{
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rbx
  unsigned int v10; // eax
  int (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  HWND v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  char v19; // [rsp+48h] [rbp-8h]
  __int64 v20; // [rsp+78h] [rbp+28h] BYREF

  v16 = -1LL;
  v14 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  if ( v8(a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v14) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v16) >= 0 )
  {
    v15 = 0LL;
    if ( (int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
                a1 + 1000,
                &v16,
                &v15) >= 0 )
    {
      v9 = v15;
      if ( *(_QWORD *)(v15 + 24) || a4 )
      {
        if ( *(HWND *)(v15 + 24) == a3 && a4 == 1 )
        {
          *(_QWORD *)(v15 + 24) = 0LL;
          Microsoft::WRL::ComPtr<ITaskWindow>::operator=(v9 + 16, 0LL);
          *(_BYTE *)(v9 + 32) = 0;
        }
        goto LABEL_8;
      }
      v10 = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow") - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          goto LABEL_8;
      }
      else
      {
        if ( (unsigned __int8)CApplicationManagerUtility::ValidateWindowProcess(a3, 2LL) )
          goto LABEL_8;
        SetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow", HANDLE_FLAG_PROTECT_FROM_CLOSE);
      }
      v20 = 0LL;
      v12 = (*a2)[38];
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      v17 = a3;
      v18 = 0LL;
      v19 = 0;
      v12(a2, (GUID *)&v17, &v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      v13 = v20;
      *(_QWORD *)(v9 + 24) = a3;
      Microsoft::WRL::ComPtr<ITaskWindow>::operator=(v9 + 16, v13);
      if ( !*(_BYTE *)(v9 + 36) )
        *(_BYTE *)(v9 + 32) = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.DisableShowingMainViewOnActivation") == 0;
      *(_BYTE *)(v9 + 33) = GetPropW(a3, L"Windows.ImmersiveShell.ForceTerminateOnClose") != 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    }
LABEL_8:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
}
