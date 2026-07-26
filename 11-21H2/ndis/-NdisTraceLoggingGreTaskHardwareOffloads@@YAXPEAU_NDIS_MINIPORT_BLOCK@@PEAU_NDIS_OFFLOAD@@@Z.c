/*
 * XREFs of ?NdisTraceLoggingGreTaskHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0085B6C
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C008660C (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0024D50 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@444AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0083BE8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U-$_tlgWrapperByVal@$03@@@.c)
 */

void __fastcall NdisTraceLoggingGreTaskHardwareOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned int v5; // ecx
  char v6; // al
  __int64 v7; // rcx
  char v8; // al
  char v9; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v10[3]; // [rsp+51h] [rbp-Fh] BYREF
  int v11; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h] BYREF
  char v13; // [rsp+80h] [rbp+20h] BYREF
  char v14; // [rsp+88h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C00EB1D8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00EB1D8, 0x200000000000LL) )
    {
      v5 = *(_DWORD *)(v3 + 148);
      v11 = *(_DWORD *)(v3 + 152);
      v13 = BYTE2(v5) & 0xF;
      v6 = BYTE1(v5) & 0xF;
      v7 = v5 >> 4;
      v14 = v6;
      LOBYTE(v7) = v7 & 0xF;
      v8 = *(_BYTE *)(v3 + 148) & 0xF;
      v9 = v7;
      v10[0] = v8;
      v12 = v4 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v7,
        byte_1C00D604B,
        v2,
        v3,
        &v12,
        (__int64)v10,
        (__int64)&v9,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v11);
    }
  }
}
