/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180543754
 * Callers:
 *     ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x180548AD0 (-Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDes.c)
 *     ?Stop@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x180574670 (-Stop@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z.c)
 *     ?Stop@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x18057490C (-Stop@ActivateRemotePathInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z.c)
 *     ?Stop@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z @ 0x180574BA8 (-Stop@ModifyUnpackagedAppInContainer@AAMTraceProvider@@QEAAXU_GUID@@J@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v10; // rcx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-51h] BYREF
  __int64 v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  __int64 v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+98h] [rbp+17h]

  v21 = a9;
  v22 = 4LL;
  v20 = 16LL;
  v18 = 4LL;
  v10 = *a8;
  v17 = a7;
  v15 = a6;
  v13 = a5;
  v19 = v10;
  v16 = 4LL;
  v14 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 7u, &v12);
}
