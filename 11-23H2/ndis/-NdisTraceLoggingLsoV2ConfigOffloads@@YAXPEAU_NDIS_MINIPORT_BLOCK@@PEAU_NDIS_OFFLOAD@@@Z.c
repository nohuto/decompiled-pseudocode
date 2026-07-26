/*
 * XREFs of ?NdisTraceLoggingLsoV2ConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C008AFD0
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C008B8D0 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1C00893D8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@.c)
 */

void __fastcall NdisTraceLoggingLsoV2ConfigOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r10
  int v6; // [rsp+70h] [rbp+37h] BYREF
  int v7; // [rsp+74h] [rbp+3Bh] BYREF
  int v8; // [rsp+78h] [rbp+3Fh] BYREF
  int v9; // [rsp+7Ch] [rbp+43h] BYREF
  int v10; // [rsp+80h] [rbp+47h] BYREF
  int v11; // [rsp+84h] [rbp+4Bh] BYREF
  __int64 v12; // [rsp+88h] [rbp+4Fh] BYREF
  char v13; // [rsp+B0h] [rbp+77h] BYREF
  char v14; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C00F4210 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00F4210, 0x200000000000LL) )
    {
      v13 = (v4[26] >> 2) & 3;
      v14 = v4[26] & 3;
      v6 = v4[25];
      v7 = v4[24];
      v8 = v4[23];
      v9 = v4[22];
      v10 = v4[21];
      v11 = v4[20];
      v12 = v5 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v2,
        byte_1C00DDD55,
        v3,
        (__int64)v4,
        &v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
}
