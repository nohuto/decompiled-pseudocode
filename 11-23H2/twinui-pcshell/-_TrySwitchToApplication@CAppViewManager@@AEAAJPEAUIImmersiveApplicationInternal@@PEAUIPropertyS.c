/*
 * XREFs of ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803B9FA8
 * Callers:
 *     ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1803B27C0 (-StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1803B5770 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1803B756C (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B9424 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_TrySwitchToApplication(
        IUnknown **this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  void (__fastcall *v6)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v8)(PVOID, __int64, __int64 *); // rbx
  HRESULT v9; // ebx
  __int64 v11[2]; // [rsp+20h] [rbp-10h] BYREF
  void *ppvOut; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v11[0] = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
  v6((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v11);
  v13 = 0LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v8 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  v9 = v8(Ptr, v11[0], &v13);
  if ( v9 >= 0 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    v9 = IUnknown_QueryService(
           this[15],
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1,
           &ppvOut);
    if ( v9 >= 0 )
      v9 = (*(__int64 (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 40LL))(
             ppvOut,
             v13,
             a3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
  return (unsigned int)v9;
}
