/*
 * XREFs of ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180016B80
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0$$V@ActivationRequested@ShellPositionerTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180016C7C (--$-0$$V@ActivationRequested@ShellPositionerTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x180016D2C (--1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x180016D58 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::ActivationRequested(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  int v3; // ebp
  __int64 (__fastcall *v6)(struct IApplicationView *, __int64); // rbx
  __int64 AddressOf; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-1A8h]
  _QWORD v13[2]; // [rsp+50h] [rbp-178h] BYREF
  _BYTE v14[320]; // [rsp+60h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v3 = (int)a3;
  ShellPositionerTelemetry::ActivationRequested::ActivationRequested(v14);
  v13[0] = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v13);
  v8 = v6(a2, AddressOf);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 546LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v8,
      v12);
    goto LABEL_4;
  }
  v12 = v3;
  v8 = ShellPositionerManager::HandleActivationRequest((char *)this - 112, 1LL, a2, v13[0]);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 547LL;
    goto LABEL_7;
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
  v9 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v13);
  ShellPositionerTelemetry::ActivationRequested::~ActivationRequested((ShellPositionerTelemetry::ActivationRequested *)v14);
  return v9;
}
