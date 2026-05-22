/*
 * XREFs of ?MeasureDurationinMS@LatencySampleStartData@@QEAAN_K@Z @ 0x18015523C
 * Callers:
 *     ?SampleRandomPickStart@InputServiceProxy@@AEAAXIIGGG_K@Z @ 0x180155414 (-SampleRandomPickStart@InputServiceProxy@@AEAAXIIGGG_K@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall LatencySampleStartData::MeasureDurationinMS(LatencySampleStartData *this, __int64 a2)
{
  __int64 v4; // rcx
  LARGE_INTEGER v6; // [rsp+30h] [rbp+8h] BYREF

  v6.QuadPart = 0LL;
  QueryPerformanceFrequency(&v6);
  v4 = 1000000 * (a2 - *((_QWORD *)this + 2));
  if ( v4 <= 0 || v6.QuadPart <= 0 )
    return 0.0;
  else
    return (double)(int)v4 / (double)(int)v6.LowPart / 1000.0;
}
