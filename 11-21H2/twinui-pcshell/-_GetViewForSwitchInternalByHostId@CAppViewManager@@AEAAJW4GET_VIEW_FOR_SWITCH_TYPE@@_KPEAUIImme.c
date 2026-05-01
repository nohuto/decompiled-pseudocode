/*
 * XREFs of ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180036960
 * Callers:
 *     ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1800368B0 (-GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMoni.c)
 * Callees:
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1800281C8 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180036AF8 (-_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CAppViewManager::_GetViewForSwitchInternalByHostId(CAppViewManager *a1, int a2, unsigned __int64 a3, ...)
{
  struct IUnknown *v6; // r12
  __int64 v7; // rbx
  struct IImmersiveMonitor *v8; // r8
  int MostRecentlyUsedViewForAppInstance; // r15d
  RTL_SRWLOCK *v10; // rdi
  __int64 v11; // r14
  int (__fastcall *v12)(__int64, unsigned __int64, __int64 *); // rsi
  struct IUnknown *v13; // rax
  HWND v15; // rsi
  struct IUnknown *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+58h] BYREF
  va_list va; // [rsp+A8h] [rbp+58h]
  struct IUnknown *v22; // [rsp+B0h] [rbp+60h] BYREF
  va_list va1; // [rsp+B0h] [rbp+60h]
  va_list va2; // [rsp+B8h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, struct IUnknown *);
  v6 = v22;
  v22->lpVtbl = 0LL;
  v7 = 0LL;
  v18[0] = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va1);
  MostRecentlyUsedViewForAppInstance = CAppViewManager::_GetMostRecentlyUsedViewForAppInstance(
                                         a1,
                                         a3,
                                         v8,
                                         (struct IImmersiveApplicationInternal **)va1);
  if ( MostRecentlyUsedViewForAppInstance >= 0 && a2 == 1 )
  {
    v10 = CApplicationManagerUtility::g_pIAMGlobals;
    v18[1] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v17 = 0LL;
    v11 = *((_QWORD *)a1 + 15);
    v12 = *(int (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v11 + 64LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    if ( v12(v11, a3, &v17) >= 0 && *(_BYTE *)(v17 + 32) )
    {
      v15 = *(HWND *)(v17 + 24);
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
      if ( (int)CAppViewManager::_GetGlomForWindow(a1, v15, (struct IImmersiveApplicationInternal **)&v16, (bool *)va) >= 0 )
      {
        if ( (_BYTE)v20 )
        {
          Microsoft::WRL::ComPtr<IAppLayout>::operator=(v18, &v16);
          v7 = v18[0];
        }
        else
        {
          if ( !(unsigned int)SHIsSameObject(v22, v16) )
            (*(void (__fastcall **)(_QWORD, HWND, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                               + 96LL))(
              *((_QWORD *)a1 + 15),
              v15,
              v16,
              v22,
              0LL);
          ((void (__fastcall *)(struct IUnknown *, HWND, __int64))v22->lpVtbl[4].Release)(v22, v15, 2LL);
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    if ( v10 )
      ReleaseSRWLockExclusive(v10);
    if ( v7 )
      goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<IAppLayout>::operator=(v18, (struct IUnknown **)va1);
  if ( MostRecentlyUsedViewForAppInstance >= 0 )
  {
LABEL_9:
    v13 = v22;
    v22 = 0LL;
    v6->lpVtbl = (struct IUnknownVtbl *)v13;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)va1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v18);
  return (unsigned int)MostRecentlyUsedViewForAppInstance;
}
