/*
 * XREFs of ?CalcInteractionTimes@CInteractionFrameStats@@MEBAXPEA_K0@Z @ 0x1801A5520
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180003910 (-FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TAR.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall CInteractionFrameStats::CalcInteractionTimes(
        CInteractionFrameStats *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  struct tagCOMPOSITION_FRAME_STATS *v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]

  v4 = (struct tagCOMPOSITION_FRAME_STATS *)*((_QWORD *)this + 48);
  v5 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 30) + 16LL);
  if ( v4 )
  {
    v8 = 0LL;
    v9 = 0LL;
    if ( CCompFrameStats::FrameTargetData(this, v4, (struct tagCOMPOSITION_FRAME_STATS *)&v8, 0LL, 0LL) )
      v5 = v8;
  }
  else
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 31) - 208LL);
  }
  *a2 = v7 & -(__int64)(v7 < v5);
  *a3 = v5 & -(__int64)(v7 < v5);
}
