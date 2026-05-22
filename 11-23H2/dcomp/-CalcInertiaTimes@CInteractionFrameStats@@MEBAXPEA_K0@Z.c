/*
 * XREFs of ?CalcInertiaTimes@CInteractionFrameStats@@MEBAXPEA_K0@Z @ 0x1801A5460
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180003910 (-FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TAR.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall CInteractionFrameStats::CalcInertiaTimes(
        CInteractionFrameStats *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbx
  struct tagCOMPOSITION_FRAME_STATS *v5; // rdx
  unsigned __int64 v8; // rsi
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]

  v3 = 0LL;
  v5 = (struct tagCOMPOSITION_FRAME_STATS *)*((_QWORD *)this + 48);
  v8 = 0LL;
  if ( v5 && *((_QWORD *)this + 15) )
  {
    v10 = 0LL;
    v9 = 0LL;
    if ( CCompFrameStats::FrameTargetData(this, v5, (struct tagCOMPOSITION_FRAME_STATS *)&v9, 0LL, 0LL) )
      v8 = v9;
    if ( CCompFrameStats::FrameTargetData(
           this,
           *((struct tagCOMPOSITION_FRAME_STATS **)this + 15),
           (struct tagCOMPOSITION_FRAME_STATS *)&v9,
           0LL,
           0LL) )
    {
      v3 = v9 + v10;
    }
  }
  *a2 = v8;
  *a3 = v3;
}
