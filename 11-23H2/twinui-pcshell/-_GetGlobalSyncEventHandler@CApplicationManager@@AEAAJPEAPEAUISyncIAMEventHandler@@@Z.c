/*
 * XREFs of ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18005BD08
 * Callers:
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000D61C (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x1800529E0 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18005B9C0 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800C7770 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x1803972E4 (_lambda_20045b0b3bc9a0c8c612018082f6611c_--operator().c)
 *     ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18039DFD0 (-NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_GetGlobalSyncEventHandler(
        CApplicationManager *this,
        struct ISyncIAMEventHandler **a2)
{
  void (__fastcall *v4)(char *, GUID *, IUnknown **); // rbx
  HRESULT v5; // ebx
  struct ISyncIAMEventHandler *v6; // rcx
  void *ppvOut; // [rsp+48h] [rbp+28h] BYREF
  IUnknown *punk; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  v4 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  v4((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  v5 = IUnknown_QueryService(punk, &IID_ISyncIAMEventHandler, &GUID_9c89efc7_3c2d_4913_897f_dd317f677138, &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  if ( v5 >= 0 )
  {
    v6 = (struct ISyncIAMEventHandler *)ppvOut;
    if ( ppvOut )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 8LL))(ppvOut);
      v6 = (struct ISyncIAMEventHandler *)ppvOut;
    }
    *a2 = v6;
    v5 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v5;
}
