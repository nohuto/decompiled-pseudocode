/*
 * XREFs of ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180027C4C
 * Callers:
 *     _lambda_63662cd9376551e4950848a042514280_::operator() @ 0x18002783C (_lambda_63662cd9376551e4950848a042514280_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4af9e279c0557e674118e7fededcb641___1_long_::Invoke @ 0x1802F6790 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F6790.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FD200 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802FE2D0 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1800281C8 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??1ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1800282E4 (--1ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180028310 (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x1800283CC (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180028580 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x1800286AC (-SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180028728 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180028794 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18006DFA0 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180093960 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800E8B48 (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1802EC2B8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1802EC3E8 (WPP_SF_d.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1802F7864 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1802FEA08 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     WPP_SF_ll @ 0x1802FEBAC (WPP_SF_ll.c)
 *     WPP_SF_qqLLd @ 0x1802FEC74 (WPP_SF_qqLLd.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CAppViewManager::_ShowViewAsyncWorker(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        const struct CAppViewManager::ShowViewAsyncOptions *a4,
        struct Windows::Foundation::Collections::IPropertySet *a5,
        struct IAsyncCallback *a6,
        struct IPresentationRequestedArgs *a7)
{
  CAppViewManager *v10; // r14
  struct IIAMServiceProvider *v11; // rdi
  __int64 v12; // r12
  bool v13; // bl
  __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  bool v17; // zf
  char v18; // si
  unsigned int v19; // r12d
  RTL_SRWLOCK *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  int GlomForWindow; // edi
  bool v24; // r14
  CAppViewManager *v25; // rcx
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(__int64, HWND, struct IImmersiveApplicationInternal *, CAppViewManager *, struct IImmersiveApplicationInternal **); // rdi
  unsigned int v28; // eax
  char v29; // si
  CAppViewManager *v30; // rax
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v31; // rdx
  unsigned __int8 v32; // r8
  int v33; // eax
  int v34; // esi
  RTL_SRWLOCK *v35; // rbx
  char v36; // r15
  struct IAsyncCallback *v37; // r13
  unsigned __int8 v39; // al
  __int64 v40; // rdx
  __int64 v41; // r8
  char v42; // [rsp+40h] [rbp-C0h]
  bool v43; // [rsp+41h] [rbp-BFh] BYREF
  bool v44; // [rsp+42h] [rbp-BEh] BYREF
  char v45; // [rsp+43h] [rbp-BDh]
  CAppViewManager *v46; // [rsp+48h] [rbp-B8h] BYREF
  CAppViewManager *v47; // [rsp+50h] [rbp-B0h] BYREF
  struct IImmersiveApplicationInternal *v48; // [rsp+58h] [rbp-A8h] BYREF
  struct IImmersiveApplicationInternal *v49; // [rsp+60h] [rbp-A0h] BYREF
  struct IImmersiveApplicationInternal *v50; // [rsp+68h] [rbp-98h] BYREF
  struct IAsyncCallback *v51; // [rsp+70h] [rbp-90h]
  HWND v52; // [rsp+78h] [rbp-88h]
  struct IIAMServiceProvider *v53; // [rsp+80h] [rbp-80h] BYREF
  PSRWLOCK v54; // [rsp+88h] [rbp-78h] BYREF
  CAppViewManager *v55; // [rsp+90h] [rbp-70h]
  PSRWLOCK v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  _BYTE v58[16]; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h]
  _QWORD v61[40]; // [rsp+E0h] [rbp-20h] BYREF

  v52 = a2;
  v10 = this;
  v46 = this;
  v11 = a5;
  v55 = a5;
  v51 = a6;
  v56 = (PSRWLOCK)a7;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v61,
    "ShowViewAsyncWorker");
  v61[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  CAppViewManagerTelemetry::ShowViewAsyncWorker::StartActivity((CAppViewManagerTelemetry::ShowViewAsyncWorker *)v61);
  v12 = *((_QWORD *)a4 + 2);
  v57 = v12;
  v13 = 0;
  if ( a5 )
  {
    v54 = (PSRWLOCK)a5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v54);
    v11 = 0LL;
    v60 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v15 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v54, v60, v14, &v47);
    v16 = (int)v47;
    if ( v15 < 0 )
      v16 = 0;
    v13 = v16 == 2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  }
  if ( !v12 && !v13 || (v17 = a2 == a3, v18 = 1, !v17) )
    v18 = (char)v11;
  v53 = v11;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
  (***((void (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))v10 + 15))(
    *((_QWORD *)v10 + 15),
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    &v53);
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v58,
    v53);
  v42 = 1;
  v19 = (unsigned int)v11;
  v50 = v11;
  v48 = v11;
  v49 = v11;
  v45 = (char)v11;
  v44 = (char)v11;
  v43 = (char)v11;
  v20 = CApplicationManagerUtility::g_pIAMGlobals;
  v54 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqLLd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      v21,
      v22,
      v52,
      a3,
      *(_DWORD *)a4,
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 2));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v49);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v10, a3, &v49, &v43);
  if ( GlomForWindow < 0 )
    goto LABEL_21;
  v24 = v43;
  if ( v18 && !v43 )
    a3 = (HWND)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v49 + 384LL))(v49);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v50);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v46, v52, &v50, &v44);
  if ( GlomForWindow < 0 )
    goto LABEL_59;
  if ( !v24 && !v18 )
  {
    v42 = 0;
    v19 = 1;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v39 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v49 + 416LL))(v49);
      WPP_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 2), v40, v41, 0LL, v39);
    }
    goto LABEL_59;
  }
  if ( !CAppViewManager::_IsMultiViewOperationAllowed(v25, v50) )
  {
    v42 = 0;
    v19 = -2147024891;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids);
LABEL_59:
    v10 = v46;
    goto LABEL_21;
  }
  if ( v44 )
  {
    Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v48, &v50);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids);
    v10 = v46;
  }
  else
  {
    v10 = v46;
    v26 = *((_QWORD *)v46 + 15);
    v27 = *(__int64 (__fastcall **)(__int64, HWND, struct IImmersiveApplicationInternal *, CAppViewManager *, struct IImmersiveApplicationInternal **))(*(_QWORD *)v26 + 88LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v48);
    v28 = v27(v26, v52, v50, v55, &v48);
    GlomForWindow = v28;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids, v28);
    if ( GlomForWindow < 0 )
      goto LABEL_21;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*(_QWORD *)v48 + 368LL))(v48, 2LL);
    v45 = 1;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v49 + 416LL))(v49) )
  {
LABEL_21:
    v29 = 0;
    goto LABEL_22;
  }
  v29 = 1;
LABEL_22:
  if ( v20 )
    ReleaseSRWLockExclusive(v20);
  if ( GlomForWindow >= 0 && v42 )
  {
    v46 = v55;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v46);
    v30 = v46;
    if ( !v46 )
    {
      v60 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      GlomForWindow = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
                        v60,
                        &v46);
      v60 = 0LL;
      if ( GlomForWindow < 0 )
      {
LABEL_37:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
        goto LABEL_38;
      }
      v30 = v46;
    }
    v47 = v30;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v47);
    GlomForWindow = ViewSizePreferenceHelpers::SetTargetViewSizePreference(&v47, *(unsigned int *)a4);
    if ( GlomForWindow >= 0 )
    {
      if ( v57 )
      {
        LOBYTE(v31) = 1;
        v33 = PositionerPropertySetHelpers::SetAppActivationResponse((PositionerPropertySetHelpers *)&v47, v31, v32);
      }
      else
      {
        v33 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v47, a3, *((unsigned int *)a4 + 1));
      }
      GlomForWindow = v33;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v47);
    if ( GlomForWindow >= 0 )
    {
      if ( v29 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
      if ( !v45
        || (GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, CAppViewManager *, PSRWLOCK, struct IImmersiveApplicationInternal *))(**((_QWORD **)v10 + 15) + 152LL))(
                              *((_QWORD *)v10 + 15),
                              v48,
                              v46,
                              v56,
                              v49),
            GlomForWindow >= 0) )
      {
        GlomForWindow = CAppViewManager::_TrySwitchToApplication(v10, v48, v46);
      }
    }
    goto LABEL_37;
  }
LABEL_38:
  v34 = 0;
  LODWORD(v47) = 0;
  v35 = CApplicationManagerUtility::g_pIAMGlobals;
  v56 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow < 0 )
  {
    if ( v48 && v50 && v50 != v48 )
      (*(void (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v10 + 15) + 104LL))(
        *((_QWORD *)v10 + 15),
        v48,
        v50,
        0LL);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids,
        (unsigned int)GlomForWindow);
    v36 = v42;
    goto LABEL_79;
  }
  v36 = v42;
  if ( !v42 )
  {
LABEL_79:
    v37 = v51;
    goto LABEL_43;
  }
  v37 = v51;
  if ( v51 && (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v48 + 472LL))(v48) )
  {
    GlomForWindow = CAppViewManager::_AddPresentedWindowCallbackTrigger(v10, 1LL, v48, v52, v37, &v47);
    v34 = (int)v47;
  }
LABEL_43:
  if ( v35 )
    ReleaseSRWLockExclusive(v35);
  if ( v37 && !v34 )
  {
    if ( GlomForWindow < 0 )
      v19 = GlomForWindow;
    CAppViewManager::_s_QueueCallback(v49, v37, v19);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_65754c2fe5c9338726b8119b5dabff0c_Traceguids, v19);
  }
  if ( GlomForWindow >= 0 )
    GlomForWindow = v36 != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v61,
    (unsigned int)GlomForWindow);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v49);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v48);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v50);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v58);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
  CAppViewManagerTelemetry::ShowViewAsyncWorker::~ShowViewAsyncWorker((CAppViewManagerTelemetry::ShowViewAsyncWorker *)v61);
  return (unsigned int)GlomForWindow;
}
