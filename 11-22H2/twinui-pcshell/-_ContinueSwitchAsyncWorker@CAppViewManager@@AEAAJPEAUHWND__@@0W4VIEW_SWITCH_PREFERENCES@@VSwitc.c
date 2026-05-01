/*
 * XREFs of ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1803B5770
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::Invoke @ 0x1803AF990 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803AF990.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1803B9C54 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1803A4AE0 (WPP_SF_.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1803AC714 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803B0964 (-PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Col.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803B0E4C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivati.c)
 *     ?TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x1803B4FCC (-TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x1803B5410 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1803B7720 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803B9FA8 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1803BA568 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::_ContinueSwitchAsyncWorker(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        CAppViewManagerTelemetry::SwitchAsyncWorker *a5,
        struct IAsyncCallback *a6)
{
  CAppViewManager *v9; // rbx
  int v10; // r14d
  RTL_SRWLOCK *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r13d
  struct IImmersiveApplicationInternal *v15; // rbx
  __int64 (__fastcall *v16)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *); // rsi
  int v17; // eax
  int v18; // eax
  char v20; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[7]; // [rsp+41h] [rbp-BFh] BYREF
  struct IImmersiveApplicationInternal *v22; // [rsp+48h] [rbp-B8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+5Ch] [rbp-A4h]
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  CAppViewManagerTelemetry::SwitchAsyncWorker *v28; // [rsp+70h] [rbp-90h]
  _QWORD v29[4]; // [rsp+78h] [rbp-88h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-68h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-50h]
  _BYTE v32[320]; // [rsp+C0h] [rbp-40h] BYREF

  v25 = a4;
  v27 = a2;
  v9 = a1;
  v23 = a1;
  v28 = a5;
  v29[3] = a5;
  CAppViewManagerTelemetry::SwitchAsyncWorker::TransferToCurrentThread(
    (__int64)a5,
    (struct wil::details::IFailureCallback *)v32);
  v10 = 0;
  v20 = 0;
  v21[0] = 0;
  v24 = 0;
  v22 = 0LL;
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  v29[2] = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v29[1] = 0LL;
  v29[0] = a3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  v14 = CAppViewManager::_PrepareToSwitchHelper(v9, a2, a3, a4, v29, &v22, &v20, v21);
  if ( v14 == 1 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_29b7c553b8593986cdf6175cf369b117_Traceguids);
    v10 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, __int64, bool))(*(_QWORD *)v22 + 112LL))(
            v22,
            a3,
            2LL,
            (a4 & 1) == 0);
    if ( v10 < 0 )
      goto LABEL_10;
    if ( a6 )
    {
      v26 = 0LL;
      v15 = v22;
      v16 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)v22 + 352LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      v17 = v16(v15, 3LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v26);
      v9 = v23;
      if ( v17 >= 0 )
        v10 = CAppViewManager::_AddPresentedWindowCallbackTrigger(
                (__int64)v23,
                2,
                (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))v22,
                a3,
                (IUnknown *)a6,
                &v24);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      if ( v10 < 0 )
LABEL_10:
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, _QWORD))(*(_QWORD *)v22 + 224LL))(
          v22,
          a3,
          0LL);
    }
  }
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  if ( v14 < 0 )
  {
    v10 = v14;
  }
  else if ( v20 )
  {
    v23 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetImpl'::`2'::impl,
      1u,
      v12,
      v13);
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v18 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v31,
            (__int64 *)&v23);
    v31 = 0LL;
    if ( v18 >= 0 )
      PopulateSwitchAsyncPropertySet(v27, a3, v25, (__int64)v23);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    CAppViewManager::_TrySwitchToApplication(v9, v22, v23);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  }
  if ( a6 && !v24 )
    CAppViewManager::_s_QueueCallback(v22, a6, v10);
  if ( v10 >= 0 )
    v10 = v21[0] != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v32, v10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v32);
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(v28);
  return (unsigned int)v10;
}
