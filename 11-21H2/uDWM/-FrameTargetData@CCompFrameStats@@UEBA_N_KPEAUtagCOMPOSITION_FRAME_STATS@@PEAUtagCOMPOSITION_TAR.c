/*
 * XREFs of ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180008E80
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 *     ?FrameTargetData@CAnimationFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x18010A930 (-FrameTargetData@CAnimationFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITIO.c)
 * Callees:
 *     ?_DCompositionGetTargetStatistics@CCompFrameStats@@CAJ_KPEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180002C84 (-_DCompositionGetTargetStatistics@CCompFrameStats@@CAJ_KPEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOM.c)
 *     ?_DCompositionGetStatistics@CCompFrameStats@@CAJ_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x180002CEC (-_DCompositionGetStatistics@CCompFrameStats@@CAJ_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOS.c)
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180009750 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

char __fastcall CCompFrameStats::FrameTargetData(
        CCompFrameStats *this,
        unsigned __int64 a2,
        struct tagCOMPOSITION_FRAME_STATS *a3,
        struct tagCOMPOSITION_TARGET_ID *a4,
        struct tagCOMPOSITION_TARGET_STATS *a5)
{
  bool v6; // bp
  char v10; // r14
  struct _RTL_CRITICAL_SECTION *v11; // r12
  __int64 v12; // r9
  __int64 v13; // r10
  char v14; // di
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  char v19; // [rsp+30h] [rbp-B8h]
  _OWORD v20[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+80h] [rbp-68h]

  v19 = 0;
  v6 = a4 == 0LL;
  v10 = 1;
  if ( a2 >= *((_QWORD *)this + 11) && a2 <= *((_QWORD *)this + 12) )
  {
    v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v12 = *((_QWORD *)this + 14);
    v13 = *((_QWORD *)this + 15);
    v14 = v6;
    while ( v12 != v13 )
    {
      if ( a2 == *(_QWORD *)v12 )
      {
        v19 = 1;
        *(_OWORD *)a3 = *(_OWORD *)(v12 + 8);
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v12 + 24);
        if ( a4 && (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(a4, v12 + 32) )
        {
          if ( a5 )
          {
            *(_OWORD *)a5 = *(_OWORD *)(v12 + 64);
            *((_OWORD *)a5 + 1) = *(_OWORD *)(v12 + 80);
            *((_OWORD *)a5 + 2) = *(_OWORD *)(v12 + 96);
            *((_OWORD *)a5 + 3) = *(_OWORD *)(v12 + 112);
            *((_QWORD *)a5 + 8) = *(_QWORD *)(v12 + 128);
          }
          v14 = 1;
        }
      }
      else if ( a2 < *(_QWORD *)v12 )
      {
        break;
      }
      v12 += 136LL;
    }
    LeaveCriticalSection(v11);
    if ( !v19 )
      return 0;
    goto LABEL_14;
  }
  if ( (int)CCompFrameStats::_DCompositionGetStatistics(a2, a3, 0, 0LL, 0LL) < 0 )
    return 0;
  v14 = v6;
  if ( !a4
    || (memset_0(v20, 0, 0x48uLL),
        (int)CCompFrameStats::_DCompositionGetTargetStatistics(a2, a4, (struct tagCOMPOSITION_TARGET_STATS *)v20) < 0) )
  {
LABEL_14:
    if ( v14 )
      return v10;
    return 0;
  }
  if ( a5 )
  {
    v16 = v20[1];
    *(_OWORD *)a5 = v20[0];
    v17 = v20[2];
    *((_OWORD *)a5 + 1) = v16;
    v18 = v20[3];
    *((_OWORD *)a5 + 2) = v17;
    *(_QWORD *)&v17 = v21;
    *((_OWORD *)a5 + 3) = v18;
    *((_QWORD *)a5 + 8) = v17;
  }
  return v10;
}
