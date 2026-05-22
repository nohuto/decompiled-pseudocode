/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800BA0CC
 * Callers:
 *     ?MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BBC34 (-MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BBD54 (-MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BC230 (-MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z @ 0x1800BC350 (-MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z @ 0x180158D70 (-CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]

  v16 = a8;
  v14 = a7;
  v12 = a6;
  v10 = a5;
  v17 = 4LL;
  v15 = 4LL;
  v13 = 4LL;
  v11 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 6u, &v9);
}
