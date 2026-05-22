/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperPtrSize@@AEBU?$_tlgWrapperArray@$03@@@Z @ 0x1800FCC78
 * Callers:
 *     ?LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ @ 0x1800FCD20 (-LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800849F4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperArray<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-11h]
  __int64 v10; // [rsp+58h] [rbp-9h]
  __int64 v11; // [rsp+60h] [rbp-1h]
  int v12; // [rsp+68h] [rbp+7h]
  int v13; // [rsp+6Ch] [rbp+Bh]
  __int64 *v14; // [rsp+70h] [rbp+Fh]
  __int64 v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+8Ch] [rbp+2Bh]

  v15 = 2LL;
  v18 = 0;
  v13 = 0;
  v10 = 4LL;
  v16 = *a7;
  v17 = 4 * *((unsigned __int16 *)a7 + 4);
  v14 = a7 + 1;
  v11 = *a6;
  v12 = *((_DWORD *)a6 + 2);
  v9 = a5;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1802191B0, a2, 0LL, 0LL, 6u, &v8);
}
