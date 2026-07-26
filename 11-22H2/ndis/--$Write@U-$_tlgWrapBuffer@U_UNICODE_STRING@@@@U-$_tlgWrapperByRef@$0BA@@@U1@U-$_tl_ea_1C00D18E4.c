/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00D18E4
 * Callers:
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x1C0021550 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00232B4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        unsigned __int16 **a5,
        __int64 *a6,
        unsigned __int16 **a7,
        __int64 a8)
{
  int v8; // ecx
  __int64 v9; // rcx
  _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-59h] BYREF
  _DWORD *v12; // [rsp+50h] [rbp-39h]
  __int64 v13; // [rsp+58h] [rbp-31h]
  __int64 v14; // [rsp+60h] [rbp-29h]
  _DWORD v15[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v16; // [rsp+70h] [rbp-19h]
  __int64 v17; // [rsp+78h] [rbp-11h]
  _DWORD *v18; // [rsp+80h] [rbp-9h]
  __int64 v19; // [rsp+88h] [rbp-1h]
  __int64 v20; // [rsp+90h] [rbp+7h]
  _DWORD v21[2]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+A0h] [rbp+17h]
  __int64 v23; // [rsp+A8h] [rbp+1Fh]

  v22 = a8;
  v23 = 8LL;
  v18 = v21;
  v19 = 2LL;
  v8 = **a7;
  v20 = *((_QWORD *)*a7 + 1);
  v21[0] = v8;
  v21[1] = 0;
  v17 = 16LL;
  v9 = *a6;
  v12 = v15;
  v16 = v9;
  v13 = 2LL;
  LODWORD(v9) = **a5;
  v14 = *((_QWORD *)*a5 + 1);
  v15[0] = v9;
  v15[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00F41D8, a2, a3, 0LL, 8u, &v11);
}
