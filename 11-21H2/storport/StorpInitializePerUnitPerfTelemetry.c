/*
 * XREFs of StorpInitializePerUnitPerfTelemetry @ 0x1C00873B0
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C001EC20 (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1C0022938 (StorpUninitializePerUnitPerfTelemetry.c)
 *     McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer @ 0x1C005D3E8 (McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer.c)
 *     StorpInitializePerUnitIoSizeDistribution @ 0x1C0090064 (StorpInitializePerUnitIoSizeDistribution.c)
 */

__int64 __fastcall StorpInitializePerUnitPerfTelemetry(__int64 a1)
{
  unsigned int v1; // edi
  __int64 Pool; // rax
  __int64 v4; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // r9
  bool v7; // zf
  int v9; // ecx
  __int64 v10; // [rsp+78h] [rbp-50h]

  v1 = 0;
  *(_QWORD *)(a1 + 2248) = 0LL;
  *(_QWORD *)(a1 + 2272) = 0LL;
  *(_QWORD *)(a1 + 2256) = 0LL;
  *(_QWORD *)(a1 + 2280) = 0LL;
  *(_QWORD *)(a1 + 2288) = 0LL;
  *(_QWORD *)(a1 + 2320) = 0LL;
  *(_QWORD *)(a1 + 2328) = 0LL;
  *(_QWORD *)(a1 + 3200) = 0LL;
  *(_QWORD *)(a1 + 3208) = 0LL;
  *(_QWORD *)(a1 + 2168) = 0LL;
  *(_QWORD *)(a1 + 2176) = 0LL;
  *(_QWORD *)(a1 + 2184) = 0LL;
  *(_QWORD *)(a1 + 2192) = 0LL;
  *(_QWORD *)(a1 + 2200) = 0LL;
  *(_QWORD *)(a1 + 2208) = 0LL;
  *(_QWORD *)(a1 + 2216) = 0LL;
  *(_QWORD *)(a1 + 2224) = 0LL;
  *(_QWORD *)(a1 + 2232) = 0LL;
  *(_DWORD *)(a1 + 2240) = 0;
  if ( (_DWORD)Size && g_RaidNumberProcessors )
  {
    Pool = RaidAllocatePool(72LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 2248) = Pool;
    if ( Pool
      && (v4 = RaidAllocatePool(72LL, (unsigned int)dword_1C00797D8, 1700028754LL, *(_QWORD *)(a1 + 8)),
          (*(_QWORD *)(a1 + 2272) = v4) != 0LL) )
    {
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v6 = *(_QWORD *)(a1 + 8);
      *(LARGE_INTEGER *)(a1 + 2264) = PerformanceCounter;
      *(_QWORD *)(a1 + 2288) = RaidAllocatePool(72LL, (unsigned int)dword_1C00797F4, 1700028754LL, v6);
      v7 = g_StorpTraceLoggingIoSizeDistributionEnabled == 0;
      *(_OWORD *)(a1 + 2296) = 0LL;
      *(_QWORD *)(a1 + 2312) = 0LL;
      if ( !v7 )
      {
        v9 = StorpInitializePerUnitIoSizeDistribution(a1);
        if ( v9 )
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
              *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4592LL),
              (const char *)(a1 + 160),
              (const char *)(a1 + 169),
              (const char *)(a1 + 186),
              *(_BYTE *)(a1 + 450) & 1,
              L"Initializing IO size distribution telemetry failed.",
              v10,
              v9);
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      v1 = -1073741801;
      StorpUninitializePerUnitPerfTelemetry((_QWORD *)a1);
    }
  }
  return v1;
}
