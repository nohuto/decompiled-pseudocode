/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x1C002132C
 * Callers:
 *     RaidStartUnit @ 0x1C00212D8 (RaidStartUnit.c)
 * Callees:
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1C0021CA4 (StorpUninitializePerUnitPerfTelemetry.c)
 *     McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer @ 0x1C006A6B4 (McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x1C00A34A4 (StorpInitializePerUnitPerfTelemetry.c)
 */

__int64 __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  int v1; // esi
  bool v3; // zf
  __int64 result; // rax

  v1 = 0;
  v3 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 2048) = 0LL;
  *(_QWORD *)(a1 + 2072) = 0LL;
  *(_QWORD *)(a1 + 2080) = 0LL;
  *(_QWORD *)(a1 + 2112) = 1LL;
  *(_QWORD *)(a1 + 2056) = 0LL;
  *(_QWORD *)(a1 + 2064) = 0LL;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  *(_QWORD *)(a1 + 2104) = 0LL;
  *(_DWORD *)(a1 + 2120) = 0;
  *(_QWORD *)(a1 + 2128) = 0LL;
  *(_QWORD *)(a1 + 2136) = 0LL;
  *(_QWORD *)(a1 + 2144) = 0LL;
  if ( !v3 )
  {
    if ( (unsigned int)StorpInitializePerUnitPerfTelemetry() )
    {
      if ( (byte_1C0092A06 & 4) != 0 )
        McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer(
          a1 + 186,
          a1 + 169,
          a1 + 160,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          a1 + 2024,
          *(_QWORD *)(a1 + 24) + 5000LL,
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4656LL),
          a1 + 160,
          a1 + 169,
          a1 + 186,
          *(_BYTE *)(a1 + 450) & 1,
          (__int64)L"Initializing performance telemetry failed.");
      StorpUninitializePerUnitPerfTelemetry(a1);
    }
    else
    {
      v1 = 1;
    }
  }
  result = 2292LL;
  *(_DWORD *)(a1 + 2292) = v1;
  return result;
}
