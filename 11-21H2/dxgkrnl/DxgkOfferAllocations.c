/*
 * XREFs of DxgkOfferAllocations @ 0x1C01CBA90
 * Callers:
 *     ?VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03708C0 (-VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C01CBF70 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 */

__int64 __fastcall DxgkOfferAllocations(_D3DKMT_OFFERALLOCATIONS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdi
  struct _KTHREAD **v11; // rsi
  unsigned __int8 v12; // r14
  _OWORD *p_hDevice; // rcx
  struct _KTHREAD **v14; // r8
  __int64 hDevice; // rsi
  struct DXGDEVICE *v16; // rdi
  __int64 v17; // rcx
  int v18; // esi
  struct _KEVENT *v19; // r15
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  UINT *p_Flags; // r13
  UINT Value; // eax
  struct DXGDEVICE *v25; // rdi
  unsigned int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _KEVENT *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  struct DXGDEVICE *v37; // [rsp+50h] [rbp-138h] BYREF
  struct DXGDEVICE *v38; // [rsp+58h] [rbp-130h] BYREF
  int v39; // [rsp+60h] [rbp-128h] BYREF
  __int64 v40; // [rsp+68h] [rbp-120h]
  char v41; // [rsp+70h] [rbp-118h]
  struct DXGDEVICE *v42; // [rsp+78h] [rbp-110h] BYREF
  int v43; // [rsp+80h] [rbp-108h]
  _D3DKMT_OFFERALLOCATIONS v44; // [rsp+88h] [rbp-100h] BYREF
  _BYTE v45[8]; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v46[16]; // [rsp+B8h] [rbp-D0h] BYREF
  DXGADAPTER *v47; // [rsp+C8h] [rbp-C0h]
  char v48; // [rsp+D0h] [rbp-B8h]
  __int64 v49; // [rsp+D8h] [rbp-B0h]
  _BYTE v50[16]; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v51; // [rsp+108h] [rbp-80h]
  __int64 v52; // [rsp+138h] [rbp-50h]
  char v53; // [rsp+140h] [rbp-48h]

  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2070;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2070);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2070);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = (struct _KTHREAD **)*((_QWORD *)Current + 3)) == 0LL )
  {
    v11 = (struct _KTHREAD **)v10;
    if ( !v10 )
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( !v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_86;
    }
  }
  v12 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  *(_QWORD *)&v44.Flags.0 = 0LL;
  if ( v12 )
  {
    p_hDevice = &a1->hDevice;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      p_hDevice = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v44.hDevice = *p_hDevice;
    *(_OWORD *)&v44.HandleList = p_hDevice[1];
  }
  else
  {
    v44 = *a1;
  }
  v38 = 0LL;
  v14 = v11;
  hDevice = v44.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, v44.hDevice, v14, &v38);
  v16 = v38;
  if ( !v38 )
  {
    WdLogSingleEntry2(2LL, hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( !v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_86;
  }
  v42 = v38;
  v17 = *(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL);
  if ( *(int *)(v17 + 2424) >= 0x2000 || *(_BYTE *)(v17 + 2724) )
  {
    v18 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
    v43 = v18;
  }
  else
  {
    v18 = 0;
    v43 = 0;
  }
  v19 = (struct _KEVENT *)*((_QWORD *)v16 + 2);
  if ( *((_DWORD *)v16 + 108) == 2 )
  {
    if ( KeReadStateEvent(v19 + 5) )
      goto LABEL_15;
    v33 = v19 + 5;
LABEL_60:
    KeWaitForSingleObject(v33, Executive, 0, 0, 0LL);
    goto LABEL_15;
  }
  if ( !KeReadStateEvent(v19 + 4) )
  {
    v33 = v19 + 4;
    goto LABEL_60;
  }
LABEL_15:
  KeEnterCriticalRegion();
  if ( v18 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v16 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v16 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (const EVENT_DESCRIPTOR *)"g", v35, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v16, 0, v20, 0);
  if ( v53 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v50, 0LL);
    if ( *(_DWORD *)(v51 + 200) != 1 )
      goto LABEL_72;
  }
  if ( v48 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v46, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v47 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v47 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (const EVENT_DESCRIPTOR *)"g", v22, 72);
      KeWaitForSingleObject((char *)v47 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v47, 0LL);
  }
  v49 = 0LL;
  v48 = 1;
  if ( *(_DWORD *)(v52 + 576) == 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 1968LL) < 0x5010u )
      goto LABEL_32;
    if ( v12 )
    {
      p_Flags = (UINT *)&a1->Flags;
      if ( (unsigned __int64)p_Flags >= MmUserProbeAddress )
        p_Flags = (UINT *)MmUserProbeAddress;
      Value = *p_Flags;
      v44.Flags.Value = *p_Flags;
    }
    else
    {
      Value = a1->Flags.Value;
      v44.Flags.Value = Value;
    }
    if ( (Value & 0xFFFFFFFC) == 0 )
    {
LABEL_32:
      v25 = v38;
      v26 = DXGDEVICE::OfferAllocations(v38, &v44, v12);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
      if ( v43 )
        ExReleasePushLockSharedEx((char *)v25 + 144, 0LL);
      else
        ExReleaseResourceLite(*((PERESOURCE *)v25 + 17));
      KeLeaveCriticalRegion();
      if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( v41 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v39);
      }
      return v26;
    }
    WdLogSingleEntry1(3LL, (unsigned __int64)Value >> 2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( !v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_86:
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v39);
    return 3221225485LL;
  }
  COREACCESS::Release((COREACCESS *)v46);
  if ( v53 )
LABEL_72:
    COREACCESS::Release((COREACCESS *)v50);
  WdLogSingleEntry2(3LL, v38, -1073741130LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v42);
  if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v36, v39);
  return 3221226166LL;
}
