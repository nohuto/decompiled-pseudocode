/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003E90C
 * Callers:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x1800159E0 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  unsigned __int16 *v9; // rax
  __int64 v10; // rcx
  _DWORD v12[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-31h]
  unsigned __int16 *v14; // [rsp+50h] [rbp-21h] BYREF
  int v15; // [rsp+58h] [rbp-19h]
  int v16; // [rsp+5Ch] [rbp-15h]
  unsigned __int16 *v17; // [rsp+60h] [rbp-11h]
  int v18; // [rsp+68h] [rbp-9h]
  int v19; // [rsp+6Ch] [rbp-5h]
  __int64 v20; // [rsp+70h] [rbp-1h]
  __int64 v21; // [rsp+78h] [rbp+7h]
  __int64 v22; // [rsp+80h] [rbp+Fh]
  __int64 v23; // [rsp+88h] [rbp+17h]
  __int64 v24; // [rsp+90h] [rbp+1Fh]
  __int64 v25; // [rsp+98h] [rbp+27h]

  v24 = a7;
  v22 = a6;
  v20 = a5;
  v12[0] = *a2 << 24;
  v12[1] = *(unsigned __int16 *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v8 = (unsigned __int16 *)(a2 + 11);
  v13 = v7;
  v9 = *(unsigned __int16 **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 32);
  v14 = v9;
  v25 = 1LL;
  v23 = 4LL;
  v21 = 8LL;
  v15 = *v9;
  v18 = *v8;
  v17 = v8;
  v19 = 1;
  v16 = 2;
  return EtwEventWriteTransfer(v10, v12, 0LL, 0LL, 5, &v14);
}
