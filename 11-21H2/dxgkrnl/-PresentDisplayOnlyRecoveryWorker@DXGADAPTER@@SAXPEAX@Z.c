/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C02BCEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026D60 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026DF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0044948 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkInvalidateDeviceState @ 0x1C00600E0 (DxgkInvalidateDeviceState.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C016ED6C (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0305DE0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0305FF0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 */

void __fastcall DXGADAPTER::PresentDisplayOnlyRecoveryWorker(struct _TDR_RECOVERY_CONTEXT *StartContext)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  void *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // [rsp+20h] [rbp-28h]
  char v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_QWORD *)StartContext + 4);
  v9 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v8);
  if ( bTracingEnabled
    && (qword_1C012F870 & 0x1000000) != 0
    && (qword_1C012F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v3, v1, 1);
  }
  while ( *(_QWORD *)(v1 + 168) && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 0) )
  {
    *(_DWORD *)(v1 + 4588) = 1;
    *(_DWORD *)(v1 + 4592) = DXGGLOBAL::GetFirstProfilerInterface();
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v4 = *(_QWORD *)(v1 + 168);
  if ( bTracingEnabled
    && (qword_1C012F870 & 0x1000000) != 0
    && (qword_1C012F870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
  {
    LODWORD(v7) = *(_QWORD *)(v1 + 168) != 0LL;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v3, v1, v7);
    v4 = *(_QWORD *)(v1 + 168);
  }
  if ( v4 )
  {
    v5 = *(void **)(v1 + 216);
    if ( v5 )
      ObfReferenceObject(*(PVOID *)(v1 + 216));
    TdrCollectDbgInfoStage2(StartContext);
    if ( bTracingEnabled
      && (qword_1C012F870 & 0x1000000) != 0
      && (qword_1C012F870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v6, v1);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
    if ( v5 )
    {
      if ( (*(_DWORD *)(v1 + 436) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v5);
      ObfDereferenceObject(v5);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  if ( v9 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v8);
}
