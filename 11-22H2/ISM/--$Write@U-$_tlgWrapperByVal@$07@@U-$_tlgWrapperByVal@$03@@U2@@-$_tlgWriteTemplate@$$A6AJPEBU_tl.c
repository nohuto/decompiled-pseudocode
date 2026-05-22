/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E5B4C
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180049930 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x18004EB60 (-ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180076BA0 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 *     ?StopProcess@InputProcessManager@@QEAAXXZ @ 0x180076E14 (-StopProcess@InputProcessManager@@QEAAXXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z @ 0x180076F40 (-UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800EAAA8 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ @ 0x1800EB390 (-StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x1801C2100 (-RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputPr.c)
 *     ?MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z @ 0x1801EBE34 (-MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v13 = a7;
  v11 = a6;
  v9 = a5;
  v14 = 4LL;
  v12 = 4LL;
  v10 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 5u, &v8);
}
