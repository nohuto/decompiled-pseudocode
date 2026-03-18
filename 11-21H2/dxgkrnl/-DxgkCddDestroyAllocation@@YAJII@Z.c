/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C019EB60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D7FFC (DxgkDestroyClientAllocation.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  char *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rdi
  struct _KEVENT *v21; // rsi
  __int64 v22; // r15
  volatile signed __int64 *v23; // rcx
  volatile signed __int64 *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rcx
  unsigned int v32; // esi
  struct DXGADAPTER *v33; // rcx
  struct DXGADAPTER *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 CurrentProcess; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rbx
  int v46; // r9d
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // r9d
  int v51; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h]
  char v53; // [rsp+68h] [rbp-98h]
  char v54[8]; // [rsp+70h] [rbp-90h] BYREF
  char v55[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v57; // [rsp+88h] [rbp-78h]
  char v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  char v60[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h]
  struct DXGADAPTER *v62; // [rsp+C8h] [rbp-38h]
  char v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  char v66; // [rsp+100h] [rbp+0h]

  v51 = -1;
  v3 = (unsigned int)a1;
  v52 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v53 = 1;
    v51 = 3018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3018);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 3018);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v13 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    v32 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v43 = PsGetCurrentProcess(v40, v39, v41, v42);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v43,
      0LL,
      0LL,
      0LL);
    goto LABEL_53;
  }
  v14 = (char *)Current + 248;
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v46 = *((_DWORD *)v14 + 6);
      if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v46);
    }
    ExAcquirePushLockSharedEx(v14, 0LL);
  }
  v17 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 >= *(_DWORD *)(v13 + 296) )
    goto LABEL_55;
  v18 = *(_QWORD *)(v13 + 280);
  v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
  if ( (((unsigned int)v3 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_55;
  }
  if ( (v19 & 0x1F) != 3 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_55:
    v20 = 0LL;
    goto LABEL_15;
  }
  v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
  if ( v20 )
    _InterlockedIncrement64((volatile signed __int64 *)(v20 + 64));
LABEL_15:
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    v44 = v3;
    v45 = v3;
    v32 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v44, v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v45,
      v13,
      0LL,
      0LL);
    goto LABEL_53;
  }
  v21 = *(struct _KEVENT **)(v20 + 16);
  if ( !KeReadStateEvent(v21 + 5) )
    KeWaitForSingleObject(&v21[5], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, (const EVENT_DESCRIPTOR *)"g", v48, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
  }
  v22 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v22 + 136, 0LL);
  v23 = *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL);
  v59 = 0LL;
  v57 = (struct DXGADAPTER *)v23;
  v58 = 0;
  if ( v23 )
  {
    _InterlockedIncrement64(v23 + 3);
    v56 = -1LL;
  }
  v24 = *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL);
  v64 = 0LL;
  v62 = (struct DXGADAPTER *)v24;
  v63 = 0;
  if ( v24 )
  {
    _InterlockedIncrement64(v24 + 3);
    v61 = -1LL;
  }
  v65 = v20;
  v66 = 0;
  COREACCESS::AcquireShared((COREACCESS *)v55, 0LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 200LL) != 4 )
  {
    if ( v14 && *((struct _KTHREAD **)v14 + 1) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1425LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1425LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v49 = *((_DWORD *)v14 + 6);
        if ( v49 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (const EVENT_DESCRIPTOR *)"g", v26, v49);
      }
      ExAcquirePushLockExclusiveEx(v14, 0LL);
    }
    *((_QWORD *)v14 + 1) = KeGetCurrentThread();
    v27 = (a2 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *(_DWORD *)(v13 + 296)
      && (v28 = *(_QWORD *)(v13 + 280),
          v29 = *(_DWORD *)(v28 + 16 * v27 + 8),
          ((a2 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60))
      && (v29 & 0x2000) == 0
      && (v29 & 0x1F) != 0 )
    {
      if ( (v29 & 0x1F) == 5 )
      {
        v30 = *(_QWORD *)(v28 + 16LL * (unsigned int)v27);
        if ( v30 )
          *(_DWORD *)(v28 + 16 * (((unsigned __int64)a2 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      else
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        v30 = 0LL;
      }
    }
    else
    {
      v30 = 0LL;
    }
    *((_QWORD *)v14 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
    if ( !v30 )
    {
      WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL), v20, a2);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation is passed to DxgkCddDestroyAllocation. DXGADAPTER 0x%I64x DXGDEVICE 0x%I64x DXGALLOCATION 0x%I64x",
        *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL),
        v20,
        a2,
        0LL,
        0LL);
      v32 = -1073741811;
      goto LABEL_39;
    }
    if ( *(_DWORD *)(v20 + 576) == 4 )
      DxgkDestroyClientAllocation(v31, v20, 0LL, 0LL, *(_QWORD *)(v30 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        (DXGDEVICE *)v20,
        0LL,
        0LL,
        *(struct DXGRESOURCE **)(v30 + 40),
        (struct COREDEVICEACCESS *)v54,
        DXGDEVICE::DestroyFlagsDefault);
  }
  v32 = 0;
LABEL_39:
  v33 = v62;
  if ( v62 )
  {
    if ( v63 )
    {
      COREACCESS::Release((COREACCESS *)v60);
      v33 = v62;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v33 + 2), v33);
  }
  v34 = v57;
  if ( v57 )
  {
    if ( v58 )
    {
      COREACCESS::Release((COREACCESS *)v55);
      v34 = v57;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v34 + 2), v34);
  }
  ExReleasePushLockSharedEx(v22 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v22 + 16), (struct DXGADAPTER *)v22);
  ExReleaseResourceLite(*(PERESOURCE *)(v20 + 136));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v20 + 16), (struct DXGDEVICE *)v20);
LABEL_53:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 )
  {
    LOBYTE(v35) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v51);
  }
  return v32;
}
