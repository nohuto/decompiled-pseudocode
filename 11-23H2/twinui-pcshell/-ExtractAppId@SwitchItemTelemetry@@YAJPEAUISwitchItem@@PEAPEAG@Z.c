/*
 * XREFs of ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x180571EB4
 * Callers:
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180577080 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x1805781C8 (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x18058A370 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SwitchItemTelemetry::ExtractAppId(
        __int64 (__fastcall ***this)(SwitchItemTelemetry *, GUID *, __int64 *),
        struct ISwitchItem *a2,
        unsigned __int16 **a3)
{
  __int64 (__fastcall *v5)(SwitchItemTelemetry *, GUID *, __int64 *); // rbx
  int v6; // eax
  int v7; // ebx
  __int64 (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  __int64 v14; // [rsp+48h] [rbp+28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF

  *(_QWORD *)a2 = 0LL;
  v14 = 0LL;
  v5 = **this;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  v6 = v5((SwitchItemTelemetry *)this, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v13 = 0LL;
    v8 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(
                                                                 v14,
                                                                 &v15);
    v9 = *v8;
    v10 = ***v8;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
    v7 = v10(v9, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v13);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct ISwitchItem *))(*(_QWORD *)v13 + 136LL))(v13, a2);
      if ( v7 >= 0 )
        v7 = 0;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemtelemetry.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  return (unsigned int)v7;
}
