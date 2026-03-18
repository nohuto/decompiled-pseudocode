/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A26D8
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0014F18 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A22BC (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2A68 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1C00A2E4C (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2EA0 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1C00A53DC (GetBucketIdForAllocationSizePow2.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00AAD54 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00AB56C (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, _BOOL8 a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  bool v6; // r15
  LARGE_INTEGER PerformanceCounter; // rdi
  char v9; // al
  __int64 v10; // rcx
  int v11; // ebp
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rbx
  LONGLONG v14; // rdx
  __int64 TimeIncrement; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  __int64 v19; // rcx
  int v20; // edx
  __int64 v22; // rbx
  VIDMM_COMMIT_TELEMETRY *v23; // rcx
  __int64 v24; // rax
  LARGE_INTEGER v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r10
  _QWORD *v29; // rax
  _BYTE v30[8]; // [rsp+30h] [rbp-38h] BYREF
  DXGPUSHLOCK *v31; // [rsp+38h] [rbp-30h]
  int v32; // [rsp+40h] [rbp-28h]

  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v24 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = this;
    *(_QWORD *)(v24 + 32) = *((_DWORD *)this + 15) & 7;
  }
  PerformanceCounter.QuadPart = 0LL;
  v9 = *((_BYTE *)this + 58) | 2;
  *((_BYTE *)this + 58) = v9;
  if ( (v9 & 4) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = *((_QWORD *)this + 4);
  v11 = 0;
  if ( v10 && (*(_BYTE *)(v10 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 200), 0, 0))
    || (v11 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, v6, a3, a4), v11 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    VIDMM_DEVICE::ResumeSchedulerDevice(this);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      *((struct VIDMM_PROCESS **)this + 1),
      this,
      1u);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30, (struct _KTHREAD **)(*(_QWORD *)this + 44480LL), 0);
    DXGPUSHLOCK::AcquireExclusive(v31);
    v32 = 2;
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)this + 12);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
    v13 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    v18 = *((_BYTE *)this + 58) & 0xED;
    *((_QWORD *)this + 31) = 0LL;
    v19 = *((_QWORD *)this + 30) + v13 * TimeIncrement;
    *((_QWORD *)this + 29) = v19;
    *((_QWORD *)this + 30) = 0LL;
    *((_BYTE *)this + 58) = v18;
    if ( (v18 & 4) != 0 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 44624LL);
      *((_BYTE *)this + 58) &= ~4u;
      v25 = KeQueryPerformanceCounter(0LL);
      v16 = (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetBucketIdForAllocationSizePow2)(
                            *(_QWORD *)(**(_QWORD **)this + 288LL),
                            (LARGE_INTEGER)v25.QuadPart,
                            v26);
      v14 = v27 - PerformanceCounter.QuadPart;
      ++*(_DWORD *)(v28 + 4 * v16 + 8);
      *(_QWORD *)(v28 + 8 * v16 + 96) += v17;
      *(_QWORD *)(v28 + 8 * v16 + 272) += v14;
      *(_BYTE *)(v28 + 976) = 1;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v14, v16, v17);
      v29[3] = this;
      v19 = *((_DWORD *)this + 15) & 7;
      v29[5] = 0LL;
      v29[4] = v19;
    }
    v20 = *((_DWORD *)this + 15);
    if ( (*((_BYTE *)this + 60) & 7) == 3 )
    {
      v19 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL);
      if ( (*(_DWORD *)(v19 + 424) & 4) != 0 )
      {
        v22 = **(_QWORD **)this + 208LL;
        VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v22, *(struct VIDMM_GLOBAL **)this, this, 0LL);
        VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(v23, this, 0);
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = 0LL;
        *(_QWORD *)v22 = 0LL;
        *(_BYTE *)(v22 + 24) = 0;
        v20 = *((_DWORD *)this + 15);
      }
    }
    *((_DWORD *)this + 15) = v20 & 0xFFFFFFF8;
    if ( (byte_1C006E942 & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer(v19, &EventVidMmResumeDevice, v16, *((_QWORD *)this + 3));
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    *((_BYTE *)this + 58) &= ~2u;
  }
  return (unsigned int)v11;
}
