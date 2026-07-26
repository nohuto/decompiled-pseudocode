/*
 * XREFs of ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C008689C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0018820 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0024D50 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C0083FD0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6A.c)
 */

void __fastcall NdisTraceLoggingQosConfigOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  _DWORD *v6; // rdx
  int v7; // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+54h] [rbp-14h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00EB1D8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00EB1D8, 0x200000000000LL) )
    {
      v6 = *(_DWORD **)(v4 + 72);
      v10 = v6[4];
      v11 = v6[3];
      v7 = v6[2];
      v8 = v6[1];
      v9 = v5 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v2,
        byte_1C00D6759,
        v3,
        v4,
        &v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
