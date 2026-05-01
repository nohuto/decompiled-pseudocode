/*
 * XREFs of ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005BE40
 * Callers:
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x1800529E0 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18005B9C0 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800C7770 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x1800D263C (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x1803972E4 (_lambda_20045b0b3bc9a0c8c612018082f6611c_--operator().c)
 *     ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18039DFD0 (-NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x180107680 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_GetSingleMonitorObjectArray(
        CApplicationManager *this,
        struct IImmersiveMonitor *a2,
        struct IObjectArray **a3)
{
  const struct _GUID *v6; // rdx
  int v7; // ecx
  int Instance; // ebx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, GUID *, __int64 *); // rbx
  void *v12[2]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0LL;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v12);
  Instance = CEnumerableObjectCollection::CreateInstance(v7, v6, v12);
  if ( Instance >= 0 )
  {
    v14 = 0LL;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v13);
      if ( v13 )
        Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=(&v14, a2);
      if ( v14 )
        goto LABEL_6;
    }
    v10 = *((_QWORD *)this + 70);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v10 + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    Instance = v11(
                 v10,
                 0LL,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v14);
    if ( Instance >= 0 )
LABEL_6:
      Instance = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v12[0] + 40LL))(v12[0]);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    if ( Instance >= 0 )
      Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v12[0])(
                   v12[0],
                   &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                   a3);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v12);
  return (unsigned int)Instance;
}
