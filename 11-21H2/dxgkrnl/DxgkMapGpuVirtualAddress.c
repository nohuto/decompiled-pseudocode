/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C01CA5F0
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0370080 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001DB14 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C002BAC8 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0379B34 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v11; // rbx
  struct DXGPROCESS *v12; // r15
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v13; // r14
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v14; // rcx
  unsigned __int64 Value; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v18; // ebx
  struct _KEVENT *v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _EX_RUNDOWN_REF *v23; // rbx
  ULONG_PTR Count; // r8
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v25; // rax
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  struct DXGTHREAD *DxgThread; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  bool v30; // r9
  int v31; // eax
  unsigned int v32; // esi
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  struct DXGTHREAD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  DXGPAGINGQUEUE *v42; // rcx
  struct _KEVENT *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r8
  struct DXGPAGINGQUEUE *v48; // rdi
  unsigned int v49; // esi
  unsigned int HostProcess; // eax
  int Timeout; // [rsp+20h] [rbp-1F8h]
  int v52; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-1C0h]
  char v54; // [rsp+60h] [rbp-1B8h]
  struct _EX_RUNDOWN_REF *v55; // [rsp+68h] [rbp-1B0h] BYREF
  DXGPAGINGQUEUE *v56; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned int v57[2]; // [rsp+78h] [rbp-1A0h] BYREF
  struct DXGPAGINGQUEUE *v58; // [rsp+80h] [rbp-198h] BYREF
  __int64 v59; // [rsp+88h] [rbp-190h] BYREF
  int v60; // [rsp+90h] [rbp-188h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v61; // [rsp+98h] [rbp-180h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v62; // [rsp+A0h] [rbp-178h]
  struct DXGPROCESS *v63; // [rsp+A8h] [rbp-170h]
  _QWORD *v64; // [rsp+B0h] [rbp-168h]
  _BYTE v65[8]; // [rsp+D0h] [rbp-148h] BYREF
  _BYTE v66[16]; // [rsp+D8h] [rbp-140h] BYREF
  DXGADAPTER *v67; // [rsp+E8h] [rbp-130h]
  char v68; // [rsp+F0h] [rbp-128h]
  __int64 v69; // [rsp+F8h] [rbp-120h]
  _BYTE v70[16]; // [rsp+118h] [rbp-100h] BYREF
  __int64 v71; // [rsp+128h] [rbp-F0h]
  __int64 v72; // [rsp+158h] [rbp-C0h]
  char v73; // [rsp+160h] [rbp-B8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v74; // [rsp+170h] [rbp-A8h] BYREF

  v52 = -1;
  v53 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2100;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2100);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2100);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v12 = v11;
  }
  v63 = v12;
  if ( !v12 )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( !v54 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_127;
  }
  memset(&v74, 0, sizeof(v74));
  if ( v4 )
  {
    v13 = &v74;
    v62 = &v74;
    v14 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v74 = *v14;
  }
  else
  {
    v13 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    v62 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
  }
  v58 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v56, v13->hPagingQueue, v12, &v58, 1);
  if ( !v58 )
  {
    WdLogSingleEntry2(3LL, v13->hPagingQueue, -1073741811LL);
    v42 = v56;
    if ( !v56 )
    {
LABEL_75:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( !v54 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_127;
    }
LABEL_74:
    DXGPAGINGQUEUE::ReleaseReference(v42);
    goto LABEL_75;
  }
  Value = v13->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    if ( v56 )
      DXGPAGINGQUEUE::ReleaseReference(v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( !v54 )
      return 3221225485LL;
    v40 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_127:
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v52);
    return 3221225485LL;
  }
  v16 = *((_QWORD *)v58 + 2);
  v59 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
  if ( *(int *)(v17 + 2424) >= 0x2000 || *(_BYTE *)(v17 + 2724) )
    v18 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 347);
  else
    v18 = 0;
  v60 = v18;
  v19 = *(struct _KEVENT **)(v16 + 16);
  if ( *(_DWORD *)(v16 + 432) == 2 )
  {
    if ( KeReadStateEvent(v19 + 5) )
      goto LABEL_18;
    v43 = v19 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v19 + 4) )
      goto LABEL_18;
    v43 = v19 + 4;
  }
  KeWaitForSingleObject(v43, Executive, 0, 0, 0LL);
LABEL_18:
  KeEnterCriticalRegion();
  if ( v18 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16 + 144, 0LL) )
    {
      KeLeaveCriticalRegion();
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v16 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, (const EVENT_DESCRIPTOR *)"g", v45, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, v16, 0, v20, 0);
  if ( v73 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v70, 0LL);
    if ( *(_DWORD *)(v71 + 200) != 1 )
      goto LABEL_96;
  }
  if ( v68 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v66, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v67 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v67 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (const EVENT_DESCRIPTOR *)"g", v22, 72);
      KeWaitForSingleObject((char *)v67 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v67, 0LL);
  }
  v69 = 0LL;
  v68 = 1;
  if ( *(_DWORD *)(v72 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v66);
    if ( !v73 )
    {
LABEL_97:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v59);
      if ( v56 )
        DXGPAGINGQUEUE::ReleaseReference(v56);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v52);
      return 3221226166LL;
    }
LABEL_96:
    COREACCESS::Release((COREACCESS *)v70);
    goto LABEL_97;
  }
  v23 = 0LL;
  v55 = 0LL;
  Count = 0LL;
  v25 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)v13->Protection.Value;
  if ( (*(_BYTE *)&v25 & 4) == 0 && (*(_BYTE *)&v25 & 8) == 0 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v12, (DXGALLOCATIONREFERENCE *)&v61, v13->hAllocation);
    v23 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v55 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    if ( v61 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)v61 + 11);
    if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
    {
      *(_QWORD *)v57 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, v57) >= 0 )
      {
        DxgThread = *(struct DXGTHREAD **)v57;
        if ( *(_QWORD *)v57 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (*(_QWORD *)v57 = DxgThread) != 0LL) )
        {
          if ( *((_DWORD *)DxgThread + 12) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
        }
      }
    }
    if ( !v23 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v13->hAllocation, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid hAllocation=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v13->hAllocation,
        (__int64)v12,
        0LL,
        0LL);
      goto LABEL_107;
    }
    Count = v23[3].Count;
    if ( !Count && (*(_BYTE *)(v16 + 1869) & 1) == 0 )
    {
      WdLogSingleEntry2(2LL, -1073741811LL, v23);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x DXGALLOCATION 0x%p does not have a VidMm handle",
        -1073741811LL,
        (__int64)v23,
        0LL,
        0LL,
        0LL);
LABEL_107:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v55);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v59);
      v42 = v56;
      if ( !v56 )
        goto LABEL_75;
      goto LABEL_74;
    }
    if ( v23[1].Count != v16 )
    {
      v48 = v58;
      WdLogSingleEntry3(2LL, -1073741811LL, v23, v58);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x DXGALLOCATION 0x%p device does not match DXGPAGINGQUEUE 0x%p device",
        -1073741811LL,
        (__int64)v23,
        (__int64)v48,
        0LL,
        0LL);
      goto LABEL_107;
    }
  }
  v28 = *(_QWORD **)(v16 + 16);
  v29 = v28[2];
  v64 = v28;
  if ( *(_BYTE *)(v29 + 209) )
  {
    v61 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v29 + 4344);
    if ( v23 )
      v57[0] = HIDWORD(v23[2].Ptr);
    else
      v57[0] = 0;
    v49 = *((_DWORD *)v58 + 7);
    HostProcess = DXGPROCESS::GetHostProcess(v12);
    v31 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(v61, HostProcess, 0LL, v49, v57[0], v13);
  }
  else
  {
    v30 = *(_BYTE *)(v16 + 1871) || *(_DWORD *)(v16 + 432) == 2 && *(int *)(v29 + 2692) >= 2000;
    LOBYTE(Timeout) = v30;
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v28[81] + 8LL) + 808LL))(
            v28[82],
            *((_QWORD *)v58 + 4),
            Count,
            v13,
            Timeout,
            -2);
  }
  v32 = v31;
  if ( v31 >= 0 && v4 )
  {
    v33 = (_QWORD *)(a1 + 88);
    if ( a1 + 88 >= MmUserProbeAddress )
      v33 = (_QWORD *)MmUserProbeAddress;
    *v33 = v13->VirtualAddress;
    v34 = (_QWORD *)(a1 + 96);
    if ( a1 + 96 >= MmUserProbeAddress )
      v34 = (_QWORD *)MmUserProbeAddress;
    *v34 = v13->PagingFenceValue;
  }
  if ( v23 )
    ExReleaseRundownProtection(v23 + 11);
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
  {
    v55 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v55) >= 0 )
    {
      v35 = (struct DXGTHREAD *)v55;
      if ( v55 || (v35 = DxgkThreadObjectCreateDxgThread(), (v55 = (struct _EX_RUNDOWN_REF *)v35) != 0LL) )
      {
        if ( *((_DWORD *)v35 + 12) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v35 + 12), 0LL, 0LL);
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
  if ( v60 )
    ExReleasePushLockSharedEx(v16 + 144, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
  KeLeaveCriticalRegion();
  if ( v56 )
    DXGPAGINGQUEUE::ReleaseReference(v56);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( v54 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v52);
  }
  return v32;
}
