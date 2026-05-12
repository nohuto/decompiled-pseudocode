/*
 * XREFs of StorpTelemetrySendUnitDeviceStatistics @ 0x1C0001310
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0015840 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C0001424 (StorpTelemetryDeviceStatisticsCommand.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer @ 0x1C005CAC8 (McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C00608A8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0060D80 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 */

void __fastcall StorpTelemetrySendUnitDeviceStatistics(__int64 a1)
{
  int v1; // eax
  const int *v3; // rdi
  __int64 Pool; // rax
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r8
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  const int *v12; // rax
  __int64 v13; // [rsp+100h] [rbp-80h] BYREF
  void *v14; // [rsp+108h] [rbp-78h]
  void *v15; // [rsp+110h] [rbp-70h]
  void *v16; // [rsp+118h] [rbp-68h]
  void *v17; // [rsp+120h] [rbp-60h]
  void *v18; // [rsp+128h] [rbp-58h]
  void *v19; // [rsp+130h] [rbp-50h]
  void *v20; // [rsp+138h] [rbp-48h]
  __int128 v21; // [rsp+140h] [rbp-40h]
  PVOID P; // [rsp+1B8h] [rbp+38h]

  v1 = *(_DWORD *)(a1 + 1992);
  v21 = 0LL;
  v3 = 0LL;
  if ( (v1 & 4) != 0 )
    return;
  Pool = RaidAllocatePool(256LL, 4096LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  P = (PVOID)Pool;
  if ( !Pool )
    return;
  v13 = Pool;
  v14 = (void *)(Pool + 512);
  v15 = (void *)(Pool + 1024);
  v16 = (void *)(Pool + 1536);
  v17 = (void *)(Pool + 2048);
  v18 = (void *)(Pool + 2560);
  v19 = (void *)(Pool + 3072);
  v20 = (void *)(Pool + 3584);
  v5 = StorpTelemetryDeviceStatisticsCommand(a1, Pool, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 != -1073741670 )
    {
      v6 = *(_DWORD *)(a1 + 1992);
      if ( (v6 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v6 | 4;
    }
    goto LABEL_7;
  }
  if ( *(_BYTE *)(v13 + 8) <= 1u )
    goto LABEL_7;
  v7 = 0;
  while ( v7 <= 7 )
  {
    v8 = *(unsigned __int8 *)(v7 + v13 + 9);
    switch ( *(_BYTE *)(v7 + v13 + 9) )
    {
      case 1:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v14, v8) >= 0 )
        {
          LOWORD(v21) = 88;
          break;
        }
        v9 = v14;
        goto LABEL_39;
      case 2:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v15, v8) < 0 )
        {
          v9 = v15;
          goto LABEL_39;
        }
        WORD1(v21) = 24;
        break;
      case 3:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v16, v8) < 0 )
        {
          v9 = v16;
          goto LABEL_39;
        }
        WORD2(v21) = 72;
        break;
      case 4:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v17, v8) < 0 )
        {
          v9 = v17;
          goto LABEL_39;
        }
        WORD3(v21) = 24;
        break;
      case 5:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v18, v8) < 0 )
        {
          v9 = v18;
          goto LABEL_39;
        }
        WORD4(v21) = 112;
        break;
      case 6:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v19, v8) < 0 )
        {
          v9 = v19;
          goto LABEL_39;
        }
        WORD5(v21) = 32;
        break;
      case 7:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v20, v8) < 0 )
        {
          v9 = v20;
LABEL_39:
          memset(v9, 0, 0x200uLL);
          break;
        }
        WORD6(v21) = 16;
        break;
    }
    if ( ++v7 >= *(unsigned __int8 *)(v13 + 8) )
      break;
  }
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    goto LABEL_53;
  }
  if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( *(_BYTE *)(a1 + 1996) )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( g_StorpTraceLoggingCriticalEventEnabled )
    StorpTelemetryLogUnitDeviceStatisticsMeasures(a1, &v13);
  else
LABEL_53:
    StorpTelemetryLogUnitDeviceStatisticsCriticalData(a1, &v13);
  v10 = *(_QWORD *)(a1 + 152);
  if ( v10 )
  {
    v3 = (const int *)(v10 + 90);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 144);
    if ( v11 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) != 0 )
      v3 = (const int *)(v11 + 41);
  }
  if ( (byte_1C00799E4 & 0x40) != 0 )
  {
    v12 = &dword_1C006A660;
    if ( v3 )
      v12 = v3;
    McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer(
      *(_QWORD *)(a1 + 24),
      a1,
      WORD4(v21),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      *(_QWORD *)(a1 + 24) + 4936LL,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4592LL),
      a1 + 160,
      a1 + 169,
      a1 + 186,
      (__int64)v12,
      *(_BYTE *)(a1 + 450) & 1);
  }
LABEL_7:
  ExFreePoolWithTag(P, 0x65546152u);
}
