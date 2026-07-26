/*
 * XREFs of LookUpTableFlushComplete @ 0x1C01147D0
 * Callers:
 *     ndisDmaTelemetryUpdateBucketSchema @ 0x1C0031F28 (ndisDmaTelemetryUpdateBucketSchema.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01160B0 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C0138390 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0138420 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0024D50 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@44AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C00CCF3C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U.c)
 *     FlushLookUpTableBucket @ 0x1C00CD510 (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x1C013849C (UpdateInternalStatsOnFlush.c)
 */

void __fastcall LookUpTableFlushComplete(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int128 v7; // xmm0
  int v8; // [rsp+70h] [rbp-29h] BYREF
  int v9; // [rsp+74h] [rbp-25h] BYREF
  int v10; // [rsp+78h] [rbp-21h] BYREF
  int v11; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v12; // [rsp+80h] [rbp-19h] BYREF
  __int64 v13; // [rsp+88h] [rbp-11h] BYREF
  __int64 v14; // [rsp+90h] [rbp-9h] BYREF
  __int64 v15; // [rsp+98h] [rbp-1h] BYREF
  __int64 v16[5]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+2Fh]
  __int128 v18; // [rsp+D0h] [rbp+37h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 256) )
  {
    UpdateInternalStatsOnFlush();
    if ( *(_QWORD *)(v3 + 288) )
    {
      if ( (unsigned int)dword_1C00EB630 > 5 && tlgKeywordOn((__int64)&dword_1C00EB630, 0x200000000000LL) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL);
        v7 = *(_OWORD *)(v6 - 16);
        v8 = *(_DWORD *)(a1 + 324);
        v9 = *(_DWORD *)(a1 + 320);
        v10 = *(_DWORD *)(a1 + 316);
        v11 = *(_DWORD *)(a1 + 312);
        v12 = *(_DWORD *)(a1 + 308);
        v14 = *(unsigned int *)(a1 + 304);
        v15 = *(_QWORD *)(a1 + 296);
        v16[0] = (__int64)&v18;
        v18 = v7;
        v13 = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v6,
          byte_1C00D7B1C,
          v4,
          v5,
          v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&v8);
      }
      *(_OWORD *)(a1 + 288) = 0LL;
      v17 = 0LL;
      *(_OWORD *)(a1 + 304) = 0LL;
      *(_QWORD *)(a1 + 320) = v17;
    }
    do
      FlushLookUpTableBucket(a1, v1++);
    while ( v1 < 0x20 );
  }
}
