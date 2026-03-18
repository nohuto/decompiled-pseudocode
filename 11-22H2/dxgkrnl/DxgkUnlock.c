/*
 * XREFs of DxgkUnlock @ 0x1C01872C0
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0394B40 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007C60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C018763C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0197978 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0198020 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // r14
  unsigned __int8 v4; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v7; // rsi
  struct _KTHREAD **v8; // r8
  __int128 v9; // xmm0
  struct DXGDEVICE *v10; // rdi
  char *v11; // r14
  __int64 v12; // rcx
  int v13; // esi
  struct _KEVENT *v14; // r15
  DXGPUSHLOCK *v15; // rsi
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGDEVICE *v20; // rdi
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KEVENT *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGDEVICE *v35; // [rsp+50h] [rbp-128h] BYREF
  struct DXGDEVICE *v36; // [rsp+58h] [rbp-120h] BYREF
  int v37; // [rsp+60h] [rbp-118h] BYREF
  __int64 v38; // [rsp+68h] [rbp-110h]
  char v39; // [rsp+70h] [rbp-108h]
  struct _D3DKMT_UNLOCK v40; // [rsp+78h] [rbp-100h] BYREF
  struct DXGDEVICE *v41; // [rsp+88h] [rbp-F0h] BYREF
  int v42; // [rsp+90h] [rbp-E8h]
  _BYTE v43[8]; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v44[16]; // [rsp+A8h] [rbp-D0h] BYREF
  DXGADAPTER *v45; // [rsp+B8h] [rbp-C0h]
  char v46; // [rsp+C0h] [rbp-B8h]
  __int64 v47; // [rsp+C8h] [rbp-B0h]
  _BYTE v48[88]; // [rsp+E8h] [rbp-90h] BYREF

  v3 = (__int128 *)a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2012);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 2012);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v8 = (struct _KTHREAD **)*((_QWORD *)Current + 3);
    if ( v8 )
      goto LABEL_7;
    goto LABEL_5;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v8 = (struct _KTHREAD **)DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v8 = v7;
  }
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( !v39 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_53;
  }
LABEL_7:
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int128 *)MmUserProbeAddress;
    v9 = *v3;
  }
  else
  {
    v9 = *v3;
  }
  v40 = (struct _D3DKMT_UNLOCK)v9;
  v35 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, v9, v8, &v35);
  v10 = v35;
  if ( !v35 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v9, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      (unsigned int)v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( !v39 )
      return 3221225485LL;
    v28 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_53:
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v37);
    return 3221225485LL;
  }
  v41 = v35;
  v11 = (char *)v35 + 16;
  v12 = *(_QWORD *)(*((_QWORD *)v35 + 2) + 16LL);
  if ( *(int *)(v12 + 2552) >= 0x2000 || *(_BYTE *)(v12 + 2852) )
  {
    v13 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v42 = v13;
  }
  else
  {
    v13 = 0;
    v42 = 0;
  }
  v14 = *(struct _KEVENT **)v11;
  if ( *((_DWORD *)v10 + 116) == 2 )
  {
    if ( KeReadStateEvent(v14 + 5) )
      goto LABEL_17;
    v30 = v14 + 5;
LABEL_60:
    KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
    goto LABEL_17;
  }
  if ( !KeReadStateEvent(v14 + 4) )
  {
    v30 = v14 + 4;
    goto LABEL_60;
  }
LABEL_17:
  if ( v13 )
  {
    v15 = (struct DXGDEVICE *)((char *)v10 + 144);
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 40);
      v17 = 1;
      v10 = v35;
    }
    else
    {
      KeLeaveCriticalRegion();
      v17 = 0;
    }
    if ( !v17 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)v11 + 16LL));
      DXGPUSHLOCK::AcquireShared(v15);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v11 + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)v11 + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventBlockThread, v32, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)v11 + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v10, 2, v16, 0);
  if ( v48[72] )
    COREACCESS::AcquireShared((COREACCESS *)v48, 0LL);
  if ( v46 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v44, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v45 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v45 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventBlockThread, v19, 72);
      KeWaitForSingleObject((char *)v45 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v45, 0LL);
  }
  v47 = 0LL;
  v46 = 1;
  if ( *((_DWORD *)v35 + 152) == 4 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v41);
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v37);
    return 0LL;
  }
  else
  {
    v40.hDevice = 0;
    v20 = v35;
    v21 = DXGDEVICE::Unlock(v35, &v40, v4);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    if ( v42 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v20 + 40);
      ExReleasePushLockSharedEx((char *)v20 + 144, 0LL);
    }
    else
    {
      ExReleaseResourceLite(*((PERESOURCE *)v20 + 17));
    }
    KeLeaveCriticalRegion();
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v37);
    }
    return v21;
  }
}
