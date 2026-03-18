/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C009F788
 * Callers:
 *     VidMmBeginCPUAccess @ 0x1C0005AC0 (VidMmBeginCPUAccess.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006770 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B04 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x1C002EA50 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0089F04 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00E470C (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00E77F4 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C00EEA90 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BeginCPUAccess(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        void **a7)
{
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r12d
  int v19; // ecx
  _QWORD *v20; // rbx
  char v21; // bl
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  void *v26; // rax
  __int64 *v27; // rax
  void **v28; // rcx
  __int64 v29; // rcx
  bool v30; // zf
  __int64 *v31; // rax
  __int64 v32; // r9
  __int64 v34; // rcx
  unsigned int v35; // r8d
  unsigned __int8 v36; // r9
  __int64 v37; // rax
  unsigned __int8 v38; // [rsp+20h] [rbp-68h]
  __int64 *v39; // [rsp+98h] [rbp+10h]
  int v40; // [rsp+A0h] [rbp+18h]

  v7 = *a2;
  v8 = 0LL;
  v9 = a4;
  v40 = 0;
  LODWORD(v12) = 0;
  v39 = *a2;
  v13 = **a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v13 + 504, 0LL);
  if ( *((_WORD *)a2[12] + 2) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      WdLogSingleEntry2(1LL, a2, 2LL);
LABEL_4:
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
LABEL_5:
      LODWORD(v12) = -1073741811;
      goto LABEL_70;
    }
    WdLogSingleEntry2(2LL, a2, 2LL);
  }
  if ( *(_BYTE *)(v13 + 80) )
  {
    WdLogSingleEntry1(1LL, 8183LL);
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    goto LABEL_70;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = WdLogNewEntry5_WdTrace(v14);
    *(_QWORD *)(v17 + 24) = a2;
    *(_QWORD *)(v17 + 32) = v9;
  }
  v18 = v9 & 0xFFFFFFA7;
  *a7 = 0LL;
  if ( (v18 & 0xFFFFFC58) != 0 )
  {
    WdLogSingleEntry1(1LL, v18);
    goto LABEL_4;
  }
  v19 = **(_DWORD **)(v13 + 536);
  if ( (v19 & 1) == 0 )
  {
    WdLogSingleEntry1(2LL, 8223LL);
    goto LABEL_5;
  }
  if ( (v19 & 8) == 0 )
  {
    v20 = (_QWORD *)v7[1];
    if ( *v20 != PsGetCurrentProcess() && (*(_DWORD *)(v13 + 72) & 0x1000) == 0 )
    {
      WdLogSingleEntry1(1LL, 8238LL);
      goto LABEL_4;
    }
  }
  v21 = 0;
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    v22 = **a2;
    v21 = *(_BYTE *)(v22 + 68) >> 7;
  }
  v24 = **(unsigned int **)(v13 + 536);
  if ( (v24 & 0x20000000) != 0 && !v21 && (v24 & 0x40000000) == 0 && v39 != *(__int64 **)(v13 + 88) )
  {
    v22 = *(unsigned int *)(*((_QWORD *)this + 3) + 436LL);
    if ( (v22 & 0x10) == 0 && (v22 & 8) == 0 )
    {
      WdLogSingleEntry1(1LL, 8262LL);
      goto LABEL_4;
    }
  }
  if ( (v18 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 68) & 0x40) == 0 && (*(_DWORD *)(v13 + 72) & 0x100000) == 0 )
    {
      WdLogSingleEntry1(1LL, 8288LL);
      goto LABEL_4;
    }
    if ( !*((_BYTE *)this + 7089) && (v24 & 4) != 0 )
    {
      WdLogSingleEntry1(1LL, 8299LL);
      goto LABEL_4;
    }
  }
  if ( (v18 & 0x81) != 0 )
  {
    if ( (v18 & 0x100) != 0 )
    {
      LODWORD(v12) = -1071775484;
      WdLogSingleEntry2(4LL, a2, -1071775484LL);
      goto LABEL_70;
    }
    VIDMM_GLOBAL::WaitOnAllocForceSync((VIDMM_GLOBAL *)v22, (struct VIDMM_ALLOC *)a2);
    v40 = 4;
LABEL_39:
    if ( v39[3] )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v13 + 296));
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v39[1] + 24) + 152LL))(*(_QWORD *)(v39[1] + 24), v39[3]);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 296));
    }
    _InterlockedAdd((volatile signed __int32 *)(v13 + 360), 1u);
    v25 = *(_DWORD *)(v13 + 72);
    if ( (v25 & 0x4000) != 0 )
    {
      v26 = *(void **)(v13 + 568);
LABEL_57:
      v28 = a7;
      *a7 = v26;
      goto LABEL_58;
    }
    if ( (v25 & 0x2000) != 0 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v13 + 296));
      v12 = (int)LockParavirtualizedAllocationOnHost((struct VIDMM_ALLOC *)a2, a7);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 296));
      if ( (int)v12 >= 0 )
      {
LABEL_58:
        v30 = bTracingEnabled == 0;
        *(_BYTE *)(v13 + 82) = 1;
        if ( !v30 )
        {
          v31 = a2[1];
          v32 = 0LL;
          if ( v31 )
            v32 = v31[3];
          if ( (byte_1C0076981 & 1) != 0 )
            McTemplateK0ppqq_EtwWriteTransfer((__int64)v28, v24, v23, v32, a2, v18, v40);
        }
        ++*((_DWORD *)this + 1904);
        if ( (v18 & 1) != 0 )
          ++*((_DWORD *)this + 1905);
        if ( (v18 & 2) != 0 )
          ++*((_DWORD *)this + 1907);
        if ( (v18 & 0x80u) != 0 )
          ++*((_DWORD *)this + 1908);
        LODWORD(v12) = 0;
        goto LABEL_70;
      }
      WdLogSingleEntry1(1LL, v12);
      DxgkLogInternalTriageEvent(v29, 0x40000LL);
LABEL_89:
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 360));
      goto LABEL_70;
    }
    if ( (**(_DWORD **)(v13 + 536) & 0x40000000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v22);
    }
    else
    {
      if ( (*(_DWORD *)(v13 + 68) & 0x80u) == 0 )
      {
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v13 + 296));
        if ( (*(_DWORD *)(v13 + 68) & 0x200000) != 0 )
        {
          WdLogSingleEntry1(3LL, v13);
        }
        else if ( (*((_DWORD *)this + 1764) & 0x20) != 0 || *((_BYTE *)this + 7088) )
        {
          LODWORD(v12) = -1073741823;
        }
        else
        {
          v37 = *(_QWORD *)(v13 + 120);
          if ( v37 && (*(_DWORD *)(v37 + 80) & 0x1001) == 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v34);
            LODWORD(v12) = VIDMM_GLOBAL::SetupAllocationForCPUAccess(this, (struct VIDMM_ALLOC *)a2, v35, v36, v38);
            if ( (int)v12 < 0 )
              WdLogSingleEntry1(3LL, a2);
          }
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 296));
        if ( (int)v12 < 0 )
        {
          WdLogSingleEntry1(3LL, a2);
          goto LABEL_89;
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v22);
      }
      if ( (**(_DWORD **)(v13 + 536) & 8) != 0 )
      {
        v26 = *(void **)(v13 + 392);
        goto LABEL_57;
      }
    }
    v26 = (void *)v39[2];
    goto LABEL_57;
  }
  if ( (v18 & 2) != 0 )
    goto LABEL_39;
  if ( bTracingEnabled )
  {
    v27 = a2[1];
    if ( v27 )
      v8 = v27[3];
    if ( (byte_1C0076981 & 1) != 0 )
      McTemplateK0ppqq_EtwWriteTransfer(v22, v24, v23, v8, a2, v18, 2);
  }
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7184), v18, 2u, 0);
  LODWORD(v12) = -1071775486;
LABEL_70:
  ExReleasePushLockExclusiveEx(v13 + 504, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
