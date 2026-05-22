/*
 * XREFs of ?IsMultiMon@CCompFrameStats@@UEBA_NXZ @ 0x18000B320
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 *     ?IsMultiMon@CAnimationFrameStats@@UEBA_NXZ @ 0x1801A40A0 (-IsMultiMon@CAnimationFrameStats@@UEBA_NXZ.c)
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

bool __fastcall CCompFrameStats::IsMultiMon(CCompFrameStats *this)
{
  int Statistics; // eax
  unsigned int v3; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-30h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  Statistics = NtDCompositionGetStatistics(&v4, &v5, 0LL, 0LL, &v3);
  return (int)DirectComposition::CDevice::HRESULTFromNTSTATUS(Statistics) >= 0 && v3 > 1;
}
