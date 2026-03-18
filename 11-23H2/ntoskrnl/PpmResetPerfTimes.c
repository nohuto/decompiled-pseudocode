/*
 * XREFs of PpmResetPerfTimes @ 0x1403A70A0
 * Callers:
 *     PpmCheckProcessorInit @ 0x140381380 (PpmCheckProcessorInit.c)
 *     PpmCheckResetProcessors @ 0x14039325C (PpmCheckResetProcessors.c)
 *     PpmCheckReset @ 0x1403A7080 (PpmCheckReset.c)
 *     PpmResetPerfEngineForProcessor @ 0x14058D618 (PpmResetPerfEngineForProcessor.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x1402562D0 (PpmSnapPerformanceAccumulation.c)
 *     PpmResetPerformanceAccumulation @ 0x1403A717C (PpmResetPerformanceAccumulation.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405A0104 (PpmHvSnapPerformanceAccumulation.c)
 */

__int64 __fastcall PpmResetPerfTimes(__int64 a1)
{
  __int64 v1; // rdi
  _OWORD *v2; // rsi
  LARGE_INTEGER *v3; // rbp
  __int64 v4; // rbx
  void *v5; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_OWORD *)(v1 + 32);
    v3 = *(LARGE_INTEGER **)(v1 + 88);
    if ( *(_BYTE *)(a1 + 68) )
    {
      v4 = a1 - 33968;
      PpmResetPerformanceAccumulation(a1 - 33968);
      PpmSnapPerformanceAccumulation(v4, 1u, 0, 0, v1 + 32, v3);
    }
    else
    {
      PpmHvSnapPerformanceAccumulation(a1, 1, 0, v1 + 32, *(_QWORD *)(v1 + 88));
    }
    v5 = *(void **)(v1 + 216);
    *(_OWORD *)(v1 + 160) = *v2;
    *(_OWORD *)(v1 + 176) = *(_OWORD *)(v1 + 48);
    *(_OWORD *)(v1 + 192) = *(_OWORD *)(v1 + 64);
    *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 80);
    memmove(v5, v3, 112 * v3[6].LowPart + 56);
    *(_QWORD *)(v1 + 8) = *(_QWORD *)v2;
    *(_QWORD *)v1 = *(_QWORD *)(v1 + 40);
    *(_QWORD *)(v1 + 16) = *(_QWORD *)(v1 + 48);
    result = *(unsigned int *)(v1 + 80);
    *(_DWORD *)(v1 + 24) = result;
  }
  return result;
}
