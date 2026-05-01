/*
 * XREFs of ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1803A25E4
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _lambda_10d04f2f2676f3bcd785d385c5de414a_::operator() @ 0x1801D0810 (_lambda_10d04f2f2676f3bcd785d385c5de414a_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemetry@@SAXAEAK$$QEAPEBG$$QEAW4CloseRequestInputSource@0@@Z @ 0x180394B48 (--$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemet.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180395E64 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1AltF4CloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x180396760 (--1AltF4CloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?IsEnabled@AppCloseTelemetry@@SA_NE_K@Z @ 0x18039D458 (-IsEnabled@AppCloseTelemetry@@SA_NE_K@Z.c)
 *     ?StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x1803A05E8 (-StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803A08E0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z @ 0x1803A1710 (-TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleCloseRequested(
        CApplicationManager *this,
        HWND *a2,
        struct IImmersiveApplication *a3)
{
  CApplicationManager *v5; // rcx
  WINBOOL v6; // edx
  char v7; // cl
  void (__fastcall *v8)(struct IImmersiveApplication *, const WCHAR **); // rbx
  const WCHAR *v9; // rcx
  void (__fastcall *v10)(char *, GUID *, IUnknown **); // rbx
  HRESULT Service; // eax
  char v12; // bl
  int v13; // eax
  const char *v14; // r9
  char v15; // [rsp+40h] [rbp-C0h] BYREF
  DWORD TickCount; // [rsp+44h] [rbp-BCh] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-B8h] BYREF
  struct IImmersiveApplication *v18; // [rsp+50h] [rbp-B0h] BYREF
  void *ppvOut[2]; // [rsp+58h] [rbp-A8h] BYREF
  const WCHAR *v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v18 = a3;
  TickCount = 0;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"AltF4CloseRequested");
  v23[0] = (__int64)&CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  CAppManagerTelemetry::AltF4CloseRequested::StartActivity((CAppManagerTelemetry::AltF4CloseRequested *)v23);
  if ( !CApplicationManager::TryClosePopupForWindow(v5, a2[1]) )
  {
    if ( v18 )
    {
      TickCount = GetTickCount();
      if ( AppCloseTelemetry::IsEnabled(v7) )
      {
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v8 = *(void (__fastcall **)(struct IImmersiveApplication *, const WCHAR **))(*(_QWORD *)v18 + 32LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
        v21 = -1LL;
        v22 = -1LL;
        v8(v18, &v20);
        LODWORD(punk) = 2;
        v9 = &LocaleName;
        if ( v20 )
          v9 = v20;
        ppvOut[0] = (void *)v9;
        AppCloseTelemetry::UserInputCloseRequested<unsigned long &,unsigned short const *,enum AppCloseTelemetry::CloseRequestInputSource>(
          &TickCount,
          (__int64 *)ppvOut,
          &punk);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
      }
      ppvOut[0] = &v18;
      ppvOut[1] = this;
      v15 = 1;
      if ( (int)lambda_10d04f2f2676f3bcd785d385c5de414a_::operator()((__int64)ppvOut, (bool *)&v15) >= 0 && v15 )
      {
        ppvOut[0] = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
        punk = 0LL;
        TickCount = 2;
        v10 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        v10((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
        Service = IUnknown_QueryService(punk, &stru_18081F618, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, ppvOut);
        if ( Service >= 0 )
        {
          v12 = 1;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1BC6,
            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)Service);
          v12 = 0;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        if ( v12 )
        {
          if ( (*(int (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr) >= 0 )
          {
            v13 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, __int64))(*(_QWORD *)ppvOut[0]
                                                                                             + 40LL))(
                    ppvOut[0],
                    v18,
                    2LL);
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1BCF,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v13);
          }
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
      }
    }
    else if ( !PostMessageW(a2[1], 0x112u, 0xF060uLL, 0LL) )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1BD9,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        v14);
    }
  }
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23, v6);
  CAppManagerTelemetry::AltF4CloseRequested::~AltF4CloseRequested((CAppManagerTelemetry::AltF4CloseRequested *)v23);
}
