/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BDE48
 * Callers:
 *     ?MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x180040E20 (-MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     ?MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z @ 0x1800BF18C (-MPCHandProcessor_PointDataChanged_@ISMTracing@@QEAAXII@Z.c)
 *     ?MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x1800C7778 (-MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x1800D823C (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 *     ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x1800D9488 (-InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z.c)
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x1800D96BC (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 *     ?CursorProcessorGenerateMouseLeave@Cursor@InputTraceLogging@@SAXKK@Z @ 0x180158C34 (-CursorProcessorGenerateMouseLeave@Cursor@InputTraceLogging@@SAXKK@Z.c)
 *     ?UpdateMouseCursorPosition@CursorProcessor@@AEAAXPEBUtagPOINT@@@Z @ 0x180159678 (-UpdateMouseCursorPosition@CursorProcessor@@AEAAXPEBUtagPOINT@@@Z.c)
 *     ?DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z @ 0x180170864 (-DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z.c)
 *     ?HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z @ 0x1801CDE28 (-HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z.c)
 *     ?SendToggle@Magnifier@InputTraceLogging@@SAXAEBUPoint@Foundation@Windows@@@Z @ 0x1801CF2A8 (-SendToggle@Magnifier@InputTraceLogging@@SAXAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x1801D31B8 (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?MPCSixDofProcessor_HomeHotkey_OnButtonsChanged_@ISMTracing@@QEAAXKK@Z @ 0x1801DECE0 (-MPCSixDofProcessor_HomeHotkey_OnButtonsChanged_@ISMTracing@@QEAAXKK@Z.c)
 *     ?MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z @ 0x1801E3C80 (-MPCGamepadProcessor_KeyboardInputEvent_@ISMTracing@@QEAAXKK@Z.c)
 *     ?MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_@ISMTracing@@QEAAXKK@Z @ 0x1801E9544 (-MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_@ISMTracing@@QEAAXKK@Z.c)
 *     ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x1801EED70 (-UpdateClientOwner@DWMCursor@@UEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 4;
  v13 = 0;
  v8 = a5;
  v9 = 4;
  v10 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v7);
}
