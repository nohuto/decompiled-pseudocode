/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1C001CB64
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C001B5D8 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer @ 0x1C006B108 (McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C006FC44 (StorpTelemetryLogUnitQosDataMeasures.c)
 */

__int64 __fastcall StorpTelemetrySendUnitQos(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  bool v6; // zf
  __int64 v8; // r9
  __int64 v9; // [rsp+B0h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+B8h] [rbp-10h]

  v9 = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 5284);
    LODWORD(v9) = v3;
  }
  else
  {
    LOBYTE(v3) = v9;
  }
  v4 = *(_QWORD *)(a1 + 3320);
  v5 = v4 / 0x989680;
  if ( v4 >= 0x98968000 )
    v5 = 255LL;
  v6 = *(_QWORD *)(a1 + 2168) == 0LL;
  v10 = v5;
  if ( !v6 || *(_QWORD *)(a1 + 2176) || *(_DWORD *)(a1 + 2184) || (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || g_StorpTraceLoggingCriticalEventEnabled)
      && g_StorpTraceLoggingCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      if ( (*(_DWORD *)(a1 + 2040) & 0x20) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( *(_BYTE *)(a1 + 2044) )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
    }
    StorpTelemetryLogUnitQosDataMeasures(a1, &v9);
    if ( (byte_1C0092A04 & 8) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer(
        a1 + 186,
        a1 + 169,
        a1 + 160,
        *(_QWORD *)(v8 + 4656),
        *(_DWORD *)(v8 + 56),
        v8 + 5000,
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 2024,
        a1 + 160,
        a1 + 169,
        a1 + 186,
        *(_QWORD *)(a1 + 2152),
        *(_QWORD *)(a1 + 2160),
        v10,
        *(_QWORD *)(a1 + 2176),
        *(_QWORD *)(a1 + 2168),
        *(_DWORD *)(a1 + 2184),
        *(_DWORD *)(a1 + 2188),
        v3);
    }
  }
  *(_QWORD *)(a1 + 2152) = 0LL;
  *(_QWORD *)(a1 + 2160) = 0LL;
  *(_QWORD *)(a1 + 2168) = 0LL;
  *(_QWORD *)(a1 + 2176) = 0LL;
  *(_DWORD *)(a1 + 2188) = 0;
  return 0LL;
}
