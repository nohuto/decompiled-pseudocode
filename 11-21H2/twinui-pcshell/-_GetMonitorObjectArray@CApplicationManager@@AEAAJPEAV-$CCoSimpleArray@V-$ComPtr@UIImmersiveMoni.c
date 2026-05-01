/*
 * XREFs of ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x180057474
 * Callers:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180058634 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005731C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetMonitorObjectArray(
        CApplicationManager *this,
        _QWORD *a2,
        struct IObjectArray **a3,
        _BYTE *a4)
{
  const struct _GUID *v8; // rdx
  int v9; // ecx
  int Instance; // eax
  __int64 v11; // rbx
  unsigned __int64 i; // rdi
  void *v14[7]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+70h] [rbp+18h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0;
  *a3 = 0LL;
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v14);
  Instance = CEnumerableObjectCollection::CreateInstance(v9, v8, v14);
  v11 = Instance;
  if ( Instance >= 0 )
  {
    for ( i = 0LL; i < a2[1]; ++i )
    {
      if ( v11 < 0 )
        break;
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(*a2 + 8 * i) + 48LL))(*(_QWORD *)(*a2 + 8 * i), &v15);
      if ( v15 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v14[0] + 40LL))(v14[0], *(_QWORD *)(*a2 + 8 * i));
    }
    (*(void (__fastcall **)(void *, int *))(*(_QWORD *)v14[0] + 24LL))(v14[0], &v16);
    if ( v16 )
    {
      LODWORD(v11) = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v14[0])(
                       v14[0],
                       &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                       a3);
    }
    else
    {
      *a4 = 1;
      LODWORD(v11) = CApplicationManager::_GetSingleMonitorObjectArray(this, 0LL, a3);
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v14);
  return (unsigned int)v11;
}
