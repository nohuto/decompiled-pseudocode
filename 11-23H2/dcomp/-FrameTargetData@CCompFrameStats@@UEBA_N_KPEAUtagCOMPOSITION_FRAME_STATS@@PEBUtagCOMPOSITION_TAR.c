/*
 * XREFs of ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180003910
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 *     ?FrameTargetData@CTouchFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801A4050 (-FrameTargetData@CTouchFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TA.c)
 *     ?CalcInertiaTimes@CInteractionFrameStats@@MEBAXPEA_K0@Z @ 0x1801A5460 (-CalcInertiaTimes@CInteractionFrameStats@@MEBAXPEA_K0@Z.c)
 *     ?CalcInteractionTimes@CInteractionFrameStats@@MEBAXPEA_K0@Z @ 0x1801A5520 (-CalcInteractionTimes@CInteractionFrameStats@@MEBAXPEA_K0@Z.c)
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180003A68 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

char __fastcall CCompFrameStats::FrameTargetData(
        CCompFrameStats *this,
        struct tagCOMPOSITION_FRAME_STATS *a2,
        struct tagCOMPOSITION_FRAME_STATS *a3,
        const struct tagCOMPOSITION_TARGET_ID *a4,
        struct tagCOMPOSITION_TARGET_STATS *a5)
{
  bool v5; // r14
  char v9; // si
  struct _RTL_CRITICAL_SECTION *v10; // r13
  __int64 v11; // r9
  __int64 v12; // r10
  char v13; // di
  struct tagCOMPOSITION_FRAME_STATS *v14; // r11
  int Statistics; // eax
  int TargetStatistics; // eax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  char v21; // [rsp+30h] [rbp-61h]
  struct tagCOMPOSITION_FRAME_STATS *v22; // [rsp+38h] [rbp-59h] BYREF
  _OWORD v23[4]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v24; // [rsp+80h] [rbp-11h]

  v21 = 0;
  v5 = a4 == 0LL;
  v22 = a3;
  v9 = 1;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 14) && (unsigned __int64)a2 <= *((_QWORD *)this + 15) )
  {
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
    v11 = *((_QWORD *)this + 17);
    v12 = *((_QWORD *)this + 18);
    v13 = v5;
    if ( v11 != v12 )
    {
      v14 = v22;
      do
      {
        if ( a2 == *(struct tagCOMPOSITION_FRAME_STATS **)v11 )
        {
          v21 = 1;
          *(_OWORD *)v14 = *(_OWORD *)(v11 + 8);
          *((_QWORD *)v14 + 2) = *(_QWORD *)(v11 + 24);
          if ( a4 && (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(a4, v11 + 32) )
          {
            if ( a5 )
            {
              *(_OWORD *)a5 = *(_OWORD *)(v11 + 64);
              *((_OWORD *)a5 + 1) = *(_OWORD *)(v11 + 80);
              *((_OWORD *)a5 + 2) = *(_OWORD *)(v11 + 96);
              *((_OWORD *)a5 + 3) = *(_OWORD *)(v11 + 112);
              *((_QWORD *)a5 + 8) = *(_QWORD *)(v11 + 128);
            }
            v13 = 1;
          }
        }
        else if ( (unsigned __int64)a2 < *(_QWORD *)v11 )
        {
          break;
        }
        v11 += 136LL;
      }
      while ( v11 != v12 );
    }
    LeaveCriticalSection(v10);
    if ( !v21 )
      return 0;
    goto LABEL_9;
  }
  v22 = a2;
  Statistics = NtDCompositionGetStatistics(&v22, a3, 0LL, 0LL, 0LL);
  if ( (int)DirectComposition::CDevice::HRESULTFromNTSTATUS(Statistics) < 0 )
    return 0;
  v13 = v5;
  if ( !a4
    || (memset_0(v23, 0, 0x48uLL),
        v22 = a2,
        TargetStatistics = NtDCompositionGetTargetStatistics(&v22, a4, v23),
        (int)DirectComposition::CDevice::HRESULTFromNTSTATUS(TargetStatistics) < 0) )
  {
LABEL_9:
    if ( v13 )
      return v9;
    return 0;
  }
  if ( a5 )
  {
    v18 = v23[1];
    *(_OWORD *)a5 = v23[0];
    v19 = v23[2];
    *((_OWORD *)a5 + 1) = v18;
    v20 = v23[3];
    *((_OWORD *)a5 + 2) = v19;
    *(_QWORD *)&v19 = v24;
    *((_OWORD *)a5 + 3) = v20;
    *((_QWORD *)a5 + 8) = v19;
  }
  return v9;
}
