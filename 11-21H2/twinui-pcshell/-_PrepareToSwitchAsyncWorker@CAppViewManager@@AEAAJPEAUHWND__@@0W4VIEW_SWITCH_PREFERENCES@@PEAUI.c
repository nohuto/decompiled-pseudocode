/*
 * XREFs of ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802FCA04
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b___1_long_::Invoke @ 0x1802F6920 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F6920.c)
 * Callees:
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180028580 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F3CC8 (--1PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F86C4 (-StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1802FCBB8 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1802FEA08 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_PrepareToSwitchAsyncWorker(
        IUnknown **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct IAsyncCallback *a5)
{
  RTL_SRWLOCK *v9; // rbx
  int v10; // edi
  char v12; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[7]; // [rsp+41h] [rbp-BFh] BYREF
  struct IImmersiveApplicationInternal *v14[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v15[40]; // [rsp+60h] [rbp-A0h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v15,
    (__int64)"PrepareToSwitchAsyncWorker");
  v15[0] = &CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::StartActivity((CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker *)v15);
  v14[0] = 0LL;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  v14[1] = (struct IImmersiveApplicationInternal *)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v14);
  v10 = CAppViewManager::_PrepareToSwitchHelper(a1, a2, a3, a4, 0LL, v14, &v12, v13);
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  if ( v10 >= 0 && v12 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    CAppViewManager::_TrySwitchToApplication(
      a1,
      (void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))v14[0],
      0LL);
  }
  if ( a5 )
    CAppViewManager::_s_QueueCallback(v14[0], a5, v10);
  if ( v10 >= 0 )
    v10 = v13[0] != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15, v10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v14);
  CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker::~PrepareToSwitchAsyncWorker((CAppViewManagerTelemetry::PrepareToSwitchAsyncWorker *)v15);
  return (unsigned int)v10;
}
