/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U3@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperPtrSize@@5445@Z @ 0x180674AB8
 * Callers:
 *     ?WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z @ 0x180675190 (-WindowMigrationEvent_@SnapMigrationHandlerTelemetry@@QEBAX_KIAEBUtagRECT@@1II1@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-81h] BYREF
  __int64 v13; // [rsp+50h] [rbp-61h]
  __int64 v14; // [rsp+58h] [rbp-59h]
  __int64 v15; // [rsp+60h] [rbp-51h]
  __int64 v16; // [rsp+68h] [rbp-49h]
  __int64 v17; // [rsp+70h] [rbp-41h]
  int v18; // [rsp+78h] [rbp-39h]
  int v19; // [rsp+7Ch] [rbp-35h]
  __int64 v20; // [rsp+80h] [rbp-31h]
  int v21; // [rsp+88h] [rbp-29h]
  int v22; // [rsp+8Ch] [rbp-25h]
  __int64 v23; // [rsp+90h] [rbp-21h]
  __int64 v24; // [rsp+98h] [rbp-19h]
  __int64 v25; // [rsp+A0h] [rbp-11h]
  __int64 v26; // [rsp+A8h] [rbp-9h]
  __int64 v27; // [rsp+B0h] [rbp-1h]
  int v28; // [rsp+B8h] [rbp+7h]
  int v29; // [rsp+BCh] [rbp+Bh]

  v26 = 4LL;
  v29 = 0;
  v24 = 4LL;
  v22 = 0;
  v27 = *a11;
  v28 = *((_DWORD *)a11 + 2);
  v25 = a10;
  v23 = a9;
  v20 = *a8;
  v21 = *((_DWORD *)a8 + 2);
  v19 = 0;
  v16 = 4LL;
  v17 = *a7;
  v18 = *((_DWORD *)a7 + 2);
  v15 = a6;
  v13 = a5;
  v14 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v12);
}
