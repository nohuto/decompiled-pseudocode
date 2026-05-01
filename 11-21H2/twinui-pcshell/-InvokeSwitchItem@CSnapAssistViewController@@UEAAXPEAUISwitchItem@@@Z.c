/*
 * XREFs of ?InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804B4280
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002E638 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B47F8 (-_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x1804BD838 (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSnapAssistViewController::InvokeSwitchItem(
        CSnapAssistViewController *this,
        int (__fastcall ***a2)(struct ISwitchItem *, GUID *, __int64 *))
{
  int (__fastcall *v4)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  struct IApplicationView *v5; // rdx
  HWND WindowForView; // r14
  HANDLE PropW; // r12
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, HANDLE, __int64 *); // rbx
  __int64 *AddressOf; // rax
  UINT v11; // eax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  struct IApplicationView *v14; // [rsp+68h] [rbp+48h] BYREF
  __int64 v15; // [rsp+70h] [rbp+50h] BYREF
  __int64 v16; // [rsp+78h] [rbp+58h] BYREF

  v15 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  if ( v4((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v15) >= 0 )
  {
    (*(void (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v15 + 24LL))(v15, &v14);
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v14,
                            v5);
    PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
    if ( PropW )
    {
      v16 = 0LL;
      v8 = *((_QWORD *)this + 10);
      v9 = *(int (__fastcall **)(__int64, HANDLE, __int64 *))(*(_QWORD *)v8 + 48LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v16);
      if ( v9(v8, PropW, AddressOf) >= 0 )
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v14, &v16);
      v11 = dword_1807B69E0;
      if ( dword_1807B69E0 )
        goto LABEL_9;
      v11 = RegisterWindowMessageW(L"TabSwitch");
      dword_1807B69E0 = v11;
      if ( !v11 )
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x54,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
          v12);
        v11 = dword_1807B69E0;
      }
      if ( v11 )
LABEL_9:
        PostMessageW(WindowForView, v11, 0LL, 0LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
    }
    CSnapAssistViewController::_OnItemInvoked((CSnapAssistViewController *)((char *)this - 16), v14);
    ViewHostTelemetry::SendAppSwitchTelemetry(a2, 7LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
}
