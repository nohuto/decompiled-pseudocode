/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3444444@Z @ 0x18065E22C
 * Callers:
 *     ?StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z @ 0x180663B90 (-StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v15; // [rsp+50h] [rbp-91h]
  int v16; // [rsp+58h] [rbp-89h]
  int v17; // [rsp+5Ch] [rbp-85h]
  __int64 v18; // [rsp+60h] [rbp-81h]
  int v19; // [rsp+68h] [rbp-79h]
  int v20; // [rsp+6Ch] [rbp-75h]
  __int64 v21; // [rsp+70h] [rbp-71h]
  int v22; // [rsp+78h] [rbp-69h]
  int v23; // [rsp+7Ch] [rbp-65h]
  __int64 v24; // [rsp+80h] [rbp-61h]
  int v25; // [rsp+88h] [rbp-59h]
  int v26; // [rsp+8Ch] [rbp-55h]
  __int64 v27; // [rsp+90h] [rbp-51h]
  int v28; // [rsp+98h] [rbp-49h]
  int v29; // [rsp+9Ch] [rbp-45h]
  __int64 v30; // [rsp+A0h] [rbp-41h]
  int v31; // [rsp+A8h] [rbp-39h]
  int v32; // [rsp+ACh] [rbp-35h]
  __int64 v33; // [rsp+B0h] [rbp-31h]
  int v34; // [rsp+B8h] [rbp-29h]
  int v35; // [rsp+BCh] [rbp-25h]
  __int64 v36; // [rsp+C0h] [rbp-21h]
  int v37; // [rsp+C8h] [rbp-19h]
  int v38; // [rsp+CCh] [rbp-15h]
  __int64 v39; // [rsp+D0h] [rbp-11h]
  int v40; // [rsp+D8h] [rbp-9h]
  int v41; // [rsp+DCh] [rbp-5h]

  v41 = 0;
  v38 = 0;
  v35 = 0;
  v32 = 0;
  v29 = 0;
  v26 = 0;
  v23 = 0;
  v20 = 0;
  v17 = 0;
  v39 = a13;
  v36 = a12;
  v33 = a11;
  v30 = a10;
  v27 = a9;
  v24 = a8;
  v21 = a7;
  v18 = a6;
  v15 = a5;
  v40 = 4;
  v37 = 4;
  v34 = 4;
  v31 = 4;
  v28 = 4;
  v25 = 4;
  v22 = 8;
  v19 = 4;
  v16 = 8;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 0xBu, &v14);
}
