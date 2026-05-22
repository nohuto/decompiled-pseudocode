/*
 * XREFs of ?IsWarp@CCompFrameStats@@SA_NXZ @ 0x180014BF4
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

bool CCompFrameStats::IsWarp(void)
{
  __int128 v1; // [rsp+20h] [rbp-58h] BYREF
  int v2; // [rsp+30h] [rbp-48h]
  _OWORD v3[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v4; // [rsp+58h] [rbp-20h]

  memset(v3, 0, sizeof(v3));
  v4 = 0LL;
  v2 = 0;
  v1 = 0LL;
  return (int)NtDCompositionGetFrameStatistics(v3, &v1) >= 0 && DWORD2(v1) != 0;
}
