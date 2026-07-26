/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@33AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1C0024B94
 * Callers:
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0024AB8 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFO.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0024C54 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rcx
  _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-69h] BYREF
  __int64 v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  __int64 v15; // [rsp+60h] [rbp-39h]
  __int64 v16; // [rsp+68h] [rbp-31h]
  __int64 v17; // [rsp+70h] [rbp-29h]
  __int64 v18; // [rsp+78h] [rbp-21h]
  __int64 v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  __int64 v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  __int64 v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]

  v23 = a10;
  v21 = a9;
  v19 = a8;
  v17 = a7;
  v24 = 1LL;
  v22 = 1LL;
  v20 = 4LL;
  v10 = *a6;
  v13 = a5;
  v15 = v10;
  v18 = 4LL;
  v16 = 16LL;
  v14 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C00EB1D8, a2, 0, 0, 8u, &v12);
}
