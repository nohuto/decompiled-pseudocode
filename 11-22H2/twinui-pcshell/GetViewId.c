/*
 * XREFs of GetViewId @ 0x1804ABD08
 * Callers:
 *     ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804AD230 (-StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804AD37C (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804AD4A8 (-StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_PO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, void **); // rdi
  void **v13; // rax
  int v14; // eax
  void *v15; // rcx
  void *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  void *v19; // [rsp+40h] [rbp+20h] BYREF
  __int64 v20; // [rsp+48h] [rbp+28h] BYREF
  __int64 v21; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v20 = 0LL;
  v4 = **a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  v5 = v4(a1, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v20);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v21 = 0LL;
    v7 = v20;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v21);
    v10 = v8(v7, AddressOf);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v19 = 0LL;
      v11 = v21;
      v12 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v21 + 40LL);
      v13 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v19);
      v14 = v12(v11, v13);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v16 = v19;
        v15 = 0LL;
        v19 = 0LL;
        *a2 = v16;
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (int)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPositionerTracing.h",
          (const char *)(unsigned int)v14);
        v15 = v19;
      }
      if ( v15 )
        CoTaskMemFree(v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (int)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPositionerTracing.h",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (int)"pcshell\\twinui\\holographicpositioner\\inc\\HolographicPositionerTracing.h",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return v6;
}
