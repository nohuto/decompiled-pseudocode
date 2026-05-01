/*
 * XREFs of ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180016980
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0$$V@InitializePosition@ShellPositionerTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180016A98 (--$-0$$V@InitializePosition@ShellPositionerTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ @ 0x180016B48 (--1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAKPEAUtagRECT@@@Z @ 0x180016D58 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::InitializePosition(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  int v4; // r14d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, GUID *, GUID *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  _QWORD *v13; // [rsp+20h] [rbp-1C8h]
  _QWORD v14[2]; // [rsp+50h] [rbp-198h] BYREF
  _BYTE v15[320]; // [rsp+60h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v4 = (int)a3;
  ShellPositionerTelemetry::InitializePosition::InitializePosition(v15);
  v14[0] = 0LL;
  v7 = *((_QWORD *)this + 5);
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *))(*(_QWORD *)v7 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
  v13 = v14;
  v9 = v8(v7, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 512LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v9,
      (int)v13);
    goto LABEL_4;
  }
  LODWORD(v13) = v4;
  v9 = ShellPositionerManager::HandleActivationRequest((char *)this - 112, 0LL, a2, v14[0]);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 513LL;
    goto LABEL_7;
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
  v10 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
  ShellPositionerTelemetry::InitializePosition::~InitializePosition((ShellPositionerTelemetry::InitializePosition *)v15);
  return v10;
}
