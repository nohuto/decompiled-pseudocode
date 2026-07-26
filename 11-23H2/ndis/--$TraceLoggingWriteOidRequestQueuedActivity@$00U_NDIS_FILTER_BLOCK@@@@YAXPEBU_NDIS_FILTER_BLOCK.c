/*
 * XREFs of ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D06A4
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C3D0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0024AF0 (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@5@Z @ 0x1C00D1078 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlg_ea_1C00D1078.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D11A4 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestSourceInstanceName@@YAPEBU_UNICODE_STRING@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D11C8 (-GetRequestSourceInstanceName@@YAPEBU_UNICODE_STRING@@PEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1240 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1264 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_FILTER_BLOCK>()
{
  const struct _NDIS_OID_REQUEST *v0; // r9
  __int64 v1; // r10
  __int64 v2; // r9
  const struct _NDIS_OID_REQUEST *v3; // rcx
  const struct _NDIS_OID_REQUEST *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // ecx
  unsigned int RequestVPortID; // [rsp+70h] [rbp+27h] BYREF
  unsigned int RequestSwitchID; // [rsp+74h] [rbp+2Bh] BYREF
  int v10; // [rsp+78h] [rbp+2Fh] BYREF
  int v11; // [rsp+7Ch] [rbp+33h] BYREF
  __int64 v12; // [rsp+80h] [rbp+37h] BYREF
  const struct _UNICODE_STRING *RequestSourceInstanceName; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v14; // [rsp+90h] [rbp+47h] BYREF
  int v15; // [rsp+C0h] [rbp+77h] BYREF
  unsigned int RequestFlags; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C00F41D8 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00F41D8, 1024LL) )
    {
      v12 = *(_QWORD *)(v1 + 48);
      RequestSourceInstanceName = GetRequestSourceInstanceName(v0);
      v15 = *(_DWORD *)(v2 + 88);
      RequestFlags = GetRequestFlags((const struct _NDIS_OID_REQUEST *)v2);
      RequestVPortID = GetRequestVPortID(v3);
      RequestSwitchID = GetRequestSwitchID(v4);
      v10 = *(_DWORD *)(v5 + 32);
      v11 = *(_DWORD *)(v5 + 4);
      v14 = *(_QWORD *)(v6 + 32) + 4008LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
        v7,
        (unsigned int)&unk_1C00DF6A3,
        v5 + 168,
        v5,
        (__int64)&v14,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&RequestSwitchID,
        (__int64)&RequestVPortID,
        (__int64)&RequestFlags,
        (__int64)&v15,
        (__int64)&RequestSourceInstanceName,
        (__int64)&v12);
    }
  }
}
