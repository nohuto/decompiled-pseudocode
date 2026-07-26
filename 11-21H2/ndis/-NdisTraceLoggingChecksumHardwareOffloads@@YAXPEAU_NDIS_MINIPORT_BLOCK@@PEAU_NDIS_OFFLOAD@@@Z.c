/*
 * XREFs of ?NdisTraceLoggingChecksumHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0085508
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C008660C (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0024D50 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@U3@U3@U3@U3@U3@U2@U3@U3@U3@U3@U2@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@55554555554555545555@Z @ 0x1C0084264 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U.c)
 */

void __fastcall NdisTraceLoggingChecksumHardwareOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned int v5; // ecx
  char v6; // al
  unsigned int v7; // ecx
  char v8; // al
  unsigned int v9; // ecx
  char v10; // al
  unsigned int v11; // ecx
  char v12; // al
  __int64 v13; // rcx
  char v14; // al
  char v15; // [rsp+E0h] [rbp-80h] BYREF
  char v16; // [rsp+E1h] [rbp-7Fh] BYREF
  char v17; // [rsp+E2h] [rbp-7Eh] BYREF
  char v18; // [rsp+E3h] [rbp-7Dh] BYREF
  char v19; // [rsp+E4h] [rbp-7Ch] BYREF
  char v20; // [rsp+E5h] [rbp-7Bh] BYREF
  char v21; // [rsp+E6h] [rbp-7Ah] BYREF
  char v22; // [rsp+E7h] [rbp-79h] BYREF
  char v23; // [rsp+E8h] [rbp-78h] BYREF
  char v24; // [rsp+E9h] [rbp-77h] BYREF
  char v25; // [rsp+EAh] [rbp-76h] BYREF
  char v26; // [rsp+EBh] [rbp-75h] BYREF
  char v27; // [rsp+ECh] [rbp-74h] BYREF
  char v28; // [rsp+EDh] [rbp-73h] BYREF
  char v29; // [rsp+EEh] [rbp-72h] BYREF
  char v30; // [rsp+EFh] [rbp-71h] BYREF
  int v31; // [rsp+F0h] [rbp-70h] BYREF
  int v32; // [rsp+F4h] [rbp-6Ch] BYREF
  int v33; // [rsp+F8h] [rbp-68h] BYREF
  int v34; // [rsp+FCh] [rbp-64h] BYREF
  __int64 v35; // [rsp+100h] [rbp-60h] BYREF
  char v36; // [rsp+130h] [rbp-30h] BYREF
  char v37; // [rsp+138h] [rbp-28h] BYREF

  if ( (unsigned int)dword_1C00EB1D8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00EB1D8, 0x200000000000LL) )
    {
      v5 = v3[8];
      v36 = (v5 >> 6) & 3;
      v37 = (v5 >> 4) & 3;
      v6 = v3[8] & 3;
      v15 = (v5 >> 2) & 3;
      v16 = v6;
      v31 = v3[7];
      v7 = v3[6];
      v17 = (v7 >> 6) & 3;
      v18 = (v7 >> 4) & 3;
      v8 = v3[6] & 3;
      v19 = (v7 >> 2) & 3;
      v9 = v3[4];
      v20 = v8;
      v32 = v3[5];
      v21 = BYTE1(v9) & 3;
      v22 = (v9 >> 6) & 3;
      v23 = (v9 >> 4) & 3;
      v10 = v3[4] & 3;
      v24 = (v9 >> 2) & 3;
      v11 = v3[2];
      v25 = v10;
      v33 = v3[3];
      v26 = BYTE1(v11) & 3;
      v27 = (v11 >> 6) & 3;
      v12 = (v11 >> 4) & 3;
      v13 = v11 >> 2;
      v28 = v12;
      LOBYTE(v13) = v13 & 3;
      v14 = v3[2] & 3;
      v29 = v13;
      v30 = v14;
      v34 = v3[1];
      v35 = v4 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v13,
        byte_1C00D6569,
        v2,
        (__int64)v3,
        &v35,
        (__int64)&v34,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v33,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v31,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v37,
        (__int64)&v36);
    }
  }
}
