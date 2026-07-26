/*
 * XREFs of ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0C80
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C00D0E5C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapBuffer@U_.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D11A4 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1240 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1264 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void TraceLoggingWriteOidRequestReturnedActivity<0,_NDIS_FILTER_BLOCK>()
{
  __int64 v0; // r9
  __int64 v1; // r10
  const struct _NDIS_OID_REQUEST *v2; // rcx
  const struct _NDIS_OID_REQUEST *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // ecx
  unsigned int RequestVPortID; // [rsp+60h] [rbp-20h] BYREF
  unsigned int RequestSwitchID; // [rsp+64h] [rbp-1Ch] BYREF
  int v9; // [rsp+68h] [rbp-18h] BYREF
  int v10; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v11; // [rsp+70h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp-8h] BYREF
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int RequestFlags; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C00F41D8 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00F41D8, 1024LL) )
    {
      v11 = *(_QWORD *)(v1 + 48);
      v13 = *(_DWORD *)(v0 + 88);
      RequestFlags = GetRequestFlags((const struct _NDIS_OID_REQUEST *)v0);
      RequestVPortID = GetRequestVPortID(v2);
      RequestSwitchID = GetRequestSwitchID(v3);
      v9 = *(_DWORD *)(v4 + 32);
      v10 = *(_DWORD *)(v4 + 4);
      v12 = *(_QWORD *)(v5 + 32) + 4008LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
        v6,
        (unsigned int)&unk_1C00DF5C8,
        v4 + 168,
        v4,
        (__int64)&v12,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&RequestSwitchID,
        (__int64)&RequestVPortID,
        (__int64)&RequestFlags,
        (__int64)&v13,
        (__int64)&v11);
    }
  }
}
