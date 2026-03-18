/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800468C0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180046400 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180045D88 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x180046A78 (-FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180046B0C (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K0@Z @ 0x180046C30 (-Trace@CFrameInfo@@QEAAXK_K0@Z.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180046C84 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180046D40 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800C05C4 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800CACC8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(CPartitionVerticalBlankScheduler *this)
{
  unsigned int *v2; // r15
  char *v3; // rsi
  __int64 i; // rbp
  char *v5; // r14
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  unsigned int FirstOutstandingFrameIndex; // esi
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  CFrameInfo *v13; // rcx
  unsigned __int64 v14; // r8
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  bool v19; // [rsp+30h] [rbp-38h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
  if ( *((_BYTE *)this + 4548)
    && *((_BYTE *)this + 4549)
    && (v16 = CPartitionVerticalBlankScheduler::Reset(this), v8 = v16, v16 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x460u, 0LL);
    v5 = (char *)this + 4208;
    v2 = (unsigned int *)((char *)this + 4192);
  }
  else
  {
    v2 = (unsigned int *)((char *)this + 4192);
    v3 = (char *)this + 256 * (unsigned __int64)*((unsigned int *)this + 1048);
    memset_0(v3 + 96, 0, 0xB0uLL);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v3 + 74); i = (unsigned int)(i + 1) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v3 + 34) + 8 * i) + 40LL))(*(_QWORD *)(*((_QWORD *)v3 + 34) + 8 * i));
    *((_DWORD *)v3 + 74) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 272, 8LL);
    CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(this);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    v5 = (char *)this + 4208;
    *(_QWORD *)(*((_QWORD *)this + 526) + 72LL) = *((_QWORD *)this + 1166);
    v6 = CPartitionVerticalBlankScheduler::ComputeVSyncInfo(this);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x479u, 0LL);
    }
    else
    {
      v8 = 0;
      FirstOutstandingFrameIndex = CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(this);
      if ( FirstOutstandingFrameIndex == -1 )
      {
LABEL_10:
        *(_DWORD *)(*(_QWORD *)v5 + 32LL) = *(_DWORD *)(*((_QWORD *)this + 527) + 32LL) + 1;
      }
      else
      {
        while ( 1 )
        {
          v10 = CPartitionVerticalBlankScheduler::RetireFrame(
                  this,
                  (CPartitionVerticalBlankScheduler *)((char *)this
                                                     + 256 * (unsigned __int64)FirstOutstandingFrameIndex
                                                     + 96),
                  FirstOutstandingFrameIndex,
                  &v19,
                  0);
          v8 = v10;
          if ( v10 < 0 )
            break;
          FirstOutstandingFrameIndex = ((_BYTE)FirstOutstandingFrameIndex + 1) & 0xF;
          if ( !v19 || FirstOutstandingFrameIndex == *v2 )
            goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x5F5u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v8, 0x47Bu, 0LL);
      }
    }
  }
  v12 = *((_QWORD *)this + 527);
  v13 = *(CFrameInfo **)v5;
  if ( *(_QWORD *)(v12 + 64) )
    v14 = *((_QWORD *)v13 + 8) - *(_QWORD *)(v12 + 64);
  else
    v14 = *((_QWORD *)v13 + 30);
  CFrameInfo::Trace(v13, *v2, v14, *((_QWORD *)this + 528));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return v8;
}
