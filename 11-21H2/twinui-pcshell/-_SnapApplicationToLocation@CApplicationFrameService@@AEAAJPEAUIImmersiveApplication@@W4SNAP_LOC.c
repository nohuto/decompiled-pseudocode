/*
 * XREFs of ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18030114C
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18006E930 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180053DA8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1802E56EC (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x1802FEFF8 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationFrameService::_SnapApplicationToLocation(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  __int64 *AddressOf; // rdi
  void (__fastcall *v7)(__int64, GUID *, IUnknown **); // rbx
  struct IApplicationView **v8; // r9
  HRESULT ViewForApplication; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  void (__fastcall *v12)(__int64, GUID *, IUnknown **); // rbx
  int v13; // eax
  char v14; // cl
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  IUnknown *punk; // [rsp+30h] [rbp-39h] BYREF
  int v21; // [rsp+38h] [rbp-31h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h] BYREF
  IUnknown *v24; // [rsp+50h] [rbp-19h] BYREF
  __int64 v25; // [rsp+58h] [rbp-11h]
  __int64 v26; // [rsp+60h] [rbp-9h]
  __int64 v27; // [rsp+68h] [rbp-1h] BYREF
  __int64 v28; // [rsp+70h] [rbp+7h]
  __int64 v29; // [rsp+78h] [rbp+Fh]
  __int64 v30; // [rsp+80h] [rbp+17h] BYREF
  int v31[4]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v23 = 0LL;
  ppvOut = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v23);
  punk = 0LL;
  v21 = 2;
  v7 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)a1 + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v7(a1, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         punk,
                         a2,
                         (struct IImmersiveApplication *)AddressOf,
                         v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( ViewForApplication >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    punk = 0LL;
    v21 = 9;
    v12 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)a1 + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v12(a1, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    ViewForApplication = IUnknown_QueryService(
                           punk,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( ViewForApplication < 0 )
    {
      v10 = (unsigned int)ViewForApplication;
      v11 = 1405LL;
      goto LABEL_7;
    }
    v13 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            v23,
            a3,
            0LL,
            v31);
    ViewForApplication = v13;
    if ( v13 < 0 )
    {
      v10 = (unsigned int)v13;
      v11 = 1408LL;
      goto LABEL_7;
    }
    if ( CAppManagerTelemetry::IsEnabled(v14) )
    {
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      AddRef = a2->lpVtbl[1].AddRef;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v27);
      v28 = -1LL;
      v29 = -1LL;
      v16 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))AddRef)(a2, &v27);
      ViewForApplication = v16;
      if ( v16 < 0 )
      {
        v17 = 1415LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v16);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v27);
        goto LABEL_16;
      }
      QueryInterface = a2->lpVtbl[5].QueryInterface;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
      v25 = -1LL;
      v26 = -1LL;
      v16 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, IUnknown **))QueryInterface)(a2, 0LL, &v24);
      ViewForApplication = v16;
      if ( v16 < 0 )
      {
        v17 = 1416LL;
        goto LABEL_13;
      }
      v21 = a3;
      punk = v24;
      v30 = v27;
      CAppManagerTelemetry::FrameSnapInvoked<unsigned short const *,unsigned short const *,unsigned int>(
        &v30,
        (__int64 *)&punk,
        &v21);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v27);
    }
    ViewForApplication = 0;
    goto LABEL_16;
  }
  v10 = (unsigned int)ViewForApplication;
  v11 = 1404LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)v10);
LABEL_16:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
  return (unsigned int)ViewForApplication;
}
