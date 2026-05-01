/*
 * XREFs of ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1802E4520
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EBCDC (--$As@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180143C9C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ @ 0x1802E0210 (--1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GhostFrameSystemTerminateReason@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E7388 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GhostFrameSystemTerminateReason@@@details.c)
 *     ?StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ @ 0x1802E80F8 (-StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CApplicationManager::HandleFrameWindowGhosted(CApplicationManager *this, HWND a2)
{
  RTL_SRWLOCK *v4; // rbx
  void (__fastcall *v5)(char *, GUID *, IUnknown **); // rbx
  __int64 v6; // rdx
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-C8h] BYREF
  PSRWLOCK v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+48h] [rbp-B8h]
  void *ppvOut; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+58h] [rbp-A8h]
  _QWORD v14[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v11 = 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v14,
    (__int64)"CloseHungApp");
  v14[0] = &CAppManagerTelemetry::CloseHungApp::`vftable';
  CAppManagerTelemetry::CloseHungApp::StartActivity((CAppManagerTelemetry::CloseHungApp *)v14);
  v8 = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  ppvOut = a2;
  v13 = 2;
  CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this - 240, (__int64)&ppvOut, &v8, 0LL);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( v8 )
  {
    v10 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::As<IImmersiveApplication>(&v8, (__int64 *)&v10) >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
      punk = 0LL;
      v11 = 2;
      v5 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 24) + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      v5((char *)this - 192, &GUID_00000000_0000_0000_c000_000000000046, &punk);
      LOBYTE(v5) = IUnknown_QueryService(punk, &stru_1806D4168, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut) >= 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      if ( (_BYTE)v5 )
      {
        LOBYTE(v6) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_GhostFrameSystemTerminateReason>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_GhostFrameSystemTerminateReason>::GetImpl'::`2'::impl,
          v6);
        v7 = (*(__int64 (__fastcall **)(void *, PSRWLOCK, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v10, 9LL);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE5E,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v7);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14, 0);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  CAppManagerTelemetry::CloseHungApp::~CloseHungApp((CAppManagerTelemetry::CloseHungApp *)v14);
}
