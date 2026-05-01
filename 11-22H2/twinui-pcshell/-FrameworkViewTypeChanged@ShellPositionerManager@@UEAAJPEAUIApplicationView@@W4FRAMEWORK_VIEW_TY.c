/*
 * XREFs of ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18005F7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180016850 (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??$?0$$V@FrameworkViewTypeChanged@ShellPositionerTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18005F8CC (--$-0$$V@FrameworkViewTypeChanged@ShellPositionerTelemetry@@AEAA@U-$integral_constant@D$0A@@wist.c)
 *     ??1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ @ 0x18005F97C (--1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::FrameworkViewTypeChanged(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3)
{
  __int64 (__fastcall *v6)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12[2]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v13[320]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  ShellPositionerTelemetry::FrameworkViewTypeChanged::FrameworkViewTypeChanged(v13);
  v12[0] = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v12);
  v8 = v6(a2, AddressOf);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 594LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v8,
      v12[0]);
    goto LABEL_4;
  }
  v8 = ShellPositionerManager::HandleFrameworkViewTypeChange((ShellPositionerManager *)(a1 - 120), a3, a2, v12[0]);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 595LL;
    goto LABEL_7;
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
  v9 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12);
  ShellPositionerTelemetry::FrameworkViewTypeChanged::~FrameworkViewTypeChanged((ShellPositionerTelemetry::FrameworkViewTypeChanged *)v13);
  return v9;
}
