/*
 * XREFs of ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C01CFE2C
 * Callers:
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0185C5C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C019F668 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C01E9EEC (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C02D65FC (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036AF40 (-VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACK.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C03760E8 (-VmBusSendDdiGetStandardAllocationDriverData@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PE.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a2,
        __int64 a3)
{
  int v3; // r15d
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  int v15; // r13d
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  KIRQL CurrentIrql; // al
  __int64 v20; // r12
  struct DXGTHREAD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // r9d
  struct DXGPROCESS *Current; // rax
  struct DXGTHREAD *v27; // rax
  KIRQL v28; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-49h] BYREF
  int v30; // [rsp+58h] [rbp-41h] BYREF
  __int64 v31; // [rsp+60h] [rbp-39h]
  char v32; // [rsp+68h] [rbp-31h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *v33; // [rsp+70h] [rbp-29h]
  char v34[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  v30 = -1;
  v3 = 0;
  v4 = a2;
  v33 = a2;
  v31 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 5004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5004);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 5004);
  v10 = *((_QWORD *)this + 2);
  if ( *(_BYTE *)(v10 + 209) )
  {
    Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
    LODWORD(v4) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetStandardAllocationDriverData(
                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v10 + 4344),
                    Current,
                    v4);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v13 = ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
      || (v27 = DXGTHREAD::GetCurrent()) == 0LL
      || (v14 = *((_QWORD *)v27 + 3)) == 0 )
    {
      v14 = v13;
    }
    v15 = 0;
    v16 = (v14 + 152) & -(__int64)(v14 != 0);
    if ( v16 && *(struct _KTHREAD **)(((v14 + 152) & -(__int64)(v14 != 0)) + 8) == KeGetCurrentThread() )
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
      v3 = 0;
    }
    if ( v14 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((v14 + 152) & -(__int64)(v14 != 0), 0LL) )
      {
        if ( bTracingEnabled )
        {
          v25 = *(_DWORD *)(((v14 + 152) & -(__int64)(v14 != 0)) + 0x18);
          if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v17, (const EVENT_DESCRIPTOR *)"g", v18, v25);
        }
        ExAcquirePushLockExclusiveEx((v14 + 152) & -(__int64)(v14 != 0), 0LL);
      }
      v15 = 2;
      *(_QWORD *)(((v14 + 152) & -(__int64)(v14 != 0)) + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL), 1u);
    CurrentIrql = KeGetCurrentIrql();
    v20 = CurrentIrql;
    v21 = 0LL;
    if ( CurrentIrql < 2u )
    {
      DxgThread = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0 )
      {
        v21 = DxgThread;
        if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v21 = DxgThread) != 0LL) )
          v3 = *((_DWORD *)v21 + 12);
      }
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v34,
      *((struct DXGADAPTER **)this + 2));
    v4 = (struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *)(*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *))(*((_QWORD *)this + 2) + 488LL))(
                                                              *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
                                                              v4);
    if ( v34[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v20 != KeGetCurrentIrql() )
    {
      v28 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v20, v28);
    }
    if ( v21 && *((_DWORD *)v21 + 12) != v3 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v21 + 12), v3, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
    WdLogSingleEntry3(4LL, v4, v33->AllocationPrivateDriverDataSize, v33->ResourcePrivateDriverDataSize);
    if ( (_DWORD)v4 != -1073741801 && (_DWORD)v4 )
    {
      WdLogSingleEntry1(2LL, v4);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        (__int64)v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
    if ( v15 == 2 )
    {
      *(_QWORD *)(v16 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v30);
  return (unsigned int)v4;
}
