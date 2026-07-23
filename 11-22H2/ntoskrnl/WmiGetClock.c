/*
 * XREFs of WmiGetClock @ 0x1405FF7B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226E30 (RtlGetSystemTimePrecise.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 */

unsigned __int64 WmiGetClock()
{
  int v0; // edx
  __int64 v1; // rcx
  unsigned __int64 result; // rax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx

  v1 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  result = 0LL;
  if ( !v0 )
  {
    v7 = *(unsigned __int8 *)(v1 + 4233) - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return RtlGetSystemTimePrecise().QuadPart;
      if ( v8 == 1 )
        return __rdtsc();
    }
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  v3 = v0 - 1;
  if ( !v3 )
    return RtlGetSystemTimePrecise().QuadPart;
  v4 = v3 - 1;
  if ( !v4 )
    return KeQueryPerformanceCounter(0LL).QuadPart;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return RtlGetSystemTimePrecise().QuadPart;
      return __rdtsc();
    }
  }
  return result;
}
