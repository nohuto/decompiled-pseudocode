/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperArray@$03@@@Z @ 0x14006A984
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperArray<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  _BYTE v8[32]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-11h]
  __int64 v10; // [rsp+58h] [rbp-9h]
  __int64 v11; // [rsp+60h] [rbp-1h]
  __int64 v12; // [rsp+68h] [rbp+7h]
  __int64 *v13; // [rsp+70h] [rbp+Fh]
  __int64 v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+88h] [rbp+27h]
  int v17; // [rsp+8Ch] [rbp+2Bh]

  v14 = 2LL;
  v17 = 0;
  v12 = 8LL;
  v10 = 8LL;
  v15 = *a7;
  v16 = 4 * *((unsigned __int16 *)a7 + 4);
  v11 = a6;
  v9 = a5;
  v13 = a7 + 1;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 6, (__int64)v8);
}
