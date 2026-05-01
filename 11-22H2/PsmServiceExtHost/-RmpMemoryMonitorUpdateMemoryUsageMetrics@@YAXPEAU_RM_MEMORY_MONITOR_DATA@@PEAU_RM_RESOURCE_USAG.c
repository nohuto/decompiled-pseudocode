/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180010BE4
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180040AD0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpMemoryMonitorConvertResourceUsageLevel@@YA?AW4_RM_MEMORY_MONITOR_USAGE_LEVEL@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180010CE8 (-RmpMemoryMonitorConvertResourceUsageLevel@@YA-AW4_RM_MEMORY_MONITOR_USAGE_LEVEL@@W4_RM_RESOURCE.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@333AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x18008C778 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWriteTemplat.c)
 */

void __fastcall RmpMemoryMonitorUpdateMemoryUsageMetrics(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_RESOURCE_USAGE_STATS *a2)
{
  struct _RM_MEMORY_MONITOR_DATA *v2; // rbx
  int v3; // eax
  _BYTE *v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned __int64 v18; // xmm1_8
  char v19; // [rsp+60h] [rbp+7h] BYREF
  char v20; // [rsp+61h] [rbp+8h] BYREF
  char v21; // [rsp+62h] [rbp+9h] BYREF
  char v22[5]; // [rsp+63h] [rbp+Ah] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+70h] [rbp+17h] BYREF
  __int64 v25; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+80h] [rbp+27h] BYREF
  __int128 v27; // [rsp+88h] [rbp+2Fh] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp+3Fh]

  v2 = a1;
  LOBYTE(a1) = *((_BYTE *)a2 + 1);
  v3 = RmpMemoryMonitorConvertResourceUsageLevel(a1, a2, a2);
  LOBYTE(v5) = *v4;
  LODWORD(v27) = v3;
  v7 = RmpMemoryMonitorConvertResourceUsageLevel(v5, v6, v4);
  v9 = *(_QWORD *)(v8 + 16);
  v10 = *(_QWORD *)(v8 + 8) + 0x7FFFFFFLL;
  DWORD1(v27) = v7;
  v11 = v10 & 0xFFFFFFFFF8000000uLL;
  v12 = (v9 + 0x7FFFFFF) & 0xFFFFFFFFF8000000uLL;
  v13 = *((_QWORD *)v2 + 12);
  *((_QWORD *)&v27 + 1) = v11;
  v28 = v12;
  v14 = v13 - v27;
  if ( !v14 )
  {
    v14 = *((_QWORD *)v2 + 13) - v11;
    if ( !v14 )
      v14 = *((_QWORD *)v2 + 14) - v12;
  }
  if ( v14 )
  {
    RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_METRICS, 0LL, &v27, 24LL, 0LL);
    if ( (unsigned int)dword_1800DB1E0 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1800DB1E0, 1LL) )
      {
        v23 = v28;
        v24 = *((_QWORD *)v2 + 14);
        v25 = *((_QWORD *)&v27 + 1);
        v26 = *((_QWORD *)v2 + 13);
        v19 = BYTE4(v27);
        v20 = *((_BYTE *)v2 + 100);
        v21 = v27;
        v22[0] = *((_BYTE *)v2 + 96);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v15,
          (unsigned int)&unk_1800C6318,
          v16,
          v17,
          (__int64)v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23);
      }
    }
    v18 = v28;
    *((_OWORD *)v2 + 6) = v27;
    *((_QWORD *)v2 + 14) = v18;
  }
}
