/*
 * XREFs of ?IsMultiMon@CCompFrameStats@@UEBA_NXZ @ 0x1800029B0
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 *     ?IsMultiMon@CAnimationFrameStats@@UEBA_NXZ @ 0x18010A940 (-IsMultiMon@CAnimationFrameStats@@UEBA_NXZ.c)
 * Callees:
 *     ?_DCompositionGetStatistics@CCompFrameStats@@CAJ_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x180002CEC (-_DCompositionGetStatistics@CCompFrameStats@@CAJ_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOS.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

bool __fastcall CCompFrameStats::IsMultiMon(CCompFrameStats *this)
{
  unsigned int v2; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+38h] [rbp-30h] BYREF
  __int64 v4; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  return (int)CCompFrameStats::_DCompositionGetStatistics(0LL, (struct tagCOMPOSITION_FRAME_STATS *)&v3, 0, 0LL, &v2) >= 0
      && v2 > 1;
}
