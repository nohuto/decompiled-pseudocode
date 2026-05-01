/*
 * XREFs of ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x18059D9B0
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18059CC00 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18059CD30 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_RemoveAppWithPendingTermination@CSwitchController@@AEAAJPEAUIImmersiveApplication@@@Z @ 0x18059D914 (-_RemoveAppWithPendingTermination@CSwitchController@@AEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x18059FC34 (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::_SwitchToApp(IUnknown **this, struct CSwitchController::ActivationData *a2)
{
  unsigned int v4; // esi
  int Instance; // ebx
  struct IImmersiveApplication **v6; // r14
  __int64 v7; // rcx
  struct IImmersiveApplication *v8; // rdi
  __int64 (__fastcall *v9)(struct IImmersiveApplication *, LPVOID *); // rbx
  __int64 **v10; // rdi
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v17; // [rsp+68h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  Instance = 0;
  v6 = (struct IImmersiveApplication **)((char *)a2 + 16);
  v7 = *((_QWORD *)a2 + 2);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 56LL))(v7, &v17);
    if ( !v17 )
      goto LABEL_7;
    pv = 0LL;
    v8 = *v6;
    v9 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(*(_QWORD *)*v6 + 32LL);
    CoTaskMemFree(0LL);
    Instance = v9(v8, &pv);
    if ( Instance >= 0 )
    {
      Instance = CSwitchController::_RemoveAppWithPendingTermination(this, *v6);
      if ( Instance == -2147023598 )
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v6);
    }
    CoTaskMemFree(pv);
    if ( Instance >= 0 )
    {
LABEL_7:
      v10 = (__int64 **)((char *)a2 + 24);
      if ( !*((_QWORD *)a2 + 3)
        || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)*v6 + 328LL))(*v6, 5LL)
        || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, _QWORD))(*(_QWORD *)*v6 + 328LL))(*v6, 0LL) )
      {
        pv = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pv);
        Instance = IUnknown_QueryService(
                     this[2],
                     &IID_IImmersiveApplicationManager,
                     &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
                     &pv);
        if ( Instance >= 0 )
        {
          v11 = (*(__int64 (__fastcall **)(LPVOID, struct IImmersiveApplication *, __int64))(*(_QWORD *)pv + 64LL))(
                  pv,
                  *v6,
                  1LL);
          Instance = v11;
          if ( v11 < 0 )
          {
            if ( v11 == -2147024891 )
              goto LABEL_24;
            v12 = *v10;
            if ( !*v10 )
            {
              if ( v11 == -2147023598 )
                v4 = 0x200000;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2 + 3);
              Instance = CDelayedTileActivation_CreateInstance(*v6, v15, v4);
              goto LABEL_24;
            }
            if ( v11 != -2147023598 )
            {
              if ( v11 == -2147019873 )
                Instance = 0;
              goto LABEL_24;
            }
            Instance = 0;
            v13 = *v12;
            v14 = 0x200000LL;
            goto LABEL_14;
          }
          v12 = *v10;
          if ( *v10 )
          {
            v13 = *v12;
            v14 = 0x1000000LL;
LABEL_14:
            (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v13 + 24))(v12, v14, (unsigned int)v14);
          }
        }
LABEL_24:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pv);
      }
    }
  }
  return (unsigned int)Instance;
}
