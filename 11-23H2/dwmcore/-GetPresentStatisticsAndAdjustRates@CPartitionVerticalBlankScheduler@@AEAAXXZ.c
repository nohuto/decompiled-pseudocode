/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180046D40
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800468C0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?Update@?$LinearFitT@$0BAA@@@QEAA_N_J0@Z @ 0x1800461B8 (-Update@-$LinearFitT@$0BAA@@@QEAA_N_J0@Z.c)
 *     ?CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z @ 0x1800462EC (-CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z.c)
 *     ?TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ @ 0x180049BC0 (-TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ.c)
 *     ?SetNominalRefreshPeriod@CRateInfo@@QEAAX_K@Z @ 0x180049BE4 (-SetNominalRefreshPeriod@CRateInfo@@QEAAX_K@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18004AEE0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1800C0938 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C097C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     floor_0 @ 0x18011B59C (floor_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x18012DC60 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?ComputeAverage@?$LinearFitT@$0BAA@@@QEBANXZ @ 0x18012E4C6 (-ComputeAverage@-$LinearFitT@$0BAA@@@QEBANXZ.c)
 *     McTemplateU0xxxiid_EventWriteTransfer @ 0x18012E7C0 (McTemplateU0xxxiid_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CPartitionVerticalBlankScheduler *this)
{
  _OWORD *v2; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm0
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  struct IMonitorTarget *v6; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // r14
  double v15; // xmm6_8
  __int64 v16; // rax
  __int64 v17; // rcx
  double v18; // xmm0_8
  int v19; // r15d
  __int64 v20; // rcx
  char v21; // bl
  __int64 v22; // r12
  __int64 v23; // rdx
  struct CFrameInfo *v24; // rdx
  unsigned __int64 v25; // rax
  double v26; // xmm0_8
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rax
  double v29; // xmm0_8
  char v30; // r8
  int v31; // r9d
  int v32; // r10d
  double v33; // xmm0_8
  double v34; // xmm4_8
  int v35; // eax
  double v36; // xmm5_8
  double v37; // xmm0_8
  int v38; // ecx
  char *v39; // [rsp+20h] [rbp-98h]
  __int128 v40; // [rsp+40h] [rbp-78h] BYREF
  __int128 v41; // [rsp+50h] [rbp-68h]
  __int128 v42; // [rsp+60h] [rbp-58h]
  char v43; // [rsp+70h] [rbp-48h] BYREF

  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v39 = &v43;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
  }
  v2 = (_OWORD *)*((_QWORD *)this + 527);
  v3 = *((_QWORD *)this + 526);
  *(_OWORD *)(v3 + 112) = v2[7];
  *(_OWORD *)(v3 + 128) = v2[8];
  v4 = v2[9];
  *(_BYTE *)(v3 + 172) = 0;
  *(_OWORD *)(v3 + 144) = v4;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8)
                                                                                                + 216LL));
  v6 = PrimaryMonitorTarget;
  if ( PrimaryMonitorTarget )
  {
    v7 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, __int128 *))(*(_QWORD *)PrimaryMonitorTarget + 136LL))(
           PrimaryMonitorTarget,
           &v40);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1803569D0, 3u, v7, 0x303u, 0LL);
    }
    else if ( v7 != 142213121 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v6 + 88LL))(v6);
      v10 = *((_QWORD *)this + 526);
      v11 = v9;
      *(_OWORD *)(v10 + 112) = v40;
      *(_OWORD *)(v10 + 128) = v41;
      v12 = v42;
      *(_BYTE *)(v10 + 172) = 1;
      *(_OWORD *)(v10 + 144) = v12;
      LOBYTE(v13) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
        v13);
      v14 = *((_QWORD *)&v41 + 1);
      if ( *((_BYTE *)this + 4552) && v11 )
      {
        if ( (v11 & 0x8000000000000000uLL) != 0LL )
          v15 = (double)(int)(v11 & 1 | (v11 >> 1)) + (double)(int)(v11 & 1 | (v11 >> 1));
        else
          v15 = (double)(int)v11;
        v16 = *((_QWORD *)this + 1170);
        if ( *(double *)(v16 + 32) != v15 )
        {
          *(double *)(v16 + 32) = v15;
          LinearFitT<256>::Reset(*((_QWORD *)this + 1170));
          v14 = *((_QWORD *)&v41 + 1);
        }
        v17 = *((_QWORD *)this + 527);
        if ( *(_BYTE *)(v17 + 172)
          && (unsigned int)(int)((double)((int)v14 - *(_DWORD *)(v17 + 136)) / v15 + 0.5) >= 5uLL )
        {
          LinearFitT<256>::Reset(*((_QWORD *)this + 1170));
          v14 = *((_QWORD *)&v41 + 1);
        }
        v18 = (double)(int)v14 / v15 + 0.5;
        v19 = (int)v18;
        LinearFitT<256>::Update(*((_QWORD *)this + 1170), (unsigned int)(int)v18, v14);
        v21 = Microsoft_Windows_Dwm_CoreEnableBits;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
        {
          McTemplateU0xx_EventWriteTransfer(
            v20,
            &EVTDESC_SCHEDULE_VSYNC_QPC_SMOOTHING_UPDATE,
            (unsigned int)(int)v18,
            *((_QWORD *)&v41 + 1));
          v21 = Microsoft_Windows_Dwm_CoreEnableBits;
        }
        v22 = *((_QWORD *)this + 1170);
        v14 = (unsigned int)(int)floor_0(
                                   (double)(v19 - *(_DWORD *)(v22 + 40)) * *(double *)(v22 + 24)
                                 + (double)(int)*(_QWORD *)(v22 + 48)
                                 + *(double *)(v22 + 16)
                                 + 0.5);
        if ( (v21 & 1) != 0 )
        {
          v25 = 0LL;
          v26 = (double)SDWORD2(v41) / (double)(int)g_qpcFrequency.LowPart * 10000000.0;
          if ( v26 >= 9.223372036854776e18 )
          {
            v26 = v26 - 9.223372036854776e18;
            if ( v26 < 9.223372036854776e18 )
              v25 = 0x8000000000000000uLL;
          }
          v27 = v25 + (unsigned int)(int)v26;
          v28 = 0LL;
          v29 = (double)(int)v14 / (double)(int)g_qpcFrequency.LowPart * 10000000.0;
          if ( v29 >= 9.223372036854776e18 )
          {
            v29 = v29 - 9.223372036854776e18;
            if ( v29 < 9.223372036854776e18 )
              v28 = 0x8000000000000000uLL;
          }
          v33 = LinearFitT<256>::ComputeAverage(v22, v23, v28 + (unsigned int)(int)v29, v27, v39);
          v35 = 0;
          v37 = v33 / v34 * v36;
          if ( v37 >= 9.223372036854776e18 )
          {
            v37 = v37 - 9.223372036854776e18;
            if ( v37 < 9.223372036854776e18 )
              v35 = v32;
          }
          v38 = 256;
          if ( *(_DWORD *)(v22 + 8) < 0x100u )
            v38 = *(_DWORD *)(v22 + 8);
          McTemplateU0xxxiid_EventWriteTransfer(v38, v35 + (int)v37, v19, v31, v30, v30 - v31, v35 + (int)v37, v38);
        }
      }
      *(_QWORD *)(*((_QWORD *)this + 526) + 160LL) = v14;
      CRateInfo::SetNominalRefreshPeriod((CRateInfo *)(*((_QWORD *)this + 526) + 232LL), v11);
      CScheduleFrameInfoVolatileData::TracePresentStats(*((CScheduleFrameInfoVolatileData **)this + 526));
      v24 = (struct CFrameInfo *)*((_QWORD *)this + 527);
      if ( *((_BYTE *)v24 + 172) && !*((_BYTE *)this + 4548) )
        CRateInfo::CalculateEffectiveRefreshRate(
          (CRateInfo *)(*((_QWORD *)this + 526) + 232LL),
          v24,
          *((struct CFrameInfo **)this + 526));
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
}
