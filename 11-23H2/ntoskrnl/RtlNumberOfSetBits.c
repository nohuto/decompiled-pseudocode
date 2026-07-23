/*
 * XREFs of RtlNumberOfSetBits @ 0x140293800
 * Callers:
 *     RtlNumberOfClearBits @ 0x1402937D0 (RtlNumberOfClearBits.c)
 *     HvpGenerateLogEntryDirtyData @ 0x1402952F0 (HvpGenerateLogEntryDirtyData.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140343D70 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403458AC (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14039BDF0 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404FF7F4 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x14051621C (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 *     SepAddLuidToIndexEntry @ 0x1406B7850 (SepAddLuidToIndexEntry.c)
 *     HvpGenerateLogEntry @ 0x140705968 (HvpGenerateLogEntry.c)
 *     PspQueryRateControlHistory @ 0x14070705C (PspQueryRateControlHistory.c)
 *     HvFreeHivePartial @ 0x1407073B8 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x14074F364 (HvpAddBin.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407A6144 (PopEvaluateGlobalUserStatus.c)
 *     HvWriteHivePrimaryFile @ 0x1407D97D0 (HvWriteHivePrimaryFile.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F4B78 (SepGetLowBoxNumberEntry.c)
 *     HvpPerformLogFileRecovery @ 0x14080055C (HvpPerformLogFileRecovery.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140860134 (EtwQueryPerformanceTraceInformation.c)
 *     CmpMountPreloadedHives @ 0x1408632EC (CmpMountPreloadedHives.c)
 *     HvFoldBackUnreconciledData @ 0x140A20D9C (HvFoldBackUnreconciledData.c)
 *     HvpApplyLegacyLogFile @ 0x140A2A4BC (HvpApplyLegacyLogFile.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // r9d
  unsigned int *Buffer; // rax
  unsigned int v3; // r10d
  unsigned int SizeOfBitMap; // ebp
  unsigned int v5; // esi
  int v6; // ebx
  unsigned int v7; // r11d
  unsigned int v8; // r8d
  int v9; // r10d
  int v10; // edi
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  int i; // ebx
  char v14; // dl
  unsigned int v15; // ecx
  __int64 v16; // r10
  unsigned __int64 v17; // r8
  char v19; // dl

  v1 = 0;
  Buffer = BitMapHeader->Buffer;
  v3 = BitMapHeader->SizeOfBitMap >> 3;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = BitMapHeader->SizeOfBitMap & 7;
  v6 = (unsigned __int8)Buffer & 7;
  v7 = v3 + (v5 != 0);
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) > (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v8 = v3 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v10 = 0;
    v11 = 0;
  }
  else
  {
    v8 = 8 - v6;
    v9 = ((_BYTE)v3 - (8 - (_BYTE)v6)) & 7;
    v10 = v9 + 1;
    if ( !v5 )
      v10 = v9;
    v11 = v7 - v10 - v8;
  }
  v12 = v7 - 1;
  for ( i = 0; v8; --v8 )
  {
    v14 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v12 && v5 )
      v14 &= byte_140018F80[SizeOfBitMap & 7];
    ++i;
    v1 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v14);
  }
  if ( v11 )
  {
    v15 = ((v11 - 1) >> 3) + 1;
    v16 = v15;
    i += 8 * v15;
    do
    {
      v17 = *(_QWORD *)Buffer;
      Buffer += 2;
      v1 += (unsigned int)((0x101010101010101LL
                          * ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v16;
    }
    while ( v16 );
  }
  for ( ; v10; --v10 )
  {
    v19 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v12 && v5 )
      v19 &= byte_140018F80[SizeOfBitMap & 7];
    ++i;
    v1 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v19);
  }
  return v1;
}
