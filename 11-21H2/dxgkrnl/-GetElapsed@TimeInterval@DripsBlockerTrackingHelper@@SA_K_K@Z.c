/*
 * XREFs of ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C02FE840
 * Callers:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1C02FA9A8 (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02FAAA0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C02FED4C (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DripsBlockerTrackingHelper::TimeInterval::GetElapsed(__int64 a1)
{
  LARGE_INTEGER v1; // rcx
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  int v4; // ecx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v1.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - a1;
  if ( is_mul_ok(v1.QuadPart, 0x989680uLL) )
    return (unsigned __int64)v1.QuadPart
         * (unsigned __int128)0x989680uLL
         / (unsigned __int64)PerformanceFrequency.QuadPart;
  if ( !is_mul_ok(v1.QuadPart, 0x3E8uLL) )
    return 0LL;
  v3 = (unsigned __int64)v1.QuadPart * (unsigned __int128)0x3E8uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
  result = 10000 * v3;
  if ( is_mul_ok(v3, 0x2710uLL) )
  {
    v4 = 0;
  }
  else
  {
    result = -1LL;
    v4 = -1073741675;
  }
  if ( v4 < 0 )
    return 0LL;
  return result;
}
