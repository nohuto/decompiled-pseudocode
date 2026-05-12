/*
 * XREFs of StorpTelemetrySendUnitDeviceStatistics @ 0x1C00715F4
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0020820 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer @ 0x1C0069B38 (McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer.c)
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C006DD74 (StorpTelemetryDeviceStatisticsCommand.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C006EC10 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C006F0E8 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 */

void __fastcall StorpTelemetrySendUnitDeviceStatistics(__int64 a1)
{
  const char *v2; // rdi
  __int64 Pool; // rax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r8
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  const char *v12; // rax
  int v13; // [rsp+78h] [rbp-108h]
  __int64 v14; // [rsp+100h] [rbp-80h]
  void *v15; // [rsp+108h] [rbp-78h]
  __int64 v16; // [rsp+110h] [rbp-70h]
  __int64 v17; // [rsp+118h] [rbp-68h]
  __int64 v18; // [rsp+120h] [rbp-60h]
  __int64 v19; // [rsp+128h] [rbp-58h]
  __int64 v20; // [rsp+130h] [rbp-50h]
  __int64 v21; // [rsp+138h] [rbp-48h]
  __int128 v22; // [rsp+140h] [rbp-40h]
  PVOID P; // [rsp+1B8h] [rbp+38h]

  v22 = 0LL;
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 2040) & 4) != 0 )
    return;
  Pool = RaidAllocatePool(256LL, 4096LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  P = (PVOID)Pool;
  if ( !Pool )
    return;
  v14 = Pool;
  v15 = (void *)(Pool + 512);
  v16 = Pool + 1024;
  v17 = Pool + 1536;
  v18 = Pool + 2048;
  v19 = Pool + 2560;
  v20 = Pool + 3072;
  v21 = Pool + 3584;
  v4 = StorpTelemetryDeviceStatisticsCommand(a1, Pool, 0LL);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741670 )
    {
      v5 = *(_DWORD *)(a1 + 2040);
      if ( (v5 & 1) == 0 )
        *(_DWORD *)(a1 + 2040) = v5 | 4;
    }
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v14 + 8) <= 1u )
    goto LABEL_61;
  v6 = 0;
  while ( v6 <= 7 )
  {
    v7 = *(unsigned __int8 *)(v6 + v14 + 9);
    switch ( *(_BYTE *)(v6 + v14 + 9) )
    {
      case 1:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)v15, v7) >= 0 )
        {
          LOWORD(v22) = 88;
          break;
        }
        v8 = v15;
        goto LABEL_37;
      case 2:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v16, v7) < 0 )
        {
          v8 = (void *)v16;
          goto LABEL_37;
        }
        WORD1(v22) = 24;
        break;
      case 3:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v17, v7) < 0 )
        {
          v8 = (void *)v17;
          goto LABEL_37;
        }
        WORD2(v22) = 72;
        break;
      case 4:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v18, v7) < 0 )
        {
          v8 = (void *)v18;
          goto LABEL_37;
        }
        WORD3(v22) = 24;
        break;
      case 5:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v19, v7) < 0 )
        {
          v8 = (void *)v19;
          goto LABEL_37;
        }
        WORD4(v22) = 112;
        break;
      case 6:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v20, v7) < 0 )
        {
          v8 = (void *)v20;
          goto LABEL_37;
        }
        WORD5(v22) = 32;
        break;
      case 7:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v21, v7) < 0 )
        {
          v8 = (void *)v21;
LABEL_37:
          memset_0(v8, 0, 0x200uLL);
          break;
        }
        WORD6(v22) = 16;
        break;
    }
    if ( ++v6 >= *(unsigned __int8 *)(v14 + 8) )
      break;
  }
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(a1 + 2040) & 0x20) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( *(_BYTE *)(a1 + 2044) )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( g_StorpTraceLoggingCriticalEventEnabled )
    StorpTelemetryLogUnitDeviceStatisticsMeasures(a1);
  else
LABEL_51:
    StorpTelemetryLogUnitDeviceStatisticsCriticalData(a1);
  v9 = *(_QWORD *)(a1 + 152);
  if ( v9 )
  {
    v2 = (const char *)(v9 + 90);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 144);
    if ( v10 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) != 0 )
      v2 = (const char *)(v10 + 41);
  }
  if ( byte_1C0092A04 < 0 )
  {
    v12 = (const char *)&dword_1C0081784;
    if ( v2 )
      v12 = v2;
    v11 = *(_QWORD *)(a1 + 24);
    McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer(
      v11,
      a1,
      WORD4(v22),
      *(_DWORD *)(v11 + 56),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 2024,
      v11 + 5000,
      *(const wchar_t **)(v11 + 4656),
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      v12,
      *(_BYTE *)(a1 + 450) & 1,
      v13,
      *(_WORD *)v14,
      (unsigned __int16)v22,
      (__int64)v15,
      WORD1(v22),
      v16,
      WORD2(v22),
      v17,
      WORD3(v22),
      v18,
      WORD4(v22),
      v19,
      WORD5(v22),
      v20,
      WORD6(v22),
      v21);
  }
LABEL_61:
  ExFreePoolWithTag(P, 0x65546152u);
}
