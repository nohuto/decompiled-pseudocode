/*
 * XREFs of ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180048394
 * Callers:
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180004FE0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@Z @ 0x180005180 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z @ 0x180007760 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CAJPEAX0H@Z @ 0x18000B390 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX0H@Z @ 0x18000BCA0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX.c)
 *     ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18000BEB0 (-OnConnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180012230 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180017B40 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1800183C0 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180018430 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x180018D90 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18003FCF0 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x180041E40 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@CAJPE.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x180041FD0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180037DF8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(LPINIT_ONCE *a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  ULONGLONG *Ptr; // rcx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    v3 = *a1;
    Ptr = (ULONGLONG *)(*a1)[4].Ptr;
    v3[2].Ptr = Ptr;
    LOBYTE(v3[3].Ptr) = 1;
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(Ptr, (ULONGLONG)InputTraceLogging::Callback);
    v5.Ptr = v3[1].Ptr;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *((_DWORD *)a1 + 2);
    InputTraceLogging::s_registered = 1;
  }
  return InitOnceComplete(*a1, v1, &(*a1)[1]);
}
