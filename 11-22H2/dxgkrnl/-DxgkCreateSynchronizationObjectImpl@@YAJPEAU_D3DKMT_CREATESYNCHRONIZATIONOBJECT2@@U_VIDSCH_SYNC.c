/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C01A5B7C
 * Callers:
 *     DxgkCreateSynchronizationObject @ 0x1C01E5A30 (DxgkCreateSynchronizationObject.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1C01E7D40 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkCreateSynchronizationObjectInternal @ 0x1C0352C0C (DxgkCreateSynchronizationObjectInternal.c)
 *     DxgkWslCreateSynchronizationObject @ 0x1C0354740 (DxgkWslCreateSynchronizationObject.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037BC90 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007900 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0008088 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     Feature_2683613496__private_IsEnabledDeviceUsage @ 0x1C0026A58 (Feature_2683613496__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0052A98 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01A3814 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01A6890 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1C034F384 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(
        ULONG64 a1,
        unsigned int a2,
        __int64 a3,
        struct DXGADAPTER *a4,
        UINT64 a5)
{
  unsigned int v6; // ebx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v9; // r8
  int v10; // esi
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *v11; // rax
  UINT64 FenceValue; // rax
  __int64 hDevice; // rsi
  __int64 v14; // r9
  __int64 v15; // rbx
  volatile signed __int64 *v16; // r12
  char *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rdx
  bool v24; // zf
  _DWORD *v25; // rdx
  _DWORD *v26; // rdx
  ULONG64 v27; // r13
  D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type; // ebx
  _OWORD *v29; // rax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // r9
  struct _KTHREAD **v33; // rax
  int IsEnabledDeviceUsage; // eax
  struct DXGPROCESS *v35; // rbx
  DXGPUSHLOCK *v36; // r13
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v47; // [rsp+50h] [rbp-2F8h] BYREF
  __int64 v48; // [rsp+58h] [rbp-2F0h]
  char v49; // [rsp+60h] [rbp-2E8h]
  struct DXGDEVICE *v50; // [rsp+68h] [rbp-2E0h] BYREF
  _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v51; // [rsp+70h] [rbp-2D8h] BYREF
  struct DXGDEVICE *v52; // [rsp+78h] [rbp-2D0h] BYREF
  __int64 v53; // [rsp+80h] [rbp-2C8h] BYREF
  int v54; // [rsp+88h] [rbp-2C0h]
  struct DXGADAPTER *v55; // [rsp+90h] [rbp-2B8h] BYREF
  struct DXGDEVICE *v56; // [rsp+98h] [rbp-2B0h] BYREF
  int v57; // [rsp+A0h] [rbp-2A8h]
  struct DXGADAPTER *v58[2]; // [rsp+A8h] [rbp-2A0h] BYREF
  struct DXGPROCESS *v59; // [rsp+B8h] [rbp-290h]
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v60; // [rsp+C0h] [rbp-288h] BYREF
  struct DXGSYNCOBJECT *v61; // [rsp+120h] [rbp-228h] BYREF
  __int64 v62; // [rsp+128h] [rbp-220h] BYREF
  DXGADAPTER *v63; // [rsp+130h] [rbp-218h] BYREF
  _BYTE v64[144]; // [rsp+140h] [rbp-208h] BYREF
  _BYTE v65[160]; // [rsp+1D0h] [rbp-178h] BYREF
  _BYTE v66[144]; // [rsp+270h] [rbp-D8h] BYREF
  unsigned int v67; // [rsp+358h] [rbp+10h]

  v67 = a2;
  v55 = a4;
  v54 = a3;
  v6 = a2;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2041);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2041);
  Current = DXGPROCESS::GetCurrent();
  v9 = (struct _KTHREAD **)Current;
  v59 = Current;
  if ( !Current )
  {
    v10 = -1073741811;
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
LABEL_131:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v47);
    return (unsigned int)v10;
  }
  v51.hSyncObject = *((_DWORD *)Current + 106) & 0x180;
  if ( v54 )
  {
    v11 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v60 = *v11;
    if ( (v6 & 0x7FFFFFFF) == 1 && (v60.Info.Flags.Value & 0x80000000) != 0 )
    {
      v6 = v6 & 0x80000000 | 5;
      v67 = v6;
    }
  }
  else
  {
    v60 = *(_D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
  }
  v60.hSyncObject = 0;
  if ( (v60.Info.Flags.Value & 0x7FFFFC00) != 0 )
  {
    v10 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    goto LABEL_131;
  }
  if ( ((v60.Info.Flags.Value >> 1) & 1) != 0 && (*(_BYTE *)&v60.Info.Flags.0 & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    WdLogSingleEntry1(3LL, 421LL);
    goto LABEL_51;
  }
  if ( (unsigned int)(v60.Info.Type - 5) > 1 )
  {
    if ( (*(_BYTE *)&v60.Info.Flags.0 & 0x80) != 0 )
    {
      WdLogSingleEntry1(3LL, 447LL);
      goto LABEL_51;
    }
LABEL_31:
    FenceValue = v60.Info.Fence.FenceValue;
    if ( a5 )
      FenceValue = a5;
    v60.Info.Fence.FenceValue = FenceValue;
    v52 = 0LL;
    hDevice = v60.hDevice;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v60.hDevice, v9, &v52);
    if ( !v52 && (v54 || (_DWORD)hDevice) )
    {
      v15 = hDevice;
      v10 = -1073741811;
      WdLogSingleEntry2(2LL, v15, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v15,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_128;
    }
    v61 = 0LL;
    v62 = 0LL;
    v16 = 0LL;
    v58[0] = 0LL;
    v56 = v52;
    v57 = 0;
    if ( v55 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v55, 0LL);
      v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66, 0LL);
      if ( v10 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
        v24 = v52 == 0LL;
LABEL_125:
        if ( !v24 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v56);
        DXGADAPTER_REFERENCE::Assign(v58, 0LL);
LABEL_128:
        if ( !v50 )
          goto LABEL_131;
        goto LABEL_129;
      }
      LOBYTE(v23) = 1;
      v10 = CreateSynchronizationObjectInternal(v52, v23, *((_QWORD *)v55 + 366), &v60, v6, 0, &v61, 0LL, 0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
    }
    else
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v52, 0, v14, 0);
      v17 = (char *)v52 + 16;
      v55 = (struct DXGDEVICE *)((char *)v52 + 16);
      COREADAPTERACCESS::COREADAPTERACCESS(
        (COREADAPTERACCESS *)v64,
        *(struct DXGADAPTER *const *)(*((_QWORD *)v52 + 2) + 16LL),
        0LL);
      if ( (unsigned int)(v60.Info.Type - 5) <= 1 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v56);
        v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, 0LL);
        if ( v10 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
LABEL_124:
          v24 = v56 == 0LL;
          goto LABEL_125;
        }
        v19 = *(_QWORD *)(*(_QWORD *)v17 + 16LL);
        if ( *(int *)(v19 + 2552) < 0x2000 && !*(_BYTE *)(v19 + 2852) )
        {
          WdLogSingleEntry1(3LL, 501LL);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
          if ( v56 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v56);
          DXGADAPTER_REFERENCE::Assign(v58, 0LL);
          if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
          goto LABEL_51;
        }
      }
      else
      {
        v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v64, 0LL);
        if ( v10 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v56);
          DXGADAPTER_REFERENCE::Assign(v58, 0LL);
          if ( !v50 )
            goto LABEL_131;
LABEL_129:
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
          goto LABEL_131;
        }
      }
      v16 = *(volatile signed __int64 **)(*(_QWORD *)v17 + 16LL);
      v58[0] = (struct DXGADAPTER *)v16;
      if ( v16 )
      {
        _InterlockedIncrement64(v16 + 3);
        v58[1] = (struct DXGADAPTER *)-1LL;
        v6 = v67;
        v16 = (volatile signed __int64 *)v58[0];
      }
      v53 = 0LL;
      LOBYTE(v18) = 1;
      v10 = CreateSynchronizationObjectInternal(v52, v18, *(_QWORD *)v55, &v60, v6, 0, &v61, &v53, &v62);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    }
    if ( v10 >= 0 )
    {
      if ( v54 )
      {
        v25 = (_DWORD *)(a1 + 88);
        if ( a1 + 88 >= MmUserProbeAddress )
          v25 = (_DWORD *)MmUserProbeAddress;
        *v25 = v60.hSyncObject;
        if ( (*(_BYTE *)&v60.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v60.Info.Flags.0 & 2) == 0 || v51.hSyncObject) )
        {
          v26 = (_DWORD *)(a1 + 80);
          if ( a1 + 80 >= MmUserProbeAddress )
            v26 = (_DWORD *)MmUserProbeAddress;
          *v26 = v60.Info.SharedHandle;
        }
        v27 = a1 + 16;
        Type = v60.Info.Type;
        if ( v60.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          v29 = (_OWORD *)v27;
          if ( v27 >= MmUserProbeAddress )
            v29 = (_OWORD *)MmUserProbeAddress;
          *v29 = *(_OWORD *)&v60.Info.SynchronizationMutex.InitialState;
          v29[1] = *(_OWORD *)&v60.Info.Reserved.Reserved[2];
        }
        if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          if ( v27 >= MmUserProbeAddress )
            v27 = MmUserProbeAddress;
          *(_OWORD *)v27 = *(_OWORD *)&v60.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)(v27 + 16) = *(_OWORD *)&v60.Info.Reserved.Reserved[2];
          *(_QWORD *)(v27 + 32) = v60.Info.Reserved.Reserved[4];
        }
      }
      else
      {
        *(_DWORD *)(a1 + 88) = v60.hSyncObject;
        if ( (*(_BYTE *)&v60.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v60.Info.Flags.0 & 2) == 0 || v51.hSyncObject) )
          *(_DWORD *)(a1 + 80) = v60.Info.SharedHandle;
        Type = v60.Info.Type;
        v30 = *(_OWORD *)&v60.Info.SynchronizationMutex.InitialState;
        v31 = *(_OWORD *)&v60.Info.Reserved.Reserved[2];
        if ( v60.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v60.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)(a1 + 32) = v31;
        }
        if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
        {
          *(_OWORD *)(a1 + 16) = v30;
          *(_OWORD *)(a1 + 32) = v31;
          *(_QWORD *)(a1 + 48) = v60.Info.Reserved.Reserved[4];
        }
      }
      if ( bTracingEnabled )
      {
        v32 = v62 ? *(_QWORD *)(v62 + 32) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventOpenSyncObject,
            v22,
            v32,
            v60.hSyncObject,
            v52);
      }
      if ( Type == D3DDDI_PERIODIC_MONITORED_FENCE )
      {
        v55 = 0LL;
        v33 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
        DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v63, v60.Info.Semaphore.MaxCount, v33, &v55, 1);
        if ( v55 )
        {
          v10 = CreatePeriodicMonitoredFenceNotificationInternal(v55, (struct DXGADAPTER *)v16, v61, &v60, 0);
        }
        else
        {
          v10 = -1073741811;
          WdLogSingleEntry2(3LL, v60.Info.Semaphore.MaxCount, -1073741811LL);
        }
        if ( v63 )
          DXGADAPTER::ReleaseReference(v63);
      }
      IsEnabledDeviceUsage = Feature_2683613496__private_IsEnabledDeviceUsage();
      v35 = v59;
      v36 = (struct DXGPROCESS *)((char *)v59 + 248);
      if ( IsEnabledDeviceUsage )
      {
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v59 + 248));
        v37 = (v60.hSyncObject >> 6) & 0xFFFFFF;
        if ( (unsigned int)v37 < *((_DWORD *)v35 + 74) )
        {
          v38 = *((_QWORD *)v35 + 35);
          if ( ((v60.hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
            && (*(_DWORD *)(v38 + 16 * v37 + 8) & 0x1F) != 0 )
          {
            v39 = 2 * ((*(_QWORD *)&v60.hSyncObject >> 6) & 0xFFFFFFLL);
            if ( (*(_DWORD *)(v38 + 16 * ((*(_QWORD *)&v60.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry1(1LL, 222LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                222LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*((_QWORD *)v59 + 35) + 8 * v39 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v36 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v36, 0LL);
        KeLeaveCriticalRegion();
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v56);
      }
      else
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v56);
        DXGPUSHLOCK::AcquireExclusive(v36);
        v41 = (v60.hSyncObject >> 6) & 0xFFFFFF;
        if ( (unsigned int)v41 < *((_DWORD *)v35 + 74) )
        {
          v42 = *((_QWORD *)v35 + 35);
          if ( ((v60.hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v42 + 16 * v41 + 8) & 0x60)
            && (*(_DWORD *)(v42 + 16 * v41 + 8) & 0x1F) != 0 )
          {
            v43 = 2 * ((*(_QWORD *)&v60.hSyncObject >> 6) & 0xFFFFFFLL);
            if ( (*(_DWORD *)(v42 + 16 * ((*(_QWORD *)&v60.hSyncObject >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry1(1LL, 222LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                222LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*((_QWORD *)v59 + 35) + 8 * v43 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)v36 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v36, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v10 < 0 )
      {
        v51.hSyncObject = v60.hSyncObject;
        DxgkDestroySynchronizationObjectImpl(&v51, 0, v40);
      }
      if ( v56 && v57 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v56 + 17));
        KeLeaveCriticalRegion();
      }
      if ( v16 && _InterlockedExchangeAdd64(v16 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58[0] + 2), v58[0]);
      goto LABEL_128;
    }
    WdLogSingleEntry1(3LL, v10);
    goto LABEL_124;
  }
  if ( a4 )
  {
    WdLogSingleEntry1(3LL, 430LL);
  }
  else if ( (*(_BYTE *)&v60.Info.Flags.0 & 1) == 0 || ((v60.Info.Flags.Value >> 1) & 1) != 0 )
  {
    if ( (*(_BYTE *)&v60.Info.Flags.0 & 0x10) == 0 || (*(_BYTE *)&v60.Info.Flags.0 & 0x20) == 0 )
      goto LABEL_31;
    WdLogSingleEntry1(3LL, 441LL);
  }
  else
  {
    WdLogSingleEntry1(3LL, 435LL);
  }
LABEL_51:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v47);
  return (unsigned int)-1073741811;
}
