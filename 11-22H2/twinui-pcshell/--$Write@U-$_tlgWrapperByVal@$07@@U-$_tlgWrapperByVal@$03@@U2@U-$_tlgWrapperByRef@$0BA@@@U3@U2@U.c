/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@5444@Z @ 0x1805FE42C
 * Callers:
 *     ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180604C24 (-Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v13; // rcx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-99h] BYREF
  __int64 v16; // [rsp+50h] [rbp-79h]
  int v17; // [rsp+58h] [rbp-71h]
  int v18; // [rsp+5Ch] [rbp-6Dh]
  __int64 v19; // [rsp+60h] [rbp-69h]
  int v20; // [rsp+68h] [rbp-61h]
  int v21; // [rsp+6Ch] [rbp-5Dh]
  __int64 v22; // [rsp+70h] [rbp-59h]
  int v23; // [rsp+78h] [rbp-51h]
  int v24; // [rsp+7Ch] [rbp-4Dh]
  __int64 v25; // [rsp+80h] [rbp-49h]
  int v26; // [rsp+88h] [rbp-41h]
  int v27; // [rsp+8Ch] [rbp-3Dh]
  __int64 v28; // [rsp+90h] [rbp-39h]
  int v29; // [rsp+98h] [rbp-31h]
  int v30; // [rsp+9Ch] [rbp-2Dh]
  __int64 v31; // [rsp+A0h] [rbp-29h]
  int v32; // [rsp+A8h] [rbp-21h]
  int v33; // [rsp+ACh] [rbp-1Dh]
  __int64 v34; // [rsp+B0h] [rbp-19h]
  int v35; // [rsp+B8h] [rbp-11h]
  int v36; // [rsp+BCh] [rbp-Dh]
  __int64 v37; // [rsp+C0h] [rbp-9h]
  int v38; // [rsp+C8h] [rbp-1h]
  int v39; // [rsp+CCh] [rbp+3h]

  v39 = 0;
  v36 = 0;
  v33 = 0;
  v30 = 0;
  v27 = 0;
  v24 = 0;
  v21 = 0;
  v18 = 0;
  v37 = a12;
  v34 = a11;
  v31 = a10;
  v29 = 16;
  v26 = 16;
  v38 = 4;
  v28 = *a9;
  v35 = 4;
  v32 = 4;
  v13 = *a8;
  v22 = a7;
  v19 = a6;
  v16 = a5;
  v25 = v13;
  v23 = 4;
  v20 = 4;
  v17 = 8;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0xAu, &v15);
}
