/*
 * XREFs of ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180028580
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180027C4C (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802F8C40 (-StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802FB564 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802FCA04 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_TrySwitchToApplication(
        IUnknown **this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  void (__fastcall *v6)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v8)(PVOID, __int64, __int64); // rbx
  __int64 AddressOf; // rax
  HRESULT v10; // ebx
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  void *ppvOut; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v14 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v6((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v14);
  v12[0] = 0LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v8 = *(__int64 (__fastcall **)(PVOID, __int64, __int64))(*(_QWORD *)Ptr + 56LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(v12);
  v10 = v8(Ptr, v14, AddressOf);
  if ( v10 >= 0 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
    v10 = IUnknown_QueryService(
            this[15],
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
            &ppvOut);
    if ( v10 >= 0 )
      v10 = (*(__int64 (__fastcall **)(void *, _QWORD, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 40LL))(
              ppvOut,
              v12[0],
              a3);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return (unsigned int)v10;
}
