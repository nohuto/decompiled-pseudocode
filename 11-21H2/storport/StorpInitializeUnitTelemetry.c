/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x1C001EC20
 * Callers:
 *     RaidStartUnit @ 0x1C001EBDC (RaidStartUnit.c)
 * Callees:
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1C0022938 (StorpUninitializePerUnitPerfTelemetry.c)
 *     McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer @ 0x1C005D3E8 (McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x1C00873B0 (StorpInitializePerUnitPerfTelemetry.c)
 */

void __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  int v1; // edi
  bool v3; // zf

  v1 = 0;
  v3 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 2024) = 0LL;
  *(_QWORD *)(a1 + 2032) = 0LL;
  *(_QWORD *)(a1 + 2064) = 1LL;
  *(_QWORD *)(a1 + 2008) = 0LL;
  *(_QWORD *)(a1 + 2016) = 0LL;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_QWORD *)(a1 + 2048) = 0LL;
  *(_QWORD *)(a1 + 2056) = 0LL;
  *(_DWORD *)(a1 + 2072) = 0;
  *(_QWORD *)(a1 + 2080) = 0LL;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  if ( !v3 )
  {
    if ( (unsigned int)StorpInitializePerUnitPerfTelemetry() )
    {
      if ( (byte_1C00799E6 & 2) != 0 )
        McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer(
          a1 + 186,
          a1 + 169,
          a1 + 160,
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
          *(_BYTE *)(a1 + 450) & 1,
          (__int64)L"Initializing performance telemetry failed.");
      StorpUninitializePerUnitPerfTelemetry(a1);
    }
    else
    {
      v1 = 1;
    }
  }
  *(_DWORD *)(a1 + 2244) = v1;
}
