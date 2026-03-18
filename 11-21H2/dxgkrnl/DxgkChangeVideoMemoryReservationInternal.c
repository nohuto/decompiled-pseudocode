/*
 * XREFs of DxgkChangeVideoMemoryReservationInternal @ 0x1C02D78DC
 * Callers:
 *     DxgkChangeVideoMemoryReservation @ 0x1C02D78C0 (DxgkChangeVideoMemoryReservation.c)
 *     ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0368000 (-VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C001D8C0 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01DF770 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C02C3194 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0334C04 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservationInternal(
        _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a1,
        char a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r14
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG64 v10; // rax
  struct _KTHREAD **Current; // r15
  unsigned int v12; // edi
  HANDLE hProcess; // r12
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // sf
  struct DXGPROCESS *Process; // r12
  DXGADAPTER *v20; // rdi
  int PairingAdapters; // r15d
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGADAPTER *v24; // r14
  ADAPTER_RENDER *v25; // r9
  UINT *p_PhysicalAdapterIndex; // rdx
  unsigned int v27; // r14d
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+58h] [rbp-170h] BYREF
  __int64 v32; // [rsp+60h] [rbp-168h]
  char v33; // [rsp+68h] [rbp-160h]
  struct DXGADAPTER *v34; // [rsp+70h] [rbp-158h] BYREF
  DXGADAPTER *v35; // [rsp+78h] [rbp-150h]
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v36; // [rsp+80h] [rbp-148h] BYREF
  DXGADAPTER *v37[2]; // [rsp+A0h] [rbp-128h] BYREF
  _BYTE v38[80]; // [rsp+B0h] [rbp-118h] BYREF
  _BYTE v39[144]; // [rsp+100h] [rbp-C8h] BYREF

  v3 = (struct DXGADAPTER *)a3;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2120;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2120);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2120);
  *(_QWORD *)&v36.PhysicalAdapterIndex = 0LL;
  if ( a2 )
  {
    v7 = MmUserProbeAddress;
    v10 = (ULONG64)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_OWORD *)&v36.hProcess = *(_OWORD *)v10;
    v36.Reservation = *(_QWORD *)(v10 + 16);
  }
  else
  {
    v36 = *a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  if ( !Current )
  {
    v12 = -1073741811;
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
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( !v33 )
      return v12;
    v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_17:
    if ( v17 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v31);
    return v12;
  }
  hProcess = v36.hProcess;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v38, v36.hProcess, 512);
  if ( hProcess )
  {
    v14 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v38, 1);
    v12 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry2(3LL, hProcess, v14);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v38);
      goto LABEL_15;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v38);
  }
  else
  {
    Process = (struct DXGPROCESS *)Current;
  }
  v34 = v3;
  v20 = 0LL;
  v35 = 0LL;
  if ( !v3 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v37, v36.hAdapter, Current, &v34, 1);
    if ( !v34 )
    {
      v12 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, Current, v36.hAdapter);
      if ( v37[0] )
        DXGADAPTER::ReleaseReference(v37[0]);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v38);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( !v33 )
        return v12;
      LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_17;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v34 + 3);
    v3 = v34;
    v20 = v34;
    v35 = v34;
    if ( v37[0] )
      DXGADAPTER::ReleaseReference(v37[0]);
  }
  v34 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0, &v34, (unsigned __int64 *)v37, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v3);
LABEL_32:
    if ( v20 )
      DXGADAPTER::ReleaseReference(v20);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v31);
    return (unsigned int)PairingAdapters;
  }
  v24 = v34;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v34, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
  DXGADAPTER::ReleaseReference(v24);
  if ( PairingAdapters < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    goto LABEL_32;
  }
  v25 = (ADAPTER_RENDER *)*((_QWORD *)v24 + 350);
  if ( a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    p_PhysicalAdapterIndex = &a1->PhysicalAdapterIndex;
    if ( (unsigned __int64)&a1->PhysicalAdapterIndex >= MmUserProbeAddress )
      p_PhysicalAdapterIndex = (UINT *)MmUserProbeAddress;
    v36.PhysicalAdapterIndex = *p_PhysicalAdapterIndex;
  }
  v27 = ADAPTER_RENDER::ChangeVideoMemoryReservation(v25, Process, &v36);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  if ( v20 )
    DXGADAPTER::ReleaseReference(v20);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v31);
  return v27;
}
