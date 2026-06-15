/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@55555AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x18012B088
 * Callers:
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAIII@Z @ 0x18012B274 (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAIII@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rcx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v17; // [rsp+50h] [rbp-A9h]
  __int64 v18; // [rsp+58h] [rbp-A1h]
  __int64 v19; // [rsp+60h] [rbp-99h]
  __int64 v20; // [rsp+68h] [rbp-91h]
  __int64 v21; // [rsp+70h] [rbp-89h]
  __int64 v22; // [rsp+78h] [rbp-81h]
  __int64 v23; // [rsp+80h] [rbp-79h]
  __int64 v24; // [rsp+88h] [rbp-71h]
  __int64 v25; // [rsp+90h] [rbp-69h]
  __int64 v26; // [rsp+98h] [rbp-61h]
  __int64 v27; // [rsp+A0h] [rbp-59h]
  __int64 v28; // [rsp+A8h] [rbp-51h]
  __int64 v29; // [rsp+B0h] [rbp-49h]
  __int64 v30; // [rsp+B8h] [rbp-41h]
  __int64 v31; // [rsp+C0h] [rbp-39h]
  __int64 v32; // [rsp+C8h] [rbp-31h]
  __int64 v33; // [rsp+D0h] [rbp-29h]
  __int64 v34; // [rsp+D8h] [rbp-21h]
  __int64 v35; // [rsp+E0h] [rbp-19h]
  __int64 v36; // [rsp+E8h] [rbp-11h]

  v35 = a14;
  v33 = a13;
  v31 = a12;
  v29 = a11;
  v27 = a10;
  v25 = a9;
  v23 = a8;
  v21 = a7;
  v36 = 4LL;
  v34 = 1LL;
  v32 = 4LL;
  v14 = *a6;
  v17 = a5;
  v19 = v14;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 16LL;
  v18 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801C0178, a2, 0LL, 0LL, 0xCu, &v16);
}
