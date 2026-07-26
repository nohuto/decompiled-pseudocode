/*
 * XREFs of ?NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0085EFC
 * Callers:
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008E57C (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0024D50 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0083EA8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

void __fastcall NdisTraceLoggingMiniportWakeBufferTooLarge(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00EB1D8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00EB1D8, 0x200000000000LL) )
    {
      v5 = v3;
      v6 = v4 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v1,
        byte_1C00D6EF3,
        v2,
        v3,
        &v6,
        (__int64)&v5);
    }
  }
}
