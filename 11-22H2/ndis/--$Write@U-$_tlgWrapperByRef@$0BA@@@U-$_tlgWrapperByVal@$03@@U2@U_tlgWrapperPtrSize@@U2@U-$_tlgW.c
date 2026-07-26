/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U_tlgWrapperPtrSize@@U2@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4AEBU?$_tlgWrapperArray@$03@@@Z @ 0x1C00CEC94
 * Callers:
 *     ??$WriteEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CF22C (--$WriteEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$WriteEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CF3B0 (--$WriteEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ?WriteEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CFB70 (-WriteEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00232B4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperArray<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        __int64 *a10)
{
  _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-79h] BYREF
  __int64 v12; // [rsp+50h] [rbp-59h]
  __int64 v13; // [rsp+58h] [rbp-51h]
  __int64 v14; // [rsp+60h] [rbp-49h]
  __int64 v15; // [rsp+68h] [rbp-41h]
  __int64 v16; // [rsp+70h] [rbp-39h]
  __int64 v17; // [rsp+78h] [rbp-31h]
  __int64 v18; // [rsp+80h] [rbp-29h]
  int v19; // [rsp+88h] [rbp-21h]
  int v20; // [rsp+8Ch] [rbp-1Dh]
  __int64 v21; // [rsp+90h] [rbp-19h]
  __int64 v22; // [rsp+98h] [rbp-11h]
  __int64 *v23; // [rsp+A0h] [rbp-9h]
  __int64 v24; // [rsp+A8h] [rbp-1h]
  __int64 v25; // [rsp+B0h] [rbp+7h]
  int v26; // [rsp+B8h] [rbp+Fh]
  int v27; // [rsp+BCh] [rbp+13h]

  v24 = 2LL;
  v27 = 0;
  v22 = 4LL;
  v20 = 0;
  v25 = *a10;
  v26 = 4 * *((unsigned __int16 *)a10 + 4);
  v21 = a9;
  v23 = a10 + 1;
  v17 = 4LL;
  v15 = 4LL;
  v13 = 16LL;
  v18 = *a8;
  v19 = *((_DWORD *)a8 + 2);
  v16 = a7;
  v14 = a6;
  v12 = *a5;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00F41D8, a2, 0LL, 0LL, 9u, &v11);
}
