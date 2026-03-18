/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z @ 0x1C016EE2C
 * Callers:
 *     DxgkWaitForSynchronizationObject @ 0x1C016EE10 (DxgkWaitForSynchronizationObject.c)
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01EE940 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C01708C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  bool v3; // r15
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *v14; // rsi
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // rdx
  D3DKMT_HANDLE *v17; // rbx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  D3DKMT_HANDLE *v27; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // [rsp+60h] [rbp-128h] BYREF
  __int64 v38; // [rsp+68h] [rbp-120h]
  char v39; // [rsp+70h] [rbp-118h]
  struct DXGPROCESS *v40; // [rsp+78h] [rbp-110h]
  __int128 v41; // [rsp+80h] [rbp-108h] BYREF
  __int128 v42; // [rsp+90h] [rbp-F8h]
  __int128 v43; // [rsp+A0h] [rbp-E8h]
  __int128 v44; // [rsp+B0h] [rbp-D8h]
  __int128 v45; // [rsp+C0h] [rbp-C8h]
  __int128 v46; // [rsp+D0h] [rbp-B8h]
  __int128 v47; // [rsp+E0h] [rbp-A8h]
  __int128 v48; // [rsp+F0h] [rbp-98h]
  __int128 v49; // [rsp+100h] [rbp-88h]
  __int128 v50; // [rsp+110h] [rbp-78h]
  __int128 v51; // [rsp+120h] [rbp-68h]
  __int128 v52; // [rsp+130h] [rbp-58h]
  __int64 v53; // [rsp+140h] [rbp-48h]

  v3 = a3;
  v5 = a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 2043);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v15 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v16 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v16 = v14;
  }
  v40 = v16;
  if ( !v16 )
  {
    v29 = PsGetCurrentProcess(v15, 0LL, v12, v13);
    v24 = -1073741811;
    WdLogSingleEntry2(2LL, v29, -1073741811LL);
    v34 = PsGetCurrentProcess(v31, v30, v32, v33);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v34,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v37);
    return (unsigned int)v24;
  }
  if ( !a2 )
  {
    v41 = *(_OWORD *)&v5->hContext;
    v42 = *(_OWORD *)&v5->ObjectHandleArray[2];
    v43 = *(_OWORD *)&v5->ObjectHandleArray[6];
    v44 = *(_OWORD *)&v5->ObjectHandleArray[10];
    v45 = *(_OWORD *)&v5->ObjectHandleArray[14];
    v46 = *(_OWORD *)&v5->ObjectHandleArray[18];
    v47 = *(_OWORD *)&v5->ObjectHandleArray[22];
    v48 = *(_OWORD *)&v5->ObjectHandleArray[26];
    v27 = &v5->ObjectHandleArray[30];
    v49 = *(_OWORD *)v27;
    v50 = *((_OWORD *)v27 + 1);
    v51 = *((_OWORD *)v27 + 2);
    v52 = *((_OWORD *)v27 + 3);
    v53 = *((_QWORD *)v27 + 8);
    v18 = v41;
    goto LABEL_21;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
  v41 = *(_OWORD *)&v5->hContext;
  v42 = *(_OWORD *)&v5->ObjectHandleArray[2];
  v43 = *(_OWORD *)&v5->ObjectHandleArray[6];
  v44 = *(_OWORD *)&v5->ObjectHandleArray[10];
  v45 = *(_OWORD *)&v5->ObjectHandleArray[14];
  v46 = *(_OWORD *)&v5->ObjectHandleArray[18];
  v47 = *(_OWORD *)&v5->ObjectHandleArray[22];
  v48 = *(_OWORD *)&v5->ObjectHandleArray[26];
  v17 = &v5->ObjectHandleArray[30];
  v49 = *(_OWORD *)v17;
  v50 = *((_OWORD *)v17 + 1);
  v51 = *((_OWORD *)v17 + 2);
  v52 = *((_OWORD *)v17 + 3);
  v53 = *((_QWORD *)v17 + 8);
  v18 = v41;
  if ( DWORD1(v41) )
  {
    if ( DWORD1(v41) <= 0x20 )
    {
LABEL_21:
      v24 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(v18),
              (const unsigned int *)&v41 + 2,
              0LL,
              *((unsigned __int64 *)&v49 + 1),
              v18,
              v16,
              a2 != 0,
              0,
              0,
              0,
              v3);
      if ( v24 >= 0 )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( v39 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v37);
        }
        return 0LL;
      }
      goto LABEL_31;
    }
    WdLogSingleEntry3(2LL, (unsigned int)v41, DWORD1(v41), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x waiting on too many objects %I64d, returning 0x%I64x",
      (unsigned int)v41,
      DWORD1(v41),
      -1073741811LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v37);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, (unsigned int)v41, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
      (unsigned int)v41,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v37);
    return 3221225485LL;
  }
}
