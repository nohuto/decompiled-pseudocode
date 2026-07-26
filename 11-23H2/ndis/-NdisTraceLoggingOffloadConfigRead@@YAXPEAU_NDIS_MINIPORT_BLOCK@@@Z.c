/*
 * XREFs of ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BFB0
 * Callers:
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E658 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C002C020 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

void __fastcall NdisTraceLoggingOffloadConfigRead(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // r9
  int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C00F4210 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00F4210, 0x200000000000LL) )
    {
      v4 = *(_DWORD *)(v3 + 3680);
      v5 = v3 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v1,
        (unsigned int)&unk_1C00DE551,
        v2,
        v3,
        (__int64)&v5,
        (__int64)&v4);
    }
  }
}
