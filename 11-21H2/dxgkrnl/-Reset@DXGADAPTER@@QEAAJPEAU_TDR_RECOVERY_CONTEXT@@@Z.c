/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BDA44
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0306790 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026D60 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026DF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0044948 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1C016ECD8 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C016ED6C (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C01BAEC4 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BCC18 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C25BC (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C02C3C98 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C452C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0305DE0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r13
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  BOOLEAN i; // al
  __int64 v10; // r8
  int FirstProfilerInterface; // eax
  __int64 v12; // rcx
  ADAPTER_RENDER *v13; // rcx
  struct _TDR_RECOVERY_CONTEXT *v14; // rdx
  ADAPTER_DISPLAY *v15; // rcx
  __int64 v16; // r8
  __int64 v18; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER v19; // [rsp+50h] [rbp-58h] BYREF
  char v20; // [rsp+B0h] [rbp+8h] BYREF
  char v21; // [rsp+B1h] [rbp+9h]
  struct _KTHREAD *v22; // [rsp+B8h] [rbp+10h]
  union _LARGE_INTEGER Interval; // [rsp+C0h] [rbp+18h] BYREF
  union _LARGE_INTEGER v24; // [rsp+C8h] [rbp+20h] BYREF

  if ( !BugCheckParameter1 )
  {
    WdLogSingleEntry1(1LL, 8543LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTdrContext", 8543LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v22 = CurrentThread;
  while ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&qword_1C0130EE0, 0LL) )
  {
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( (unsigned int)++v5 >= 0xA )
    {
      WdLogSingleEntry5(0LL, 275LL, 48LL, qword_1C0130400, 0LL, 0LL);
      break;
    }
  }
  if ( !DXGADAPTER::IsDxgmms2(this) )
    KeSetEvent((PRKEVENT)((char *)this + 2768), 0, 0);
  if ( !*((_QWORD *)this + 350) )
  {
    WdLogSingleEntry1(1LL, 8561LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"this->IsRenderAdapter()", 8561LL, 0LL, 0LL, 0LL, 0LL);
  }
  v21 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v20);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 136, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 350), 4u, 0xFFFFFFFF, 0);
      v24.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v24);
    }
    *((_QWORD *)this + 18) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      WdLogSingleEntry1(1LL, 8688LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldCoreAccess != 0", 8688LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( bTracingEnabled
      && (qword_1C012F870 & 0x1000000) != 0
      && (qword_1C012F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      LODWORD(v18) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v8, this, v18);
    }
    for ( i = ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 21), 0);
          !i;
          i = ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 21), 0) )
    {
      *((_DWORD *)this + 1147) = 2;
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
      v12 = *((_QWORD *)this + 350);
      *((_DWORD *)this + 1148) = FirstProfilerInterface;
      ADAPTER_RENDER::FlushScheduler(v12, 4u, 0xFFFFFFFF, 0);
      v19.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v19);
    }
    if ( bTracingEnabled
      && (qword_1C012F870 & 0x1000000) != 0
      && (qword_1C012F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      LODWORD(v18) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v10,
        this,
        v18);
    }
    *((_DWORD *)this + 44) = 2;
    goto LABEL_49;
  }
  *((_QWORD *)this + 351) = CurrentThread;
  if ( CurrentThread == *(struct _KTHREAD **)(BugCheckParameter1 + 2904) )
    goto LABEL_27;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 50) != 1 )
  {
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_63;
  }
  if ( !KeResetEvent((PRKEVENT)this + 2) )
  {
    WdLogSingleEntry1(1LL, 8596LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldCoreAccess != 0", 8596LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( bTracingEnabled
    && (qword_1C012F870 & 0x1000000) != 0
    && (qword_1C012F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
  {
    LODWORD(v18) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v6, this, v18);
  }
  DXGADAPTER::AcquireCoreResourceExclusiveWithTracking((__int64)this, 2, 0);
  if ( bTracingEnabled
    && (qword_1C012F870 & 0x1000000) != 0
    && (qword_1C012F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
  {
    LODWORD(v18) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v7, this, v18);
  }
  *((_DWORD *)this + 44) = 2;
  if ( !*(_QWORD *)(BugCheckParameter1 + 2904) )
  {
LABEL_27:
    KeSetEvent((PRKEVENT)((char *)this + 2768), 0, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 350) + 624LL) + 8LL) + 592LL))(
      *(_QWORD *)(*((_QWORD *)this + 350) + 632LL),
      *((_QWORD *)this + 351));
    DXGADAPTER::PrepareToReset(this, (struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 350), 4u, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 350));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 350) + 648LL) + 8LL) + 1152LL))(*(_QWORD *)(*((_QWORD *)this + 350) + 656LL));
    if ( v22 != *(struct _KTHREAD **)(BugCheckParameter1 + 2904) )
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 350), 0, 0);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 350), 4u, 0xFFFFFFFF, 0);
LABEL_49:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 350), 4u, 0xFFFFFFFF, 0);
    TdrCollectDbgInfoStage2((struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
    v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 350);
    *((_BYTE *)this + 2742) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v13, BugCheckParameter1) < 0 )
    {
      WdLogSingleEntry1(1LL, 8732LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 8732LL, 0LL, 0LL, 0LL, 0LL);
    }
    v15 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 349);
    if ( v15 && (int)ADAPTER_DISPLAY::Reset(v15, v14) < 0 )
    {
      WdLogSingleEntry1(1LL, 8740LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 8740LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)this + 351) = 0LL;
    KeResetEvent((PRKEVENT)((char *)this + 2768));
    CurrentThread = v22;
  }
  if ( !DXGADAPTER::IsDxgmms2(this) || *(struct _KTHREAD **)(BugCheckParameter1 + 2904) != CurrentThread )
  {
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled
      && (qword_1C012F870 & 0x1000000) != 0
      && (qword_1C012F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v16, this);
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 21));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_63:
  if ( v21 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v20);
  ExReleasePushLockSharedEx(&qword_1C0130EE0, 0LL);
  return 0LL;
}
