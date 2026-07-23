/*
 * XREFs of PnprGetMillisecondCounter @ 0x140A9C724
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1405636F0 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x140563DC0 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x140A9D174 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140A9D774 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x140A9DE0C (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x140A9DE8C (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  unsigned int v2; // edi
  LONGLONG v3; // rax
  __int128 v4; // rtt
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v4 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v4 / PerformanceFrequency.QuadPart;
  if ( !a1 )
    v2 = v3 + dword_140D1846C - dword_140D18468;
  dword_140D18468 = v3;
  result = v2;
  dword_140D1846C = v2;
  return result;
}
