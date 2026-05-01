/*
 * XREFs of GetViewId @ 0x1803CEC48
 * Callers:
 *     ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803D0370 (-StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1803D04B0 (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803D05D0 (-StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_PO.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetViewId(__int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *), _QWORD *a2)
{
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  void *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  void *v16; // [rsp+40h] [rbp+20h] BYREF
  __int64 v17; // [rsp+48h] [rbp+28h] BYREF
  __int64 *v18; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  v4 = **a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  v5 = v4(a1, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v17);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v18 = 0LL;
    v7 = v17;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)&v18);
    v10 = v8(v7, AddressOf);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v16 = 0LL;
      v11 = *v18;
      v16 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64 *, void **))(v11 + 40))(v18, &v16);
      v6 = v12;
      if ( v12 >= 0 )
      {
        v13 = v16;
        v16 = 0LL;
        *a2 = v13;
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPositionerTracing.h",
          (const char *)(unsigned int)v12);
      }
      wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPositionerTracing.h",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPositionerTracing.h",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return v6;
}
