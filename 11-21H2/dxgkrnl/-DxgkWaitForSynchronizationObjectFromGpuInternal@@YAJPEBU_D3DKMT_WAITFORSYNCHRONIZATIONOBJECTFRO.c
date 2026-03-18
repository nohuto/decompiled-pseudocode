/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C01703A0
 * Callers:
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C016F918 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C0170370 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0383400 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C01708C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        bool a2,
        __int64 a3,
        const unsigned __int64 *a4,
        bool a5)
{
  bool v6; // r13
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGPROCESS *v18; // rbx
  __int64 v19; // rcx
  struct DXGPROCESS *v20; // rsi
  void *v21; // r15
  __int64 v22; // rbx
  unsigned int *Pool2; // rdi
  const void *v24; // rdx
  char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-D0h]
  char v46; // [rsp+70h] [rbp-C8h]
  struct DXGPROCESS *v47; // [rsp+78h] [rbp-C0h]
  void *Src[2]; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v49[2]; // [rsp+90h] [rbp-A8h]
  __int128 v50; // [rsp+A0h] [rbp-98h]
  __int128 v51; // [rsp+B0h] [rbp-88h]
  __int128 v52; // [rsp+C0h] [rbp-78h]
  PVOID P; // [rsp+D0h] [rbp-68h]
  unsigned int v54[4]; // [rsp+D8h] [rbp-60h] BYREF
  int v55; // [rsp+E8h] [rbp-50h]

  v6 = a3;
  v8 = a1;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 2043);
  CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v18 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v19 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v20 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v20 = v18;
  }
  v47 = v20;
  if ( v20 )
  {
    P = 0LL;
    v55 = 0;
    if ( !a2 )
    {
      *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
      *(_OWORD *)v49 = *(_OWORD *)&v8->MonitoredFenceValueArray;
      Pool2 = (unsigned int *)Src[1];
      v21 = Src[0];
LABEL_32:
      if ( !a4 )
        a4 = (const unsigned __int64 *)v49[0];
      v31 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(v21),
              Pool2,
              a4,
              v49[0],
              (unsigned int)v21,
              v20,
              a2,
              0,
              v6,
              a5,
              0);
      if ( v31 < 0 )
      {
        if ( P != v54 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v55 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
        if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v44);
        return (unsigned int)v31;
      }
      else
      {
        if ( P != v54 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v55 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
        if ( v46 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v44);
        }
        return 0LL;
      }
    }
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
    *(_OWORD *)v49 = *(_OWORD *)&v8->MonitoredFenceValueArray;
    v50 = *(_OWORD *)&v8->Reserved[2];
    v51 = *(_OWORD *)&v8->Reserved[4];
    v52 = *(_OWORD *)&v8->Reserved[6];
    v21 = Src[0];
    if ( HIDWORD(Src[0]) )
    {
      v22 = HIDWORD(Src[0]);
      if ( HIDWORD(Src[0]) > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
        {
LABEL_26:
          P = 0LL;
          v55 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
          if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v44);
          return 3221225495LL;
        }
        Pool2 = (unsigned int *)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL, v17);
        P = Pool2;
      }
      else
      {
        P = v54;
        memset(v54, 0, 4LL * HIDWORD(Src[0]));
        Pool2 = (unsigned int *)P;
      }
      v55 = v22;
      if ( Pool2 )
      {
        v24 = Src[1];
        v25 = (char *)Src[1] + 4 * v22;
        if ( v25 < Src[1] || (unsigned __int64)v25 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(Pool2, v24, 4 * v22);
        Src[1] = Pool2;
        goto LABEL_32;
      }
      goto LABEL_26;
    }
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
      (unsigned int)v21,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v54 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v55 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v44);
    return 3221225485LL;
  }
  else
  {
    v35 = PsGetCurrentProcess(v19, v15, v16, v17);
    WdLogSingleEntry2(2LL, v35, -1073741811LL);
    v40 = PsGetCurrentProcess(v37, v36, v38, v39);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v40,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v41, v44);
    return 3221225485LL;
  }
}
