/*
 * XREFs of ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180046400
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800458F8 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800465B8 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800468C0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x180047108 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180048C6C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18004953C (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1801F28D0 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x1801F2B18 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x18027BC90 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18027BEDC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ScheduleAndProcessFrame(CPartitionVerticalBlankScheduler *this)
{
  char *v1; // rbx
  HANDLE CurrentThread; // rax
  __int64 v4; // rsi
  int updated; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edi
  unsigned __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // ecx
  unsigned int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rcx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+D0h] [rbp-28h] BYREF

  v1 = (char *)this + 4640;
  if ( *((_BYTE *)this + 4648) && *((_BYTE *)this + 4649) )
  {
    v14 = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 4640));
    v23 = v14;
    if ( v1[10] )
    {
      if ( *(_DWORD *)v1 == -1 )
        *(_QWORD *)v1 = 0LL;
      *((_QWORD *)v1 + 4) = v14;
      *(_OWORD *)&v1[16 * *((unsigned int *)v1 + 1) + 40] = *(_OWORD *)(v1 + 24);
      v15 = *(_DWORD *)v1;
      v16 = *((_DWORD *)v1 + 1);
      if ( *(_DWORD *)v1 != v16 )
      {
        v17 = *(_DWORD *)v1;
        do
        {
          v18 = *(_QWORD *)&v1[16 * v17 + 40];
          if ( v18 >= *((_QWORD *)v1 + 4) - 10000000LL )
            break;
          *((_QWORD *)v1 + 2) += v18 - *(_QWORD *)&v1[16 * v17 + 48];
          *(_QWORD *)&v1[16 * v17 + 48] = 0LL;
          *(_QWORD *)&v1[16 * v17 + 40] = 0LL;
          v15 = (unsigned __int8)(*(_DWORD *)v1 + 1);
          *(_DWORD *)v1 = v15;
          v17 = v15;
          v16 = *((_DWORD *)v1 + 1);
        }
        while ( v15 != v16 );
      }
      v19 = *((_QWORD *)v1 + 2) + *(_QWORD *)&v1[16 * v16 + 48] - *(_QWORD *)&v1[16 * v16 + 40];
      v20 = (unsigned __int8)(v16 + 1);
      *((_QWORD *)v1 + 2) = v19;
      *((_DWORD *)v1 + 1) = v20;
      if ( v15 == v20 )
      {
        v21 = 2LL * v15;
        *((_QWORD *)v1 + 2) = v19 + *(_QWORD *)&v1[16 * v15 + 40] - *(_QWORD *)&v1[16 * v15 + 48];
        *(_QWORD *)&v1[8 * v21 + 48] = 0LL;
        *(_QWORD *)&v1[8 * v21 + 40] = 0LL;
        *(_DWORD *)v1 = (unsigned __int8)(*v1 + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CDebugFrameCounter *)v1, &v23);
  }
  CPartitionVerticalBlankScheduler::WaitForWork(this);
  CPartitionVerticalBlankScheduler::WaitForNextFrameStart(this);
  if ( v1[8] )
  {
    *(_WORD *)(v1 + 9) = 1;
    *((_QWORD *)v1 + 4) = 0LL;
    *((_QWORD *)v1 + 3) = 0LL;
    *((_QWORD *)v1 + 3) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v1);
  }
  CurrentThread = GetCurrentThread();
  if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
  {
    qword_1803E5BF0 = CycleTime;
  }
  else
  {
    qword_1803E5BF0 = 0LL;
    CycleTime = 0LL;
  }
  v4 = *((_QWORD *)this + 526);
  updated = CPartitionVerticalBlankScheduler::UpdateTimes(this);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x250u, 0LL);
  }
  else
  {
    CPartitionVerticalBlankScheduler::ProcessFrame(this);
    v8 = *((_QWORD *)this + 526);
    if ( *(_BYTE *)(v8 + 169) || *(_BYTE *)(v8 + 171) )
      CPartitionVerticalBlankScheduler::UpdateFrameIndices(this);
  }
  v9 = *((_QWORD *)g_pComposition + 27);
  if ( *(_BYTE *)(v9 + 581) && !*(_BYTE *)(v9 + 582) )
    dword_1803E5A10 |= 0x200u;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), 4LL);
  v12 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x269u, 0LL);
  if ( !v7 || v7 >= 0 && v12 < 0 )
    v7 = v12;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
  if ( v4 )
    CTelemetryFrames::FrameEnded(*(_BYTE *)(v4 + 169), *(_BYTE *)(v4 + 224), *(_QWORD *)(v4 + 88));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  if ( v7 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    MilUnexpectedError(v7, L"The render thread failed unexpectedly.");
    pExceptionRecord.ExceptionCode = v7;
    pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v7);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (unsigned int)v7;
}
