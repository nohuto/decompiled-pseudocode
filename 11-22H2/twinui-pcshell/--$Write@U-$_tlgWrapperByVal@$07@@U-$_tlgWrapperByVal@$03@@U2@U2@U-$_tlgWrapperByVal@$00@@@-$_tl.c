/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180520380
 * Callers:
 *     ?StartActivity@DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18052AE68 (-StartActivity@DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboar.c)
 *     ?StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18052B594 (-StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboard.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-51h] BYREF
  __int64 v11; // [rsp+50h] [rbp-31h]
  __int64 v12; // [rsp+58h] [rbp-29h]
  __int64 v13; // [rsp+60h] [rbp-21h]
  __int64 v14; // [rsp+68h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  __int64 v17; // [rsp+80h] [rbp-1h]
  __int64 v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]

  v19 = a9;
  v17 = a8;
  v15 = a7;
  v13 = a6;
  v11 = a5;
  v20 = 1LL;
  v18 = 4LL;
  v16 = 4LL;
  v14 = 4LL;
  v12 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 7u, &v10);
}
