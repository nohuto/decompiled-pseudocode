/*
 * XREFs of ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0008BF0
 * Callers:
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C010C9A0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 *     ?IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z @ 0x1C00D0348 (-IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C00D0E3C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapBuffer@U_.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1184 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1220 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1244 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisAzTelemetryOidDelivered<_NDIS_MINIPORT_BLOCK>(__int64 a1)
{
  unsigned int v2; // r9d
  __int64 v3; // r11
  __int64 v4; // r11
  const struct _NDIS_OID_REQUEST *v5; // rcx
  const struct _NDIS_OID_REQUEST *v6; // rcx
  __int64 v7; // r11
  int v8; // ecx
  int v9; // r9d
  unsigned int RequestVPortID; // [rsp+60h] [rbp-28h] BYREF
  unsigned int RequestSwitchID; // [rsp+64h] [rbp-24h] BYREF
  int v12; // [rsp+68h] [rbp-20h] BYREF
  int v13; // [rsp+6Ch] [rbp-1Ch] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp-10h] BYREF
  int v16; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int RequestFlags; // [rsp+A8h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00F41D8 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 1024LL) )
  {
    if ( ((*(_DWORD *)(v3 + 88) >> 28) & 3) != 0 )
    {
      if ( ((*(_DWORD *)(v3 + 88) >> 28) & 3) != 2 )
        return;
    }
    else
    {
      if ( !IsOidTelemetryFilterEnabled(*(_DWORD *)(v3 + 32), (struct _NDIS_OID_REQUEST_RESERVED *)(v3 + 72)) )
        return;
      v2 = dword_1C00F41D8;
    }
    if ( v2 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 1024LL) )
      {
        v14 = *(_QWORD *)(a1 + 3856);
        v16 = *(_DWORD *)(v4 + 88);
        RequestFlags = GetRequestFlags((const struct _NDIS_OID_REQUEST *)v4);
        RequestVPortID = GetRequestVPortID(v5);
        RequestSwitchID = GetRequestSwitchID(v6);
        v12 = *(_DWORD *)(v7 + 32);
        v13 = *(_DWORD *)(v7 + 4);
        v15 = a1 + 4008;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
          v8,
          (unsigned int)&unk_1C00DF635,
          v7 + 168,
          v9,
          (__int64)&v15,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&RequestSwitchID,
          (__int64)&RequestVPortID,
          (__int64)&RequestFlags,
          (__int64)&v16,
          (__int64)&v14);
      }
    }
  }
}
